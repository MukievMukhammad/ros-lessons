#include <chrono>
#include "ros/ros.h"
int main(int argc, char **argv)
{
	ros::init(argc, argv, "timer_node");
	ros::NodeHandle nh;
	ros::Rate loop_rate(2);
	while(ros::ok())
	{
		auto t = std::time(nullptr);
		auto tm = *std::localtime(&t);
		ROS_INFO_STREAM(std::put_time(&tm, "%H:%M %d:%m:%Y"));
		ros::spinOnce();
		loop_rate.sleep();
	}
	return 0;
}
