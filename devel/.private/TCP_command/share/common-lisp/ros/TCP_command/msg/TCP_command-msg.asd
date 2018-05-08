
(cl:in-package :asdf)

(defsystem "TCP_command-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
)
  :components ((:file "_package")
    (:file "tcpCommand" :depends-on ("_package_tcpCommand"))
    (:file "_package_tcpCommand" :depends-on ("_package"))
  ))