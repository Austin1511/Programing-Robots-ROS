# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from nasa_r2_common_msgs/PDMCStatus.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class PDMCStatus(genpy.Message):
  _md5sum = "a68d9dc9991d8f304fc3adff90114aa5"
  _type = "nasa_r2_common_msgs/PDMCStatus"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """string publisher
uint32 registerValue
bool logicEnabled
bool motorEnabled

"""
  __slots__ = ['publisher','registerValue','logicEnabled','motorEnabled']
  _slot_types = ['string','uint32','bool','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       publisher,registerValue,logicEnabled,motorEnabled

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(PDMCStatus, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.publisher is None:
        self.publisher = ''
      if self.registerValue is None:
        self.registerValue = 0
      if self.logicEnabled is None:
        self.logicEnabled = False
      if self.motorEnabled is None:
        self.motorEnabled = False
    else:
      self.publisher = ''
      self.registerValue = 0
      self.logicEnabled = False
      self.motorEnabled = False

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
      _x = self.publisher
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_I2B.pack(_x.registerValue, _x.logicEnabled, _x.motorEnabled))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.publisher = str[start:end].decode('utf-8')
      else:
        self.publisher = str[start:end]
      _x = self
      start = end
      end += 6
      (_x.registerValue, _x.logicEnabled, _x.motorEnabled,) = _struct_I2B.unpack(str[start:end])
      self.logicEnabled = bool(self.logicEnabled)
      self.motorEnabled = bool(self.motorEnabled)
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
      _x = self.publisher
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_I2B.pack(_x.registerValue, _x.logicEnabled, _x.motorEnabled))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.publisher = str[start:end].decode('utf-8')
      else:
        self.publisher = str[start:end]
      _x = self
      start = end
      end += 6
      (_x.registerValue, _x.logicEnabled, _x.motorEnabled,) = _struct_I2B.unpack(str[start:end])
      self.logicEnabled = bool(self.logicEnabled)
      self.motorEnabled = bool(self.motorEnabled)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_I2B = struct.Struct("<I2B")
