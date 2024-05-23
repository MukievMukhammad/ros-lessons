import rospy
import datetime

def now():
    rospy.init_node("timer_node", anonymous=False)
    rate = rospy.Rate(2)
    while not rospy.is_shutdown():
        rospy.loginfo(datetime.datetime.now().strftime("%H:%M %d:%m:%Y"))
        rate.sleep()

if __name__ == "__main__":
    try:
        now()
    except rospy.ROSInterruptException:
        pass
