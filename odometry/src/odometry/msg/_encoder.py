"""autogenerated by genmsg_py from encoder.msg. Do not edit."""
import roslib.message
import struct


class encoder(roslib.message.Message):
  _md5sum = "a066eb83358996063bdf035669876fc4"
  _type = "odometry/encoder"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float64 rpulses
float64 lpulses

"""
  __slots__ = ['rpulses','lpulses']
  _slot_types = ['float64','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.
    
    The available fields are:
       rpulses,lpulses
    
    @param args: complete set of field values, in .msg order
    @param kwds: use keyword arguments corresponding to message field names
    to set specific fields. 
    """
    if args or kwds:
      super(encoder, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.rpulses is None:
        self.rpulses = 0.
      if self.lpulses is None:
        self.lpulses = 0.
    else:
      self.rpulses = 0.
      self.lpulses = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    @param buff: buffer
    @type  buff: StringIO
    """
    try:
      _x = self
      buff.write(_struct_2d.pack(_x.rpulses, _x.lpulses))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    @param str: byte array of serialized message
    @type  str: str
    """
    try:
      end = 0
      _x = self
      start = end
      end += 16
      (_x.rpulses, _x.lpulses,) = _struct_2d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    @param buff: buffer
    @type  buff: StringIO
    @param numpy: numpy python module
    @type  numpy module
    """
    try:
      _x = self
      buff.write(_struct_2d.pack(_x.rpulses, _x.lpulses))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    @param str: byte array of serialized message
    @type  str: str
    @param numpy: numpy python module
    @type  numpy: module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 16
      (_x.rpulses, _x.lpulses,) = _struct_2d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill

_struct_I = roslib.message.struct_I
_struct_2d = struct.Struct("<2d")
