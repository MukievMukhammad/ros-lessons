
(cl:in-package :asdf)

(defsystem "car_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "MotorsControl" :depends-on ("_package_MotorsControl"))
    (:file "_package_MotorsControl" :depends-on ("_package"))
  ))