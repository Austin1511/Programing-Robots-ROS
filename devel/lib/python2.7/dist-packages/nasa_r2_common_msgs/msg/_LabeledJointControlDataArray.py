# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from nasa_r2_common_msgs/LabeledJointControlDataArray.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import nasa_r2_common_msgs.msg
import std_msgs.msg

class LabeledJointControlDataArray(genpy.Message):
  _md5sum = "4bff9298a6988a564ac5d64f88f9ea87"
  _type = "nasa_r2_common_msgs/LabeledJointControlDataArray"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """Header header
string originator
string[] joint
JointControlData[] data

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
MSG: nasa_r2_common_msgs/JointControlData
JointControlMode            controlMode
JointControlCommandMode     commandMode
JointControlCalibrationMode calibrationMode
JointControlClearFaultMode  clearFaultMode
JointControlCoeffState      coeffState

================================================================================
MSG: nasa_r2_common_msgs/JointControlMode
uint8 state
uint8 IGNORE     = 0
uint8 INVALID    = 1
uint8 BOOTLOADER = 2
uint8 FAULTED    = 3
uint8 SAFE       = 4
uint8 OFF        = 5
uint8 PARK       = 6
uint8 NEUTRAL    = 7
uint8 DRIVE      = 8

================================================================================
MSG: nasa_r2_common_msgs/JointControlCommandMode
uint8 state
uint8 IGNORE          = 0
uint8 INVALID         = 1
uint8 MOTCOM          = 2
uint8 MULTILOOPSTEP   = 3
uint8 MULTILOOPSMOOTH = 4
uint8 ACTUATOR        = 5
uint8 STALLMODE       = 6

================================================================================
MSG: nasa_r2_common_msgs/JointControlCalibrationMode
uint8 state
uint8 IGNORE       = 0
uint8 DISABLE      = 1
uint8 ENABLE       = 2
uint8 UNCALIBRATED = 3

================================================================================
MSG: nasa_r2_common_msgs/JointControlClearFaultMode
uint8 state
uint8 IGNORE  = 0
uint8 DISABLE = 1
uint8 ENABLE  = 2

================================================================================
MSG: nasa_r2_common_msgs/JointControlCoeffState
uint8 state
uint8 NOTLOADED = 0
uint8 LOADED    = 1

"""
  __slots__ = ['header','originator','joint','data']
  _slot_types = ['std_msgs/Header','string','string[]','nasa_r2_common_msgs/JointControlData[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,originator,joint,data

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(LabeledJointControlDataArray, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.originator is None:
        self.originator = ''
      if self.joint is None:
        self.joint = []
      if self.data is None:
        self.data = []
    else:
      self.header = std_msgs.msg.Header()
      self.originator = ''
      self.joint = []
      self.data = []

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
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.originator
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.joint)
      buff.write(_struct_I.pack(length))
      for val1 in self.joint:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.data)
      buff.write(_struct_I.pack(length))
      for val1 in self.data:
        _v1 = val1.controlMode
        buff.write(_struct_B.pack(_v1.state))
        _v2 = val1.commandMode
        buff.write(_struct_B.pack(_v2.state))
        _v3 = val1.calibrationMode
        buff.write(_struct_B.pack(_v3.state))
        _v4 = val1.clearFaultMode
        buff.write(_struct_B.pack(_v4.state))
        _v5 = val1.coeffState
        buff.write(_struct_B.pack(_v5.state))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.data is None:
        self.data = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
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
        self.originator = str[start:end].decode('utf-8')
      else:
        self.originator = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.joint = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.joint.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.data = []
      for i in range(0, length):
        val1 = nasa_r2_common_msgs.msg.JointControlData()
        _v6 = val1.controlMode
        start = end
        end += 1
        (_v6.state,) = _struct_B.unpack(str[start:end])
        _v7 = val1.commandMode
        start = end
        end += 1
        (_v7.state,) = _struct_B.unpack(str[start:end])
        _v8 = val1.calibrationMode
        start = end
        end += 1
        (_v8.state,) = _struct_B.unpack(str[start:end])
        _v9 = val1.clearFaultMode
        start = end
        end += 1
        (_v9.state,) = _struct_B.unpack(str[start:end])
        _v10 = val1.coeffState
        start = end
        end += 1
        (_v10.state,) = _struct_B.unpack(str[start:end])
        self.data.append(val1)
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
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.originator
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.joint)
      buff.write(_struct_I.pack(length))
      for val1 in self.joint:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.data)
      buff.write(_struct_I.pack(length))
      for val1 in self.data:
        _v11 = val1.controlMode
        buff.write(_struct_B.pack(_v11.state))
        _v12 = val1.commandMode
        buff.write(_struct_B.pack(_v12.state))
        _v13 = val1.calibrationMode
        buff.write(_struct_B.pack(_v13.state))
        _v14 = val1.clearFaultMode
        buff.write(_struct_B.pack(_v14.state))
        _v15 = val1.coeffState
        buff.write(_struct_B.pack(_v15.state))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.data is None:
        self.data = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
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
        self.originator = str[start:end].decode('utf-8')
      else:
        self.originator = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.joint = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.joint.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.data = []
      for i in range(0, length):
        val1 = nasa_r2_common_msgs.msg.JointControlData()
        _v16 = val1.controlMode
        start = end
        end += 1
        (_v16.state,) = _struct_B.unpack(str[start:end])
        _v17 = val1.commandMode
        start = end
        end += 1
        (_v17.state,) = _struct_B.unpack(str[start:end])
        _v18 = val1.calibrationMode
        start = end
        end += 1
        (_v18.state,) = _struct_B.unpack(str[start:end])
        _v19 = val1.clearFaultMode
        start = end
        end += 1
        (_v19.state,) = _struct_B.unpack(str[start:end])
        _v20 = val1.coeffState
        start = end
        end += 1
        (_v20.state,) = _struct_B.unpack(str[start:end])
        self.data.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3I = struct.Struct("<3I")
_struct_B = struct.Struct("<B")