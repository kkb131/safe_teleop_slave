# generated from rosidl_generator_py/resource/_idl.py.em
# with input from safe_teleop_core:msg/SafetyZone.idl
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


class Metaclass_SafetyZone(type):
    """Metaclass of message 'SafetyZone'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'safe_teleop_core.msg.SafetyZone')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__safety_zone
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__safety_zone
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__safety_zone
            cls._TYPE_SUPPORT = module.type_support_msg__msg__safety_zone
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__safety_zone

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

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
        }


class SafetyZone(metaclass=Metaclass_SafetyZone):
    """Message class 'SafetyZone'."""

    __slots__ = [
        '_header',
        '_zone_id',
        '_zone_name',
        '_center',
        '_size',
        '_safety_margin',
        '_is_active',
        '_priority',
        '_is_dynamic',
        '_velocity_magnitude',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'zone_id': 'string',
        'zone_name': 'string',
        'center': 'geometry_msgs/Point',
        'size': 'geometry_msgs/Vector3',
        'safety_margin': 'float',
        'is_active': 'boolean',
        'priority': 'uint8',
        'is_dynamic': 'boolean',
        'velocity_magnitude': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.zone_id = kwargs.get('zone_id', str())
        self.zone_name = kwargs.get('zone_name', str())
        from geometry_msgs.msg import Point
        self.center = kwargs.get('center', Point())
        from geometry_msgs.msg import Vector3
        self.size = kwargs.get('size', Vector3())
        self.safety_margin = kwargs.get('safety_margin', float())
        self.is_active = kwargs.get('is_active', bool())
        self.priority = kwargs.get('priority', int())
        self.is_dynamic = kwargs.get('is_dynamic', bool())
        self.velocity_magnitude = kwargs.get('velocity_magnitude', float())

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
        if self.zone_id != other.zone_id:
            return False
        if self.zone_name != other.zone_name:
            return False
        if self.center != other.center:
            return False
        if self.size != other.size:
            return False
        if self.safety_margin != other.safety_margin:
            return False
        if self.is_active != other.is_active:
            return False
        if self.priority != other.priority:
            return False
        if self.is_dynamic != other.is_dynamic:
            return False
        if self.velocity_magnitude != other.velocity_magnitude:
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
    def zone_id(self):
        """Message field 'zone_id'."""
        return self._zone_id

    @zone_id.setter
    def zone_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'zone_id' field must be of type 'str'"
        self._zone_id = value

    @builtins.property
    def zone_name(self):
        """Message field 'zone_name'."""
        return self._zone_name

    @zone_name.setter
    def zone_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'zone_name' field must be of type 'str'"
        self._zone_name = value

    @builtins.property
    def center(self):
        """Message field 'center'."""
        return self._center

    @center.setter
    def center(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'center' field must be a sub message of type 'Point'"
        self._center = value

    @builtins.property
    def size(self):
        """Message field 'size'."""
        return self._size

    @size.setter
    def size(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'size' field must be a sub message of type 'Vector3'"
        self._size = value

    @builtins.property
    def safety_margin(self):
        """Message field 'safety_margin'."""
        return self._safety_margin

    @safety_margin.setter
    def safety_margin(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'safety_margin' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'safety_margin' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._safety_margin = value

    @builtins.property
    def is_active(self):
        """Message field 'is_active'."""
        return self._is_active

    @is_active.setter
    def is_active(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_active' field must be of type 'bool'"
        self._is_active = value

    @builtins.property
    def priority(self):
        """Message field 'priority'."""
        return self._priority

    @priority.setter
    def priority(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'priority' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'priority' field must be an unsigned integer in [0, 255]"
        self._priority = value

    @builtins.property
    def is_dynamic(self):
        """Message field 'is_dynamic'."""
        return self._is_dynamic

    @is_dynamic.setter
    def is_dynamic(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_dynamic' field must be of type 'bool'"
        self._is_dynamic = value

    @builtins.property
    def velocity_magnitude(self):
        """Message field 'velocity_magnitude'."""
        return self._velocity_magnitude

    @velocity_magnitude.setter
    def velocity_magnitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'velocity_magnitude' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'velocity_magnitude' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._velocity_magnitude = value
