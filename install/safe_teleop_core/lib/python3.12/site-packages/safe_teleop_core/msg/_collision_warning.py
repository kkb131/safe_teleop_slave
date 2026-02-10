# generated from rosidl_generator_py/resource/_idl.py.em
# with input from safe_teleop_core:msg/CollisionWarning.idl
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


class Metaclass_CollisionWarning(type):
    """Metaclass of message 'CollisionWarning'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
        'LOW': 1,
        'MEDIUM': 2,
        'HIGH': 3,
        'CRITICAL': 4,
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
                'safe_teleop_core.msg.CollisionWarning')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__collision_warning
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__collision_warning
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__collision_warning
            cls._TYPE_SUPPORT = module.type_support_msg__msg__collision_warning
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__collision_warning

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
            'LOW': cls.__constants['LOW'],
            'MEDIUM': cls.__constants['MEDIUM'],
            'HIGH': cls.__constants['HIGH'],
            'CRITICAL': cls.__constants['CRITICAL'],
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_CollisionWarning.__constants['NONE']

    @property
    def LOW(self):
        """Message constant 'LOW'."""
        return Metaclass_CollisionWarning.__constants['LOW']

    @property
    def MEDIUM(self):
        """Message constant 'MEDIUM'."""
        return Metaclass_CollisionWarning.__constants['MEDIUM']

    @property
    def HIGH(self):
        """Message constant 'HIGH'."""
        return Metaclass_CollisionWarning.__constants['HIGH']

    @property
    def CRITICAL(self):
        """Message constant 'CRITICAL'."""
        return Metaclass_CollisionWarning.__constants['CRITICAL']


class CollisionWarning(metaclass=Metaclass_CollisionWarning):
    """
    Message class 'CollisionWarning'.

    Constants:
      NONE
      LOW
      MEDIUM
      HIGH
      CRITICAL
    """

    __slots__ = [
        '_header',
        '_severity',
        '_object_id',
        '_distance_to_collision',
        '_time_to_collision',
        '_emergency_stop_required',
        '_velocity_reduction_required',
        '_max_safe_velocity',
        '_warning_source',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'severity': 'uint8',
        'object_id': 'string',
        'distance_to_collision': 'float',
        'time_to_collision': 'float',
        'emergency_stop_required': 'boolean',
        'velocity_reduction_required': 'boolean',
        'max_safe_velocity': 'float',
        'warning_source': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.severity = kwargs.get('severity', int())
        self.object_id = kwargs.get('object_id', str())
        self.distance_to_collision = kwargs.get('distance_to_collision', float())
        self.time_to_collision = kwargs.get('time_to_collision', float())
        self.emergency_stop_required = kwargs.get('emergency_stop_required', bool())
        self.velocity_reduction_required = kwargs.get('velocity_reduction_required', bool())
        self.max_safe_velocity = kwargs.get('max_safe_velocity', float())
        self.warning_source = kwargs.get('warning_source', str())

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
        if self.severity != other.severity:
            return False
        if self.object_id != other.object_id:
            return False
        if self.distance_to_collision != other.distance_to_collision:
            return False
        if self.time_to_collision != other.time_to_collision:
            return False
        if self.emergency_stop_required != other.emergency_stop_required:
            return False
        if self.velocity_reduction_required != other.velocity_reduction_required:
            return False
        if self.max_safe_velocity != other.max_safe_velocity:
            return False
        if self.warning_source != other.warning_source:
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
    def severity(self):
        """Message field 'severity'."""
        return self._severity

    @severity.setter
    def severity(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'severity' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'severity' field must be an unsigned integer in [0, 255]"
        self._severity = value

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
    def distance_to_collision(self):
        """Message field 'distance_to_collision'."""
        return self._distance_to_collision

    @distance_to_collision.setter
    def distance_to_collision(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'distance_to_collision' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_to_collision' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_to_collision = value

    @builtins.property
    def time_to_collision(self):
        """Message field 'time_to_collision'."""
        return self._time_to_collision

    @time_to_collision.setter
    def time_to_collision(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'time_to_collision' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time_to_collision' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time_to_collision = value

    @builtins.property
    def emergency_stop_required(self):
        """Message field 'emergency_stop_required'."""
        return self._emergency_stop_required

    @emergency_stop_required.setter
    def emergency_stop_required(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'emergency_stop_required' field must be of type 'bool'"
        self._emergency_stop_required = value

    @builtins.property
    def velocity_reduction_required(self):
        """Message field 'velocity_reduction_required'."""
        return self._velocity_reduction_required

    @velocity_reduction_required.setter
    def velocity_reduction_required(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'velocity_reduction_required' field must be of type 'bool'"
        self._velocity_reduction_required = value

    @builtins.property
    def max_safe_velocity(self):
        """Message field 'max_safe_velocity'."""
        return self._max_safe_velocity

    @max_safe_velocity.setter
    def max_safe_velocity(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_safe_velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_safe_velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_safe_velocity = value

    @builtins.property
    def warning_source(self):
        """Message field 'warning_source'."""
        return self._warning_source

    @warning_source.setter
    def warning_source(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'warning_source' field must be of type 'str'"
        self._warning_source = value
