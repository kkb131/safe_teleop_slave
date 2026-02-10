# generated from rosidl_generator_py/resource/_idl.py.em
# with input from safe_teleop_core:msg/SafetyStatus.idl
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


class Metaclass_SafetyStatus(type):
    """Metaclass of message 'SafetyStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NORMAL': 0,
        'DEGRADED': 1,
        'EMERGENCY': 2,
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
                'safe_teleop_core.msg.SafetyStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__safety_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__safety_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__safety_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__safety_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__safety_status

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NORMAL': cls.__constants['NORMAL'],
            'DEGRADED': cls.__constants['DEGRADED'],
            'EMERGENCY': cls.__constants['EMERGENCY'],
        }

    @property
    def NORMAL(self):
        """Message constant 'NORMAL'."""
        return Metaclass_SafetyStatus.__constants['NORMAL']

    @property
    def DEGRADED(self):
        """Message constant 'DEGRADED'."""
        return Metaclass_SafetyStatus.__constants['DEGRADED']

    @property
    def EMERGENCY(self):
        """Message constant 'EMERGENCY'."""
        return Metaclass_SafetyStatus.__constants['EMERGENCY']


class SafetyStatus(metaclass=Metaclass_SafetyStatus):
    """
    Message class 'SafetyStatus'.

    Constants:
      NORMAL
      DEGRADED
      EMERGENCY
    """

    __slots__ = [
        '_header',
        '_safety_mode',
        '_master_connected',
        '_esdf_available',
        '_pointcloud_available',
        '_emergency_stop_active',
        '_esdf_age_sec',
        '_pointcloud_age_sec',
        '_last_collision_check_ms',
        '_active_collision_severity',
        '_min_distance_to_obstacle',
        '_avg_collision_check_latency_ms',
        '_collision_checks_per_sec',
        '_velocity_limit_active',
        '_max_safe_velocity',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'safety_mode': 'uint8',
        'master_connected': 'boolean',
        'esdf_available': 'boolean',
        'pointcloud_available': 'boolean',
        'emergency_stop_active': 'boolean',
        'esdf_age_sec': 'float',
        'pointcloud_age_sec': 'float',
        'last_collision_check_ms': 'float',
        'active_collision_severity': 'uint8',
        'min_distance_to_obstacle': 'float',
        'avg_collision_check_latency_ms': 'float',
        'collision_checks_per_sec': 'uint32',
        'velocity_limit_active': 'boolean',
        'max_safe_velocity': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        self.safety_mode = kwargs.get('safety_mode', int())
        self.master_connected = kwargs.get('master_connected', bool())
        self.esdf_available = kwargs.get('esdf_available', bool())
        self.pointcloud_available = kwargs.get('pointcloud_available', bool())
        self.emergency_stop_active = kwargs.get('emergency_stop_active', bool())
        self.esdf_age_sec = kwargs.get('esdf_age_sec', float())
        self.pointcloud_age_sec = kwargs.get('pointcloud_age_sec', float())
        self.last_collision_check_ms = kwargs.get('last_collision_check_ms', float())
        self.active_collision_severity = kwargs.get('active_collision_severity', int())
        self.min_distance_to_obstacle = kwargs.get('min_distance_to_obstacle', float())
        self.avg_collision_check_latency_ms = kwargs.get('avg_collision_check_latency_ms', float())
        self.collision_checks_per_sec = kwargs.get('collision_checks_per_sec', int())
        self.velocity_limit_active = kwargs.get('velocity_limit_active', bool())
        self.max_safe_velocity = kwargs.get('max_safe_velocity', float())

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
        if self.safety_mode != other.safety_mode:
            return False
        if self.master_connected != other.master_connected:
            return False
        if self.esdf_available != other.esdf_available:
            return False
        if self.pointcloud_available != other.pointcloud_available:
            return False
        if self.emergency_stop_active != other.emergency_stop_active:
            return False
        if self.esdf_age_sec != other.esdf_age_sec:
            return False
        if self.pointcloud_age_sec != other.pointcloud_age_sec:
            return False
        if self.last_collision_check_ms != other.last_collision_check_ms:
            return False
        if self.active_collision_severity != other.active_collision_severity:
            return False
        if self.min_distance_to_obstacle != other.min_distance_to_obstacle:
            return False
        if self.avg_collision_check_latency_ms != other.avg_collision_check_latency_ms:
            return False
        if self.collision_checks_per_sec != other.collision_checks_per_sec:
            return False
        if self.velocity_limit_active != other.velocity_limit_active:
            return False
        if self.max_safe_velocity != other.max_safe_velocity:
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
    def safety_mode(self):
        """Message field 'safety_mode'."""
        return self._safety_mode

    @safety_mode.setter
    def safety_mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'safety_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'safety_mode' field must be an unsigned integer in [0, 255]"
        self._safety_mode = value

    @builtins.property
    def master_connected(self):
        """Message field 'master_connected'."""
        return self._master_connected

    @master_connected.setter
    def master_connected(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'master_connected' field must be of type 'bool'"
        self._master_connected = value

    @builtins.property
    def esdf_available(self):
        """Message field 'esdf_available'."""
        return self._esdf_available

    @esdf_available.setter
    def esdf_available(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'esdf_available' field must be of type 'bool'"
        self._esdf_available = value

    @builtins.property
    def pointcloud_available(self):
        """Message field 'pointcloud_available'."""
        return self._pointcloud_available

    @pointcloud_available.setter
    def pointcloud_available(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'pointcloud_available' field must be of type 'bool'"
        self._pointcloud_available = value

    @builtins.property
    def emergency_stop_active(self):
        """Message field 'emergency_stop_active'."""
        return self._emergency_stop_active

    @emergency_stop_active.setter
    def emergency_stop_active(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'emergency_stop_active' field must be of type 'bool'"
        self._emergency_stop_active = value

    @builtins.property
    def esdf_age_sec(self):
        """Message field 'esdf_age_sec'."""
        return self._esdf_age_sec

    @esdf_age_sec.setter
    def esdf_age_sec(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'esdf_age_sec' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'esdf_age_sec' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._esdf_age_sec = value

    @builtins.property
    def pointcloud_age_sec(self):
        """Message field 'pointcloud_age_sec'."""
        return self._pointcloud_age_sec

    @pointcloud_age_sec.setter
    def pointcloud_age_sec(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'pointcloud_age_sec' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pointcloud_age_sec' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pointcloud_age_sec = value

    @builtins.property
    def last_collision_check_ms(self):
        """Message field 'last_collision_check_ms'."""
        return self._last_collision_check_ms

    @last_collision_check_ms.setter
    def last_collision_check_ms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'last_collision_check_ms' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'last_collision_check_ms' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._last_collision_check_ms = value

    @builtins.property
    def active_collision_severity(self):
        """Message field 'active_collision_severity'."""
        return self._active_collision_severity

    @active_collision_severity.setter
    def active_collision_severity(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'active_collision_severity' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'active_collision_severity' field must be an unsigned integer in [0, 255]"
        self._active_collision_severity = value

    @builtins.property
    def min_distance_to_obstacle(self):
        """Message field 'min_distance_to_obstacle'."""
        return self._min_distance_to_obstacle

    @min_distance_to_obstacle.setter
    def min_distance_to_obstacle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'min_distance_to_obstacle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'min_distance_to_obstacle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._min_distance_to_obstacle = value

    @builtins.property
    def avg_collision_check_latency_ms(self):
        """Message field 'avg_collision_check_latency_ms'."""
        return self._avg_collision_check_latency_ms

    @avg_collision_check_latency_ms.setter
    def avg_collision_check_latency_ms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'avg_collision_check_latency_ms' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'avg_collision_check_latency_ms' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._avg_collision_check_latency_ms = value

    @builtins.property
    def collision_checks_per_sec(self):
        """Message field 'collision_checks_per_sec'."""
        return self._collision_checks_per_sec

    @collision_checks_per_sec.setter
    def collision_checks_per_sec(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'collision_checks_per_sec' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'collision_checks_per_sec' field must be an unsigned integer in [0, 4294967295]"
        self._collision_checks_per_sec = value

    @builtins.property
    def velocity_limit_active(self):
        """Message field 'velocity_limit_active'."""
        return self._velocity_limit_active

    @velocity_limit_active.setter
    def velocity_limit_active(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'velocity_limit_active' field must be of type 'bool'"
        self._velocity_limit_active = value

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
