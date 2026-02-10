# generated from rosidl_generator_py/resource/_idl.py.em
# with input from safe_teleop_core:msg/ObjectStatus.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObjectStatus(type):
    """Metaclass of message 'ObjectStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATIC': 0,
        'DYNAMIC': 1,
        'STATIC_TO_DYNAMIC': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('safe_teleop_core')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'safe_teleop_core.msg.ObjectStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object_status

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATIC': cls.__constants['STATIC'],
            'DYNAMIC': cls.__constants['DYNAMIC'],
            'STATIC_TO_DYNAMIC': cls.__constants['STATIC_TO_DYNAMIC'],
        }

    @property
    def STATIC(self):
        """Message constant 'STATIC'."""
        return Metaclass_ObjectStatus.__constants['STATIC']

    @property
    def DYNAMIC(self):
        """Message constant 'DYNAMIC'."""
        return Metaclass_ObjectStatus.__constants['DYNAMIC']

    @property
    def STATIC_TO_DYNAMIC(self):
        """Message constant 'STATIC_TO_DYNAMIC'."""
        return Metaclass_ObjectStatus.__constants['STATIC_TO_DYNAMIC']


class ObjectStatus(metaclass=Metaclass_ObjectStatus):
    """
    Message class 'ObjectStatus'.

    Constants:
      STATIC
      DYNAMIC
      STATIC_TO_DYNAMIC
    """

    __slots__ = [
        '_header',
        '_object_id',
        '_object_type',
        '_pose',
        '_bounding_box',
        '_motion_state',
        '_is_activated',
        '_detection_confidence',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'object_id': 'string',
        'object_type': 'string',
        'pose': 'geometry_msgs/Pose',
        'bounding_box': 'geometry_msgs/Vector3',
        'motion_state': 'uint8',
        'is_activated': 'boolean',
        'detection_confidence': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.object_id = kwargs.get('object_id', str())
        self.object_type = kwargs.get('object_type', str())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        from geometry_msgs.msg import Vector3
        self.bounding_box = kwargs.get('bounding_box', Vector3())
        self.motion_state = kwargs.get('motion_state', int())
        self.is_activated = kwargs.get('is_activated', bool())
        self.detection_confidence = kwargs.get('detection_confidence', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.object_id != other.object_id:
            return False
        if self.object_type != other.object_type:
            return False
        if self.pose != other.pose:
            return False
        if self.bounding_box != other.bounding_box:
            return False
        if self.motion_state != other.motion_state:
            return False
        if self.is_activated != other.is_activated:
            return False
        if self.detection_confidence != other.detection_confidence:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def object_id(self):
        """Message field 'object_id'."""
        return self._object_id

    @object_id.setter
    def object_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'object_id' field must be of type 'str'"
        self._object_id = value

    @builtins.property
    def object_type(self):
        """Message field 'object_type'."""
        return self._object_type

    @object_type.setter
    def object_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'object_type' field must be of type 'str'"
        self._object_type = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

    @builtins.property
    def bounding_box(self):
        """Message field 'bounding_box'."""
        return self._bounding_box

    @bounding_box.setter
    def bounding_box(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'bounding_box' field must be a sub message of type 'Vector3'"
        self._bounding_box = value

    @builtins.property
    def motion_state(self):
        """Message field 'motion_state'."""
        return self._motion_state

    @motion_state.setter
    def motion_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'motion_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motion_state' field must be an unsigned integer in [0, 255]"
        self._motion_state = value

    @builtins.property
    def is_activated(self):
        """Message field 'is_activated'."""
        return self._is_activated

    @is_activated.setter
    def is_activated(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_activated' field must be of type 'bool'"
        self._is_activated = value

    @builtins.property
    def detection_confidence(self):
        """Message field 'detection_confidence'."""
        return self._detection_confidence

    @detection_confidence.setter
    def detection_confidence(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'detection_confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'detection_confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._detection_confidence = value
