
(cl:in-package :asdf)

(defsystem "puppeteer_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
)
  :components ((:file "_package")
    (:file "PointPlus" :depends-on ("_package_PointPlus"))
    (:file "_package_PointPlus" :depends-on ("_package"))
    (:file "State" :depends-on ("_package_State"))
    (:file "_package_State" :depends-on ("_package"))
  ))