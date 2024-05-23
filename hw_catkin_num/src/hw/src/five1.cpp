#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include "turtlesim/Pose.h"

static double theta = 0;
static double PI = 3.1415926535897;
static int a = 0;
static double poseStart;
static double poseCurrent;
static double poseStart_y;
static double poseCurrent_y;
static double angular_speed = PI;


void poseCallback(const turtlesim::PoseConstPtr& msg) // Topic messages callback
{
  if (a==0) {
        poseStart = msg->x;
        poseStart_y = msg->y;
        a=1;
  }
  poseCurrent = msg->x;
  poseCurrent_y = msg->y;
  ROS_INFO("x: %.2f, y: %.2f", msg->x, msg->y);

}

void rotate(double angle, ros::Publisher pub)
{
    geometry_msgs::Twist msg;
    //msg.linear.x = FORWARD_SPEED_MPS;
    msg.angular.z = angular_speed;

    double current_angle = 0;
    double t0 = ros::Time::now().toSec();
    double relative_angle = angle*2*PI/360;

    ros::Rate rate(1);

    while (ros::ok() && current_angle < relative_angle)
    {
      pub.publish(msg);
      double t1 = ros::Time::now().toSec();
      current_angle = angular_speed*(t1-t0);
      rate.sleep();
    }
    msg.angular.z = 0;
    pub.publish(msg);
    ros::Duration(0.5).sleep();
}

void go_forward(double dist, double x, double y, ros::Publisher pub, ros::Subscriber sub)
{
    a = 0;
    geometry_msgs::Twist msg;
    msg.linear.x = 1;
    
    ros::Rate rate(10);

    while (ros::ok() && ((x == 1 && poseStart - poseCurrent < dist) || (y == 1 && poseStart_y - poseCurrent_y < dist)))
    {
      ROS_INFO("start: %.2f, current: %.2f", poseStart, poseCurrent);
      pub.publish(msg);
      ros::spinOnce(); // Allow processing of incoming messages
      rate.sleep();
    }
}


int main(int argc, char ** argv)
{
    const double FORWARD_SPEED_MPS = 0.5;

    ros::init(argc, argv, "move_turtle");
    ros::NodeHandle node;

    ros::Publisher pub = node.advertise<geometry_msgs::Twist>("turtle1/cmd_vel", 10);
    ros::Subscriber sub = node.subscribe("turtle1/pose", 1, poseCallback);

    rotate(180, pub);
    go_forward(1, 1, 0, pub, sub);
    
    rotate(90, pub);
    go_forward(1, 0, 1, pub, sub);

    return 0;
}
