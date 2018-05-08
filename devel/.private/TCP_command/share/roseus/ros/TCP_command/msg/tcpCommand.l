;; Auto-generated. Do not edit!


(when (boundp 'TCP_command::tcpCommand)
  (if (not (find-package "TCP_COMMAND"))
    (make-package "TCP_COMMAND"))
  (shadow 'tcpCommand (find-package "TCP_COMMAND")))
(unless (find-package "TCP_COMMAND::TCPCOMMAND")
  (make-package "TCP_COMMAND::TCPCOMMAND"))

(in-package "ROS")
;;//! \htmlinclude tcpCommand.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass TCP_command::tcpCommand
  :super ros::object
  :slots (_header _pedal_percent _steering_percent _engineCut ))

(defmethod TCP_command::tcpCommand
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:pedal_percent __pedal_percent) 0.0)
    ((:steering_percent __steering_percent) 0.0)
    ((:engineCut __engineCut) nil)
    )
   (send-super :init)
   (setq _header __header)
   (setq _pedal_percent (float __pedal_percent))
   (setq _steering_percent (float __steering_percent))
   (setq _engineCut __engineCut)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:pedal_percent
   (&optional __pedal_percent)
   (if __pedal_percent (setq _pedal_percent __pedal_percent)) _pedal_percent)
  (:steering_percent
   (&optional __steering_percent)
   (if __steering_percent (setq _steering_percent __steering_percent)) _steering_percent)
  (:engineCut
   (&optional __engineCut)
   (if __engineCut (setq _engineCut __engineCut)) _engineCut)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; float32 _pedal_percent
    4
    ;; float32 _steering_percent
    4
    ;; bool _engineCut
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; float32 _pedal_percent
       (sys::poke _pedal_percent (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _steering_percent
       (sys::poke _steering_percent (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; bool _engineCut
       (if _engineCut (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; float32 _pedal_percent
     (setq _pedal_percent (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _steering_percent
     (setq _steering_percent (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; bool _engineCut
     (setq _engineCut (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get TCP_command::tcpCommand :md5sum-) "cb9f13edb602ecedcba46b66e50aa708")
(setf (get TCP_command::tcpCommand :datatype-) "TCP_command/tcpCommand")
(setf (get TCP_command::tcpCommand :definition-)
      "Header header
float32 pedal_percent
float32 steering_percent
bool engineCut

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

")



(provide :TCP_command/tcpCommand "cb9f13edb602ecedcba46b66e50aa708")


