#include <ros/ros.h>
#include <nav_msgs/GetMap.h>
#include <mapping/CleanMap.h>
#include <vector>
#include <fstream>

using namespace std;


int rows;
int cols;
double mapResolution;
vector<vector<int> > grid;
nav_msgs::OccupancyGrid cleaned_map;

void readMap(const nav_msgs::OccupancyGrid& map)
{
    ROS_INFO("Received a %d X %d map @ %.3f m/px\n", map.info.width, map.info.height, map.info.resolution);

    rows = map.info.height;
    cols = map.info.width;
    mapResolution = map.info.resolution;

    grid.resize(rows); // Dynamically resize the grid
    for (int i=0; i<rows; i++) { grid[i].resize(cols); }

    int currCell = 0;
    for (int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            if (map.data[currCell] == 0) // unoccupied cell
                grid[i][j] = map.data[currCell];
            else
                grid[i][j] = map.data[currCell]; //occupied (100) or unknown cell (-1)
            currCell++;
        }
    }
}

bool requestMap(ros::NodeHandle &nh)
{
    nav_msgs::GetMap::Request req;
    nav_msgs::GetMap::Response res;

    while (!ros::service::waitForService("static_map", ros::Duration(3.0))) {
         ROS_INFO("Waiting for service static_map to become available");
    }

    ROS_INFO("Requesting the map...");
    ros::ServiceClient mapClient = nh.serviceClient<nav_msgs::GetMap>("static_map");
 
    if (mapClient.call(req, res)) {
        mapping::CleanMap::Request map_req;
        mapping::CleanMap::Response map_res;
        ROS_INFO("Requesting cleaning the map...");
        ros::ServiceClient mapClean = nh.serviceClient<mapping::CleanMap>("map_clean_server");
        map_req.map = res.map;
        mapClean.call(map_req, map_res);
        ROS_INFO("Finish cleaning the map...");
        cleaned_map = map_res.map;
        readMap(map_res.map);
        return true;
    }
    else {
        ROS_ERROR("Failed to call map service");
        return false;
    }
}

void printGridToFile() {
    ROS_INFO("Print info to file grid.txt");
    std::ofstream gridFile;
    gridFile.open("grid1.txt");
  
    for (int i = grid.size() - 1; i >= 0; i--) {        
        for (int j = 0; j < grid[i].size(); j++) {
        gridFile << (grid[i][j] ? "1" : "0");           
        }
        gridFile << endl;
    }
    gridFile.close();
}

int main(int argc, char** argv)
{
    ros::init(argc, argv, "load_map");
    ros::NodeHandle nh;

    if (!requestMap(nh))
        exit(-1);

    ros::Rate rate(100);
    ros::Publisher pub = nh.advertise<nav_msgs::OccupancyGrid>("new_map", 10);
    while(ros::ok()){
        pub.publish(cleaned_map);
        ros::spinOnce();
        rate.sleep();
    }

    return 0;
}
