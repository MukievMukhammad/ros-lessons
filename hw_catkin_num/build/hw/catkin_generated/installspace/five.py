#!/usr/bin/env python3
import rospy
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
import sys

start_x = 0
current_x = 0
start_y = 0
current = 0
first_call = True

def pose_callback(pose):
	if first_call:
		first_call = False
		start_x = pose.x
		start_y = pose.y
	current_x = pose.x
	current_y = pose.y
	rospy.loginfo("Robot X=%f : Y=%f : Z=%f\n", pose.x, pose.y, pose.theta)

def move_turtle():
	rospy.init_node('move_turtle', anonymous=False)
	pub = rospy.Publisher('/turtle1/cmd_vel', Twist, queue_size=10)
	rospy.Subscriber('/turtle1/pose',Pose, pose_callback)
	rate = rospy.Rate(10) # 10hz
	vel = Twist()
	vel.linear.x = -1
	while not rospy.is_shutdown() and start_x - current_x < 1:
		pub.publish(vel)
		rate.sleep()

if __name__ == '__main__':
	try:
		move_turtle()
	except rospy.ROSInterruptException:
		pass