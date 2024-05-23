;; Auto-generated. Do not edit!


(when (boundp 'car_msgs::MotorsControl)
  (if (not (find-package "CAR_MSGS"))
    (make-package "CAR_MSGS"))
  (shadow 'MotorsControl (find-package "CAR_MSGS")))
(unless (find-package "CAR_MSGS::MOTORSCONTROL")
  (make-package "CAR_MSGS::MOTORSCONTROL"))

(in-package "ROS")
;;//! \htmlinclude MotorsControl.msg.html


(defclass car_msgs::MotorsControl
  :super ros::object
  :slots (_left _right ))

(defmethod car_msgs::MotorsControl
  (:init
   (&key
    ((:left __left) 0)
    ((:right __right) 0)
    )
   (send-super :init)
   (setq _left (round __left))
   (setq _right (round __right))
   self)
  (:left
   (&optional __left)
   (if __left (setq _left __left)) _left)
  (:right
   (&optional __right)
   (if __right (setq _right __right)) _right)
  (:serialization-length
   ()
   (+
    ;; int16 _left
    2
    ;; int16 _right
    2
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int16 _left
       (write-word _left s)
     ;; int16 _right
       (write-word _right s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int16 _left
     (setq _left (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _right
     (setq _right (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;;
   self)
  )

(setf (get car_msgs::MotorsControl :md5sum-) "09d1b2323a1aeae9343e81809a820b60")
(setf (get car_msgs::MotorsControl :datatype-) "car_msgs/MotorsControl")
(setf (get car_msgs::MotorsControl :definition-)
      "# PWM control for left and right motors
int16 left
int16 right
")



(provide :car_msgs/MotorsControl "09d1b2323a1aeae9343e81809a820b60")


