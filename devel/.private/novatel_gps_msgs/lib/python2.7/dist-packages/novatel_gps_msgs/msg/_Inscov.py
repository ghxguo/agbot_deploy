# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from novatel_gps_msgs/Inscov.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import novatel_gps_msgs.msg
import std_msgs.msg

class Inscov(genpy.Message):
  _md5sum = "a4ae1586410fc24e8ab4019825bb8bdd"
  _type = "novatel_gps_msgs/Inscov"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """# INS Covariance Matrices

Header header

NovatelMessageHeader novatel_msg_header

uint32 week
float64 seconds
float64[9] position_covariance
float64[9] attitude_covariance
float64[9] velocity_covariance

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

================================================================================
MSG: novatel_gps_msgs/NovatelMessageHeader
# Novatel Message Header

string message_name
string port
uint32 sequence_num
float32 percent_idle_time
string gps_time_status
uint32 gps_week_num
float64 gps_seconds

# Bit       Mask      Description
#  0     0x00000001   Error flag (Bit = 0: No Error, Bit = 1: Error)
#  1     0x00000002   Temperature Status (0: Within Spec, 1: Warning)
#  2     0x00000004   Voltage Supply Status (0: OK, 1: Warning)
#  3     0x00000008   Antenna Power Status (0: Powered, 1: Not Powered)
#  4     0x00000010   <Reserved>
#  5     0x00000020   Antenna open flag (0: OK, 1: Open)
#  6     0x00000040   Antenna shorted flag (0: OK, 1: Shorted)
#  7     0x00000080   CPU overload flag
#  8     0x00000100   COM1 buffer overrun flag (0: No overrun, 1: Overrun)
#  9     0x00000200   COM2 buffer overrun flag (0: No overrun, 1: Overrun)
#  10    0x00000400   COM3 buffer overrun flag (0: No overrun, 1: Overrun)
#  11    0x00000800   USB buffer overrun flag (0: No overrun, 1: Overrun)
#  12    0x00001000   <Reserved>
#  13    0x00002000   <Reserved>
#  14    0x00004000   <Reserved>
#  15    0x00008000   RF1 AGC Status (0: OK, 1: Bad)
#  16    0x00010000   <Reserverd>
#  17    0x00020000   RF2 AGC status (0: OK, 1: Bad)
#  18    0x00040000   Almanac flag/UTC known (0: Valid, 1: Invalid)
#  19    0x00080000   Position solution flag (0: Valid, 1: Invalid)
#  20    0x00100000   Position fixed flag (0: Not fixed, 1: Fixed)
#  21    0x00200000   Clock steering status (0: Enabled, 1: Disabled)
#  22    0x00400000   Clock model flag (0: Valid, 1: Invalid)
#  23    0x00800000   OEMV external oscillator flag (0: Disabled, 1: Enabled)
#  24    0x01000000   Software resource (0: OK, 1: Warning)
#  25    0x02000000   <Reserved>
#  26    0x04000000   <Reserved>
#  27    0x08000000   <Reserved>
#  28    0x10000000   <Reserved>
#  29    0x20000000   Auxiliary 3 status event flag (0: No event, 1: Event)
#  30    0x40000000   Auxiliary 2 status event flag (0: No event, 1: Event)
#  31    0x80000000   Auxiliary 1 status event flag (0: No event, 1: Event)
NovatelReceiverStatus receiver_status

# Receiver build number (0-65535)
uint32 receiver_software_version
================================================================================
MSG: novatel_gps_msgs/NovatelReceiverStatus
# From the original Novatel receiver status message bitfield
#  0     0x00000001   Error flag (Bit = 0: No Error, Bit = 1: Error)
#  1     0x00000002   Temperature Status (0: Within Spec, 1: Warning)
#  2     0x00000004   Voltage Supply Status (0: OK, 1: Warning)
#  3     0x00000008   Antenna Power Status (0: Powered, 1: Not Powered)
#  4     0x00000010   <Reserved>
#  5     0x00000020   Antenna open flag (0: OK, 1: Open)
#  6     0x00000040   Antenna shorted flag (0: OK, 1: Shorted)
#  7     0x00000080   CPU overload flag
#  8     0x00000100   COM1 buffer overrun flag (0: No overrun, 1: Overrun)
#  9     0x00000200   COM2 buffer overrun flag (0: No overrun, 1: Overrun)
#  10    0x00000400   COM3 buffer overrun flag (0: No overrun, 1: Overrun)
#  11    0x00000800   USB buffer overrun flag (0: No overrun, 1: Overrun)
#  12    0x00001000   <Reserved>
#  13    0x00002000   <Reserved>
#  14    0x00004000   <Reserved>
#  15    0x00008000   RF1 AGC Status (0: OK, 1: Bad)
#  16    0x00010000   <Reserverd>
#  17    0x00020000   RF2 AGC status (0: OK, 1: Bad)
#  18    0x00040000   Almanac flag/UTC known (0: Valid, 1: Invalid)
#  19    0x00080000   Position solution flag (0: Valid, 1: Invalid)
#  20    0x00100000   Position fixed flag (0: Not fixed, 1: Fixed)
#  21    0x00200000   Clock steering status (0: Enabled, 1: Disabled)
#  22    0x00400000   Clock model flag (0: Valid, 1: Invalid)
#  23    0x00800000   OEMV external oscillator flag (0: Disabled, 1: Enabled)
#  24    0x01000000   Software resource (0: OK, 1: Warning)
#  25    0x02000000   <Reserved>
#  26    0x04000000   <Reserved>
#  27    0x08000000   <Reserved>
#  28    0x10000000   <Reserved>
#  29    0x20000000   Auxiliary 3 status event flag (0: No event, 1: Event)
#  30    0x40000000   Auxiliary 2 status event flag (0: No event, 1: Event)
#  31    0x80000000   Auxiliary 1 status event flag (0: No event, 1: Event)
uint32 original_status_code
bool error_flag
bool temperature_flag
bool voltage_supply_flag
bool antenna_powered
bool antenna_is_open
bool antenna_is_shorted
bool cpu_overload_flag
bool com1_buffer_overrun
bool com2_buffer_overrun
bool com3_buffer_overrun
bool usb_buffer_overrun
bool rf1_agc_flag
bool rf2_agc_flag
bool almanac_flag
bool position_solution_flag
bool position_fixed_flag
bool clock_steering_status_enabled
bool clock_model_flag
bool oemv_external_oscillator_flag
bool software_resource_flag
bool aux1_status_event_flag
bool aux2_status_event_flag
bool aux3_status_event_flag

"""
  __slots__ = ['header','novatel_msg_header','week','seconds','position_covariance','attitude_covariance','velocity_covariance']
  _slot_types = ['std_msgs/Header','novatel_gps_msgs/NovatelMessageHeader','uint32','float64','float64[9]','float64[9]','float64[9]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,novatel_msg_header,week,seconds,position_covariance,attitude_covariance,velocity_covariance

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Inscov, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.novatel_msg_header is None:
        self.novatel_msg_header = novatel_gps_msgs.msg.NovatelMessageHeader()
      if self.week is None:
        self.week = 0
      if self.seconds is None:
        self.seconds = 0.
      if self.position_covariance is None:
        self.position_covariance = [0.] * 9
      if self.attitude_covariance is None:
        self.attitude_covariance = [0.] * 9
      if self.velocity_covariance is None:
        self.velocity_covariance = [0.] * 9
    else:
      self.header = std_msgs.msg.Header()
      self.novatel_msg_header = novatel_gps_msgs.msg.NovatelMessageHeader()
      self.week = 0
      self.seconds = 0.
      self.position_covariance = [0.] * 9
      self.attitude_covariance = [0.] * 9
      self.velocity_covariance = [0.] * 9

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.novatel_msg_header.message_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.novatel_msg_header.port
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_If().pack(_x.novatel_msg_header.sequence_num, _x.novatel_msg_header.percent_idle_time))
      _x = self.novatel_msg_header.gps_time_status
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_IdI23B2Id().pack(_x.novatel_msg_header.gps_week_num, _x.novatel_msg_header.gps_seconds, _x.novatel_msg_header.receiver_status.original_status_code, _x.novatel_msg_header.receiver_status.error_flag, _x.novatel_msg_header.receiver_status.temperature_flag, _x.novatel_msg_header.receiver_status.voltage_supply_flag, _x.novatel_msg_header.receiver_status.antenna_powered, _x.novatel_msg_header.receiver_status.antenna_is_open, _x.novatel_msg_header.receiver_status.antenna_is_shorted, _x.novatel_msg_header.receiver_status.cpu_overload_flag, _x.novatel_msg_header.receiver_status.com1_buffer_overrun, _x.novatel_msg_header.receiver_status.com2_buffer_overrun, _x.novatel_msg_header.receiver_status.com3_buffer_overrun, _x.novatel_msg_header.receiver_status.usb_buffer_overrun, _x.novatel_msg_header.receiver_status.rf1_agc_flag, _x.novatel_msg_header.receiver_status.rf2_agc_flag, _x.novatel_msg_header.receiver_status.almanac_flag, _x.novatel_msg_header.receiver_status.position_solution_flag, _x.novatel_msg_header.receiver_status.position_fixed_flag, _x.novatel_msg_header.receiver_status.clock_steering_status_enabled, _x.novatel_msg_header.receiver_status.clock_model_flag, _x.novatel_msg_header.receiver_status.oemv_external_oscillator_flag, _x.novatel_msg_header.receiver_status.software_resource_flag, _x.novatel_msg_header.receiver_status.aux1_status_event_flag, _x.novatel_msg_header.receiver_status.aux2_status_event_flag, _x.novatel_msg_header.receiver_status.aux3_status_event_flag, _x.novatel_msg_header.receiver_software_version, _x.week, _x.seconds))
      buff.write(_get_struct_9d().pack(*self.position_covariance))
      buff.write(_get_struct_9d().pack(*self.attitude_covariance))
      buff.write(_get_struct_9d().pack(*self.velocity_covariance))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.novatel_msg_header is None:
        self.novatel_msg_header = novatel_gps_msgs.msg.NovatelMessageHeader()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.novatel_msg_header.message_name = str[start:end].decode('utf-8')
      else:
        self.novatel_msg_header.message_name = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.novatel_msg_header.port = str[start:end].decode('utf-8')
      else:
        self.novatel_msg_header.port = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.novatel_msg_header.sequence_num, _x.novatel_msg_header.percent_idle_time,) = _get_struct_If().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.novatel_msg_header.gps_time_status = str[start:end].decode('utf-8')
      else:
        self.novatel_msg_header.gps_time_status = str[start:end]
      _x = self
      start = end
      end += 55
      (_x.novatel_msg_header.gps_week_num, _x.novatel_msg_header.gps_seconds, _x.novatel_msg_header.receiver_status.original_status_code, _x.novatel_msg_header.receiver_status.error_flag, _x.novatel_msg_header.receiver_status.temperature_flag, _x.novatel_msg_header.receiver_status.voltage_supply_flag, _x.novatel_msg_header.receiver_status.antenna_powered, _x.novatel_msg_header.receiver_status.antenna_is_open, _x.novatel_msg_header.receiver_status.antenna_is_shorted, _x.novatel_msg_header.receiver_status.cpu_overload_flag, _x.novatel_msg_header.receiver_status.com1_buffer_overrun, _x.novatel_msg_header.receiver_status.com2_buffer_overrun, _x.novatel_msg_header.receiver_status.com3_buffer_overrun, _x.novatel_msg_header.receiver_status.usb_buffer_overrun, _x.novatel_msg_header.receiver_status.rf1_agc_flag, _x.novatel_msg_header.receiver_status.rf2_agc_flag, _x.novatel_msg_header.receiver_status.almanac_flag, _x.novatel_msg_header.receiver_status.position_solution_flag, _x.novatel_msg_header.receiver_status.position_fixed_flag, _x.novatel_msg_header.receiver_status.clock_steering_status_enabled, _x.novatel_msg_header.receiver_status.clock_model_flag, _x.novatel_msg_header.receiver_status.oemv_external_oscillator_flag, _x.novatel_msg_header.receiver_status.software_resource_flag, _x.novatel_msg_header.receiver_status.aux1_status_event_flag, _x.novatel_msg_header.receiver_status.aux2_status_event_flag, _x.novatel_msg_header.receiver_status.aux3_status_event_flag, _x.novatel_msg_header.receiver_software_version, _x.week, _x.seconds,) = _get_struct_IdI23B2Id().unpack(str[start:end])
      self.novatel_msg_header.receiver_status.error_flag = bool(self.novatel_msg_header.receiver_status.error_flag)
      self.novatel_msg_header.receiver_status.temperature_flag = bool(self.novatel_msg_header.receiver_status.temperature_flag)
      self.novatel_msg_header.receiver_status.voltage_supply_flag = bool(self.novatel_msg_header.receiver_status.voltage_supply_flag)
      self.novatel_msg_header.receiver_status.antenna_powered = bool(self.novatel_msg_header.receiver_status.antenna_powered)
      self.novatel_msg_header.receiver_status.antenna_is_open = bool(self.novatel_msg_header.receiver_status.antenna_is_open)
      self.novatel_msg_header.receiver_status.antenna_is_shorted = bool(self.novatel_msg_header.receiver_status.antenna_is_shorted)
      self.novatel_msg_header.receiver_status.cpu_overload_flag = bool(self.novatel_msg_header.receiver_status.cpu_overload_flag)
      self.novatel_msg_header.receiver_status.com1_buffer_overrun = bool(self.novatel_msg_header.receiver_status.com1_buffer_overrun)
      self.novatel_msg_header.receiver_status.com2_buffer_overrun = bool(self.novatel_msg_header.receiver_status.com2_buffer_overrun)
      self.novatel_msg_header.receiver_status.com3_buffer_overrun = bool(self.novatel_msg_header.receiver_status.com3_buffer_overrun)
      self.novatel_msg_header.receiver_status.usb_buffer_overrun = bool(self.novatel_msg_header.receiver_status.usb_buffer_overrun)
      self.novatel_msg_header.receiver_status.rf1_agc_flag = bool(self.novatel_msg_header.receiver_status.rf1_agc_flag)
      self.novatel_msg_header.receiver_status.rf2_agc_flag = bool(self.novatel_msg_header.receiver_status.rf2_agc_flag)
      self.novatel_msg_header.receiver_status.almanac_flag = bool(self.novatel_msg_header.receiver_status.almanac_flag)
      self.novatel_msg_header.receiver_status.position_solution_flag = bool(self.novatel_msg_header.receiver_status.position_solution_flag)
      self.novatel_msg_header.receiver_status.position_fixed_flag = bool(self.novatel_msg_header.receiver_status.position_fixed_flag)
      self.novatel_msg_header.receiver_status.clock_steering_status_enabled = bool(self.novatel_msg_header.receiver_status.clock_steering_status_enabled)
      self.novatel_msg_header.receiver_status.clock_model_flag = bool(self.novatel_msg_header.receiver_status.clock_model_flag)
      self.novatel_msg_header.receiver_status.oemv_external_oscillator_flag = bool(self.novatel_msg_header.receiver_status.oemv_external_oscillator_flag)
      self.novatel_msg_header.receiver_status.software_resource_flag = bool(self.novatel_msg_header.receiver_status.software_resource_flag)
      self.novatel_msg_header.receiver_status.aux1_status_event_flag = bool(self.novatel_msg_header.receiver_status.aux1_status_event_flag)
      self.novatel_msg_header.receiver_status.aux2_status_event_flag = bool(self.novatel_msg_header.receiver_status.aux2_status_event_flag)
      self.novatel_msg_header.receiver_status.aux3_status_event_flag = bool(self.novatel_msg_header.receiver_status.aux3_status_event_flag)
      start = end
      end += 72
      self.position_covariance = _get_struct_9d().unpack(str[start:end])
      start = end
      end += 72
      self.attitude_covariance = _get_struct_9d().unpack(str[start:end])
      start = end
      end += 72
      self.velocity_covariance = _get_struct_9d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.novatel_msg_header.message_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.novatel_msg_header.port
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_If().pack(_x.novatel_msg_header.sequence_num, _x.novatel_msg_header.percent_idle_time))
      _x = self.novatel_msg_header.gps_time_status
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_IdI23B2Id().pack(_x.novatel_msg_header.gps_week_num, _x.novatel_msg_header.gps_seconds, _x.novatel_msg_header.receiver_status.original_status_code, _x.novatel_msg_header.receiver_status.error_flag, _x.novatel_msg_header.receiver_status.temperature_flag, _x.novatel_msg_header.receiver_status.voltage_supply_flag, _x.novatel_msg_header.receiver_status.antenna_powered, _x.novatel_msg_header.receiver_status.antenna_is_open, _x.novatel_msg_header.receiver_status.antenna_is_shorted, _x.novatel_msg_header.receiver_status.cpu_overload_flag, _x.novatel_msg_header.receiver_status.com1_buffer_overrun, _x.novatel_msg_header.receiver_status.com2_buffer_overrun, _x.novatel_msg_header.receiver_status.com3_buffer_overrun, _x.novatel_msg_header.receiver_status.usb_buffer_overrun, _x.novatel_msg_header.receiver_status.rf1_agc_flag, _x.novatel_msg_header.receiver_status.rf2_agc_flag, _x.novatel_msg_header.receiver_status.almanac_flag, _x.novatel_msg_header.receiver_status.position_solution_flag, _x.novatel_msg_header.receiver_status.position_fixed_flag, _x.novatel_msg_header.receiver_status.clock_steering_status_enabled, _x.novatel_msg_header.receiver_status.clock_model_flag, _x.novatel_msg_header.receiver_status.oemv_external_oscillator_flag, _x.novatel_msg_header.receiver_status.software_resource_flag, _x.novatel_msg_header.receiver_status.aux1_status_event_flag, _x.novatel_msg_header.receiver_status.aux2_status_event_flag, _x.novatel_msg_header.receiver_status.aux3_status_event_flag, _x.novatel_msg_header.receiver_software_version, _x.week, _x.seconds))
      buff.write(self.position_covariance.tostring())
      buff.write(self.attitude_covariance.tostring())
      buff.write(self.velocity_covariance.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.novatel_msg_header is None:
        self.novatel_msg_header = novatel_gps_msgs.msg.NovatelMessageHeader()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.novatel_msg_header.message_name = str[start:end].decode('utf-8')
      else:
        self.novatel_msg_header.message_name = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.novatel_msg_header.port = str[start:end].decode('utf-8')
      else:
        self.novatel_msg_header.port = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.novatel_msg_header.sequence_num, _x.novatel_msg_header.percent_idle_time,) = _get_struct_If().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.novatel_msg_header.gps_time_status = str[start:end].decode('utf-8')
      else:
        self.novatel_msg_header.gps_time_status = str[start:end]
      _x = self
      start = end
      end += 55
      (_x.novatel_msg_header.gps_week_num, _x.novatel_msg_header.gps_seconds, _x.novatel_msg_header.receiver_status.original_status_code, _x.novatel_msg_header.receiver_status.error_flag, _x.novatel_msg_header.receiver_status.temperature_flag, _x.novatel_msg_header.receiver_status.voltage_supply_flag, _x.novatel_msg_header.receiver_status.antenna_powered, _x.novatel_msg_header.receiver_status.antenna_is_open, _x.novatel_msg_header.receiver_status.antenna_is_shorted, _x.novatel_msg_header.receiver_status.cpu_overload_flag, _x.novatel_msg_header.receiver_status.com1_buffer_overrun, _x.novatel_msg_header.receiver_status.com2_buffer_overrun, _x.novatel_msg_header.receiver_status.com3_buffer_overrun, _x.novatel_msg_header.receiver_status.usb_buffer_overrun, _x.novatel_msg_header.receiver_status.rf1_agc_flag, _x.novatel_msg_header.receiver_status.rf2_agc_flag, _x.novatel_msg_header.receiver_status.almanac_flag, _x.novatel_msg_header.receiver_status.position_solution_flag, _x.novatel_msg_header.receiver_status.position_fixed_flag, _x.novatel_msg_header.receiver_status.clock_steering_status_enabled, _x.novatel_msg_header.receiver_status.clock_model_flag, _x.novatel_msg_header.receiver_status.oemv_external_oscillator_flag, _x.novatel_msg_header.receiver_status.software_resource_flag, _x.novatel_msg_header.receiver_status.aux1_status_event_flag, _x.novatel_msg_header.receiver_status.aux2_status_event_flag, _x.novatel_msg_header.receiver_status.aux3_status_event_flag, _x.novatel_msg_header.receiver_software_version, _x.week, _x.seconds,) = _get_struct_IdI23B2Id().unpack(str[start:end])
      self.novatel_msg_header.receiver_status.error_flag = bool(self.novatel_msg_header.receiver_status.error_flag)
      self.novatel_msg_header.receiver_status.temperature_flag = bool(self.novatel_msg_header.receiver_status.temperature_flag)
      self.novatel_msg_header.receiver_status.voltage_supply_flag = bool(self.novatel_msg_header.receiver_status.voltage_supply_flag)
      self.novatel_msg_header.receiver_status.antenna_powered = bool(self.novatel_msg_header.receiver_status.antenna_powered)
      self.novatel_msg_header.receiver_status.antenna_is_open = bool(self.novatel_msg_header.receiver_status.antenna_is_open)
      self.novatel_msg_header.receiver_status.antenna_is_shorted = bool(self.novatel_msg_header.receiver_status.antenna_is_shorted)
      self.novatel_msg_header.receiver_status.cpu_overload_flag = bool(self.novatel_msg_header.receiver_status.cpu_overload_flag)
      self.novatel_msg_header.receiver_status.com1_buffer_overrun = bool(self.novatel_msg_header.receiver_status.com1_buffer_overrun)
      self.novatel_msg_header.receiver_status.com2_buffer_overrun = bool(self.novatel_msg_header.receiver_status.com2_buffer_overrun)
      self.novatel_msg_header.receiver_status.com3_buffer_overrun = bool(self.novatel_msg_header.receiver_status.com3_buffer_overrun)
      self.novatel_msg_header.receiver_status.usb_buffer_overrun = bool(self.novatel_msg_header.receiver_status.usb_buffer_overrun)
      self.novatel_msg_header.receiver_status.rf1_agc_flag = bool(self.novatel_msg_header.receiver_status.rf1_agc_flag)
      self.novatel_msg_header.receiver_status.rf2_agc_flag = bool(self.novatel_msg_header.receiver_status.rf2_agc_flag)
      self.novatel_msg_header.receiver_status.almanac_flag = bool(self.novatel_msg_header.receiver_status.almanac_flag)
      self.novatel_msg_header.receiver_status.position_solution_flag = bool(self.novatel_msg_header.receiver_status.position_solution_flag)
      self.novatel_msg_header.receiver_status.position_fixed_flag = bool(self.novatel_msg_header.receiver_status.position_fixed_flag)
      self.novatel_msg_header.receiver_status.clock_steering_status_enabled = bool(self.novatel_msg_header.receiver_status.clock_steering_status_enabled)
      self.novatel_msg_header.receiver_status.clock_model_flag = bool(self.novatel_msg_header.receiver_status.clock_model_flag)
      self.novatel_msg_header.receiver_status.oemv_external_oscillator_flag = bool(self.novatel_msg_header.receiver_status.oemv_external_oscillator_flag)
      self.novatel_msg_header.receiver_status.software_resource_flag = bool(self.novatel_msg_header.receiver_status.software_resource_flag)
      self.novatel_msg_header.receiver_status.aux1_status_event_flag = bool(self.novatel_msg_header.receiver_status.aux1_status_event_flag)
      self.novatel_msg_header.receiver_status.aux2_status_event_flag = bool(self.novatel_msg_header.receiver_status.aux2_status_event_flag)
      self.novatel_msg_header.receiver_status.aux3_status_event_flag = bool(self.novatel_msg_header.receiver_status.aux3_status_event_flag)
      start = end
      end += 72
      self.position_covariance = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=9)
      start = end
      end += 72
      self.attitude_covariance = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=9)
      start = end
      end += 72
      self.velocity_covariance = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=9)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_IdI23B2Id = None
def _get_struct_IdI23B2Id():
    global _struct_IdI23B2Id
    if _struct_IdI23B2Id is None:
        _struct_IdI23B2Id = struct.Struct("<IdI23B2Id")
    return _struct_IdI23B2Id
_struct_9d = None
def _get_struct_9d():
    global _struct_9d
    if _struct_9d is None:
        _struct_9d = struct.Struct("<9d")
    return _struct_9d
_struct_If = None
def _get_struct_If():
    global _struct_If
    if _struct_If is None:
        _struct_If = struct.Struct("<If")
    return _struct_If
