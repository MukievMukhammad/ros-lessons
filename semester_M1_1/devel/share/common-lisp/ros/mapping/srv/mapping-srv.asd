
(cl:in-package :asdf)

(defsystem "mapping-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :nav_msgs-msg
)
  :components ((:file "_package")
    (:file "CleanMap" :depends-on ("_package_CleanMap"))
    (:file "_package_CleanMap" :depends-on ("_package"))
  ))