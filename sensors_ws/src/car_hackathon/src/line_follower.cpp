#include <ros/ros.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <car_msgs/MotorsControl.h>
#include <stdint.h>

void image_callback(const sensor_msgs::Image::ConstPtr& msg);
void motors(int16_t left, int16_t right);
int16_t truncate(int16_t pwm);

const uint16_t MAX_PWM = 255;

ros::Publisher pub;

int main(int argc, char** argv)
{
    ros::init(argc, argv, "line_follower");
    ros::NodeHandle nh;

    auto sub = nh.subscribe("/car_gazebo/camera1/image_raw", 5, image_callback);
    pub = nh.advertise<car_msgs::MotorsControl>("/motors_commands", 10);

    ros::spin();
    return 0;
}

void image_callback(const sensor_msgs::ImageConstPtr& msg)
{        
    cv_bridge::CvImagePtr cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8);
    cv::Mat image = cv_ptr->image;

    // TODO: control the motors
    // motors(50,50);

    cv::imshow("img", image);
    cv::waitKey(1);
}

void motors(int16_t left, int16_t right)
{
    car_msgs::MotorsControl msg;
    msg.left = truncate(left);
    msg.right = truncate(right);
    pub.publish(msg);
}

int16_t truncate(int16_t pwm)
{
    if(pwm < -MAX_PWM)
        return -MAX_PWM;
    if(pwm > MAX_PWM)
        return MAX_PWM;
    return pwm;
}