#!/usr/bin/env python
import rospy
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
import sys

class Glob:
    start_x = 0
    current_x = 0
    start_y = 0
    current = 0
    first_call = 1

def pose_callback(pose):
    if Glob.first_call:
        Glob.first_call = 0
        Glob.start_x = pose.x
        Glob.start_y = pose.y
    Glob.current_x = pose.x
    Glob.current_y = pose.y
    rospy.loginfo("Robot X=%f : Y=%f : Z=%f\n", pose.x, pose.y, pose.theta)

def move_turtle():
    rospy.init_node('move_turtle', anonymous=False)
    pub = rospy.Publisher('/turtle1/cmd_vel', Twist, queue_size=10)
    rospy.Subscriber('/turtle1/pose',Pose, pose_callback)
    rate = rospy.Rate(10) # 10hz
    vel = Twist()
    vel.linear.x = -1
    while not rospy.is_shutdown() and Glob.start_x - Glob.current_x < 1:
        pub.publish(vel)
        rate.sleep()

    vel.linear.x = 0
    vel.linear.y = -1

    while not rospy.is_shutdown() and Glob.start_y - Glob.current_y < 1:
        pub.publish(vel)
        rate.sleep()

    vel.linear.y = 0
    vel.linear.x = 1
    vel.angular.z = -1
    i = 0

    while not rospy.is_shutdown():
        if i > 3 and Glob.start_x - Glob.current_x >= 1:
            vel.linear.x = 0
            vel.angular.z = 0
            pub.publish(vel)
            break
        pub.publish(vel)
        rate.sleep()
        i += 1


if __name__ == '__main__':
    try:
        move_turtle()
    except rospy.ROSInterruptException:
        pass
