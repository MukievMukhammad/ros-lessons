#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include "turtlesim/Pose.h"
#include <iostream>
using namespace std;

static int a = 0;
static double poseStart;
static double poseCurrent;

static double poseStart_y;
static double poseCurrent_y;


void poseCallback(const turtlesim::PoseConstPtr& msg) // Topic messages callback
{
  if (a==0) {
  	poseStart = msg->x;
	poseStart_y = msg->y;
  	a=1;
  }
  poseCurrent = msg->x;
  poseCurrent_y = msg->y;
  //ROS_INFO("x: %.2f, y: %.2f", msg->x, msg->y);
}

int main(int argc, char ** argv)
{
    const double FORWARD_SPEED_MPS = 0.5;
    string robot_name = "turtle1";

    ros::init(argc, argv, "move_turtle");   //Initialize the node
    ros::NodeHandle node;

    // A publisher for the movement data
    ros::Publisher pub = node.advertise<geometry_msgs::Twist>(robot_name + "/cmd_vel", 10);

    // A listener for pose
    ros::Subscriber sub = node.subscribe(robot_name + "/pose", 10, poseCallback);

    // Drive forward at a given speed. The robot points up the x-axis.
    // The default constuctor will set all commands to 0.

    geometry_msgs::Twist msg;
    msg.linear.x = -FORWARD_SPEED_MPS;

    // Loop at 10Hz, publishing movement conmmands until we shut down.
    ros::Rate rate(10);
    ROS_INFO("Starting to move forward");

    while (ros::ok() && poseStart - poseCurrent < 1.0)
    {
	      ROS_INFO("current: %.2f, start: %.2f", poseCurrent, poseStart);
      pub.publish(msg);
      ros::spinOnce(); // Allow processing of incoming messages
      rate.sleep();
    }

    msg.linear.x = 0;
    msg.linear.y = -FORWARD_SPEED_MPS;

    while (ros::ok() && poseStart_y - poseCurrent_y < 1.0)
    {
              ROS_INFO("current_y: %.2f, start_y: %.2f", poseCurrent_y, poseStart_y);
      pub.publish(msg);
      ros::spinOnce(); // Allow processing of incoming messages
      rate.sleep();
    }

    msg.angular.z = -FORWARD_SPEED_MPS*1.3;
    msg.linear.y = 0;
    msg.linear.x = FORWARD_SPEED_MPS;

    int i = 0;

    while (ros::ok())
    {
	    if(i > 3 && poseStart - poseCurrent > 1.0) break;
              ROS_INFO("current: %.2f, start: %.2f", poseCurrent, poseStart);
      pub.publish(msg);
      ros::spinOnce(); // Allow processing of incoming messages
      rate.sleep();
      i++;
    }



    return 0;
}
