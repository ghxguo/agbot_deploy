; Auto-generated. Do not edit!


(cl:in-package TCP_command-msg)


;//! \htmlinclude tcpCommand.msg.html

(cl:defclass <tcpCommand> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (pedal_percent
    :reader pedal_percent
    :initarg :pedal_percent
    :type cl:float
    :initform 0.0)
   (steering_percent
    :reader steering_percent
    :initarg :steering_percent
    :type cl:float
    :initform 0.0)
   (engineCut
    :reader engineCut
    :initarg :engineCut
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass tcpCommand (<tcpCommand>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <tcpCommand>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'tcpCommand)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name TCP_command-msg:<tcpCommand> is deprecated: use TCP_command-msg:tcpCommand instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <tcpCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader TCP_command-msg:header-val is deprecated.  Use TCP_command-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'pedal_percent-val :lambda-list '(m))
(cl:defmethod pedal_percent-val ((m <tcpCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader TCP_command-msg:pedal_percent-val is deprecated.  Use TCP_command-msg:pedal_percent instead.")
  (pedal_percent m))

(cl:ensure-generic-function 'steering_percent-val :lambda-list '(m))
(cl:defmethod steering_percent-val ((m <tcpCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader TCP_command-msg:steering_percent-val is deprecated.  Use TCP_command-msg:steering_percent instead.")
  (steering_percent m))

(cl:ensure-generic-function 'engineCut-val :lambda-list '(m))
(cl:defmethod engineCut-val ((m <tcpCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader TCP_command-msg:engineCut-val is deprecated.  Use TCP_command-msg:engineCut instead.")
  (engineCut m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <tcpCommand>) ostream)
  "Serializes a message object of type '<tcpCommand>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'pedal_percent))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'steering_percent))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'engineCut) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <tcpCommand>) istream)
  "Deserializes a message object of type '<tcpCommand>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'pedal_percent) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'steering_percent) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:slot-value msg 'engineCut) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<tcpCommand>)))
  "Returns string type for a message object of type '<tcpCommand>"
  "TCP_command/tcpCommand")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'tcpCommand)))
  "Returns string type for a message object of type 'tcpCommand"
  "TCP_command/tcpCommand")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<tcpCommand>)))
  "Returns md5sum for a message object of type '<tcpCommand>"
  "cb9f13edb602ecedcba46b66e50aa708")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'tcpCommand)))
  "Returns md5sum for a message object of type 'tcpCommand"
  "cb9f13edb602ecedcba46b66e50aa708")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<tcpCommand>)))
  "Returns full string definition for message of type '<tcpCommand>"
  (cl:format cl:nil "Header header~%float32 pedal_percent~%float32 steering_percent~%bool engineCut~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'tcpCommand)))
  "Returns full string definition for message of type 'tcpCommand"
  (cl:format cl:nil "Header header~%float32 pedal_percent~%float32 steering_percent~%bool engineCut~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <tcpCommand>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4
     4
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <tcpCommand>))
  "Converts a ROS message object to a list"
  (cl:list 'tcpCommand
    (cl:cons ':header (header msg))
    (cl:cons ':pedal_percent (pedal_percent msg))
    (cl:cons ':steering_percent (steering_percent msg))
    (cl:cons ':engineCut (engineCut msg))
))
