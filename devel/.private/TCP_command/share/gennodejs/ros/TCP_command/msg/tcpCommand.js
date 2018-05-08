// Auto-generated. Do not edit!

// (in-package TCP_command.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class tcpCommand {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.pedal_percent = null;
      this.steering_percent = null;
      this.engineCut = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('pedal_percent')) {
        this.pedal_percent = initObj.pedal_percent
      }
      else {
        this.pedal_percent = 0.0;
      }
      if (initObj.hasOwnProperty('steering_percent')) {
        this.steering_percent = initObj.steering_percent
      }
      else {
        this.steering_percent = 0.0;
      }
      if (initObj.hasOwnProperty('engineCut')) {
        this.engineCut = initObj.engineCut
      }
      else {
        this.engineCut = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type tcpCommand
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [pedal_percent]
    bufferOffset = _serializer.float32(obj.pedal_percent, buffer, bufferOffset);
    // Serialize message field [steering_percent]
    bufferOffset = _serializer.float32(obj.steering_percent, buffer, bufferOffset);
    // Serialize message field [engineCut]
    bufferOffset = _serializer.bool(obj.engineCut, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type tcpCommand
    let len;
    let data = new tcpCommand(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [pedal_percent]
    data.pedal_percent = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [steering_percent]
    data.steering_percent = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [engineCut]
    data.engineCut = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 9;
  }

  static datatype() {
    // Returns string type for a message object
    return 'TCP_command/tcpCommand';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'cb9f13edb602ecedcba46b66e50aa708';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    Header header
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
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new tcpCommand(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.pedal_percent !== undefined) {
      resolved.pedal_percent = msg.pedal_percent;
    }
    else {
      resolved.pedal_percent = 0.0
    }

    if (msg.steering_percent !== undefined) {
      resolved.steering_percent = msg.steering_percent;
    }
    else {
      resolved.steering_percent = 0.0
    }

    if (msg.engineCut !== undefined) {
      resolved.engineCut = msg.engineCut;
    }
    else {
      resolved.engineCut = false
    }

    return resolved;
    }
};

module.exports = tcpCommand;
