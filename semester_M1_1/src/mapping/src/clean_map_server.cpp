#include "ros/ros.h"
#include "mapping/CleanMap.h"
#include <nav_msgs/GetMap.h>


bool clean(mapping::CleanMap::Request  &req,
          mapping::CleanMap::Response &res)
{
  nav_msgs::OccupancyGrid map = req.map;
  int rows = map.info.height;
  int cols = map.info.width;
  
  for (int i=1; i < rows-1; i++)
    for (int j=1; j < cols-1; j++)
    {
      auto idx = i*cols + j;
      if (map.data[idx] == map.data[idx-1]) continue;

      if (//map.data[idx] != map.data[idx-cols] &&
          map.data[idx] != map.data[idx+1] &&
          //map.data[idx] != map.data[idx+cols] 

          // && map.data[idx] != map.data[idx-cols-1] &&
          // map.data[idx] != map.data[idx-cols+1] &&
          // map.data[idx] != map.data[idx+cols-1] &&
          // map.data[idx] != map.data[idx+cols+1] && 
      )
        map.data[idx] = !map.data[idx]; //clean_single();
      
      if (map.data[idx] == map.data[idx+1] &&
          map.data[idx] == map.data[idx+cols] &&
          map.data[idx] == map.data[idx+cols+1] &&
          
          map.data[idx] != map.data[idx-cols-1] &&
          map.data[idx] != map.data[idx-cols] &&
          map.data[idx] != map.data[idx-cols+1] &&
          map.data[idx] != map.data[idx-cols+2] &&
          map.data[idx] != map.data[idx+2] &&
          map.data[idx] != map.data[idx+cols+2] &&
          map.data[idx] != map.data[idx+2*cols+2] &&
          map.data[idx] != map.data[idx+2*cols+1] &&
          map.data[idx] != map.data[idx+2*cols] &&
          map.data[idx] != map.data[idx+2*cols-1] &&
          map.data[idx] != map.data[idx+cols-1]
          )
        {
           map.data[idx] = !map.data[idx];
           map.data[idx+1] = !map.data[idx+1];
           map.data[idx+cols] = !map.data[idx+cols];
           map.data[idx+cols+1] = !map.data[idx+cols+1];
        }
    }
  res.map = map;
  return true;
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "map_clean_server");
  ros::NodeHandle n;

  ros::ServiceServer service = n.advertiseService("map_clean_server", clean);
  ROS_INFO("Ready to clean map.");
  ros::spin();

  return 0;
}
