# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from camera_control_msgs/SetBinningRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class SetBinningRequest(genpy.Message):
  _md5sum = "070d3ce2d671acce3b96edb95ae60995"
  _type = "camera_control_msgs/SetBinningRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# Binning factor to get downsampled images. It refers here to any camera
# setting which combines rectangular neighborhoods of pixels into larger
# "super-pixels." It reduces the resolution of the output image to
# (width / binning_x) x (height / binning_y).
# The default values binning_x = binning_y = 0 are considered the same
# as binning_x = binning_y = 1 (no subsampling).
# Calling this service with target binning values will change the binning entry
# in the published camera_info_msg
uint32 target_binning_x
uint32 target_binning_y

"""
  __slots__ = ['target_binning_x','target_binning_y']
  _slot_types = ['uint32','uint32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       target_binning_x,target_binning_y

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SetBinningRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.target_binning_x is None:
        self.target_binning_x = 0
      if self.target_binning_y is None:
        self.target_binning_y = 0
    else:
      self.target_binning_x = 0
      self.target_binning_y = 0

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
      buff.write(_get_struct_2I().pack(_x.target_binning_x, _x.target_binning_y))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 8
      (_x.target_binning_x, _x.target_binning_y,) = _get_struct_2I().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2I().pack(_x.target_binning_x, _x.target_binning_y))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 8
      (_x.target_binning_x, _x.target_binning_y,) = _get_struct_2I().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2I = None
def _get_struct_2I():
    global _struct_2I
    if _struct_2I is None:
        _struct_2I = struct.Struct("<2I")
    return _struct_2I
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from camera_control_msgs/SetBinningResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class SetBinningResponse(genpy.Message):
  _md5sum = "519ec992dd33973d0740b5940161bf8e"
  _type = "camera_control_msgs/SetBinningResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# Exact match can not always be reached
uint32 reached_binning_x
uint32 reached_binning_y
bool success

"""
  __slots__ = ['reached_binning_x','reached_binning_y','success']
  _slot_types = ['uint32','uint32','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       reached_binning_x,reached_binning_y,success

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SetBinningResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.reached_binning_x is None:
        self.reached_binning_x = 0
      if self.reached_binning_y is None:
        self.reached_binning_y = 0
      if self.success is None:
        self.success = False
    else:
      self.reached_binning_x = 0
      self.reached_binning_y = 0
      self.success = False

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
      buff.write(_get_struct_2IB().pack(_x.reached_binning_x, _x.reached_binning_y, _x.success))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 9
      (_x.reached_binning_x, _x.reached_binning_y, _x.success,) = _get_struct_2IB().unpack(str[start:end])
      self.success = bool(self.success)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2IB().pack(_x.reached_binning_x, _x.reached_binning_y, _x.success))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 9
      (_x.reached_binning_x, _x.reached_binning_y, _x.success,) = _get_struct_2IB().unpack(str[start:end])
      self.success = bool(self.success)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2IB = None
def _get_struct_2IB():
    global _struct_2IB
    if _struct_2IB is None:
        _struct_2IB = struct.Struct("<2IB")
    return _struct_2IB
class SetBinning(object):
  _type          = 'camera_control_msgs/SetBinning'
  _md5sum = 'fb7b82cb93bc5513ade2d601c7a7d975'
  _request_class  = SetBinningRequest
  _response_class = SetBinningResponse
