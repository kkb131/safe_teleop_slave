# generated from rosidl_generator_py/resource/_idl.py.em
# with input from safe_teleop_core:srv/UpdateSafetyMap.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UpdateSafetyMap_Request(type):
    """Metaclass of message 'UpdateSafetyMap_Request'."""

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
                'safe_teleop_core.srv.UpdateSafetyMap_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__update_safety_map__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__update_safety_map__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__update_safety_map__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__update_safety_map__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__update_safety_map__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UpdateSafetyMap_Request(metaclass=Metaclass_UpdateSafetyMap_Request):
    """Message class 'UpdateSafetyMap_Request'."""

    __slots__ = [
        '_force_full_update',
        '_specific_zones',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'force_full_update': 'boolean',
        'specific_zones': 'sequence<string>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
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
        self.force_full_update = kwargs.get('force_full_update', bool())
        self.specific_zones = kwargs.get('specific_zones', [])

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
        if self.force_full_update != other.force_full_update:
            return False
        if self.specific_zones != other.specific_zones:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def force_full_update(self):
        """Message field 'force_full_update'."""
        return self._force_full_update

    @force_full_update.setter
    def force_full_update(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'force_full_update' field must be of type 'bool'"
        self._force_full_update = value

    @builtins.property
    def specific_zones(self):
        """Message field 'specific_zones'."""
        return self._specific_zones

    @specific_zones.setter
    def specific_zones(self, value):
        if self._check_fields:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'specific_zones' field must be a set or sequence and each value of type 'str'"
        self._specific_zones = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_UpdateSafetyMap_Response(type):
    """Metaclass of message 'UpdateSafetyMap_Response'."""

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
                'safe_teleop_core.srv.UpdateSafetyMap_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__update_safety_map__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__update_safety_map__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__update_safety_map__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__update_safety_map__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__update_safety_map__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UpdateSafetyMap_Response(metaclass=Metaclass_UpdateSafetyMap_Response):
    """Message class 'UpdateSafetyMap_Response'."""

    __slots__ = [
        '_success',
        '_message',
        '_zones_updated',
        '_update_duration',
        '_map_timestamp',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'zones_updated': 'uint32',
        'update_duration': 'float',
        'map_timestamp': 'builtin_interfaces/Time',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
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
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())
        self.zones_updated = kwargs.get('zones_updated', int())
        self.update_duration = kwargs.get('update_duration', float())
        from builtin_interfaces.msg import Time
        self.map_timestamp = kwargs.get('map_timestamp', Time())

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
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        if self.zones_updated != other.zones_updated:
            return False
        if self.update_duration != other.update_duration:
            return False
        if self.map_timestamp != other.map_timestamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @builtins.property
    def zones_updated(self):
        """Message field 'zones_updated'."""
        return self._zones_updated

    @zones_updated.setter
    def zones_updated(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'zones_updated' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'zones_updated' field must be an unsigned integer in [0, 4294967295]"
        self._zones_updated = value

    @builtins.property
    def update_duration(self):
        """Message field 'update_duration'."""
        return self._update_duration

    @update_duration.setter
    def update_duration(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'update_duration' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'update_duration' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._update_duration = value

    @builtins.property
    def map_timestamp(self):
        """Message field 'map_timestamp'."""
        return self._map_timestamp

    @map_timestamp.setter
    def map_timestamp(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'map_timestamp' field must be a sub message of type 'Time'"
        self._map_timestamp = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_UpdateSafetyMap_Event(type):
    """Metaclass of message 'UpdateSafetyMap_Event'."""

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
                'safe_teleop_core.srv.UpdateSafetyMap_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__update_safety_map__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__update_safety_map__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__update_safety_map__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__update_safety_map__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__update_safety_map__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UpdateSafetyMap_Event(metaclass=Metaclass_UpdateSafetyMap_Event):
    """Message class 'UpdateSafetyMap_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<safe_teleop_core/UpdateSafetyMap_Request, 1>',
        'response': 'sequence<safe_teleop_core/UpdateSafetyMap_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['safe_teleop_core', 'srv'], 'UpdateSafetyMap_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['safe_teleop_core', 'srv'], 'UpdateSafetyMap_Response'), 1),  # noqa: E501
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
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

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
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from safe_teleop_core.srv import UpdateSafetyMap_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, UpdateSafetyMap_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'UpdateSafetyMap_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from safe_teleop_core.srv import UpdateSafetyMap_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, UpdateSafetyMap_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'UpdateSafetyMap_Response'"
        self._response = value


class Metaclass_UpdateSafetyMap(type):
    """Metaclass of service 'UpdateSafetyMap'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('safe_teleop_core')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'safe_teleop_core.srv.UpdateSafetyMap')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__update_safety_map

            from safe_teleop_core.srv import _update_safety_map
            if _update_safety_map.Metaclass_UpdateSafetyMap_Request._TYPE_SUPPORT is None:
                _update_safety_map.Metaclass_UpdateSafetyMap_Request.__import_type_support__()
            if _update_safety_map.Metaclass_UpdateSafetyMap_Response._TYPE_SUPPORT is None:
                _update_safety_map.Metaclass_UpdateSafetyMap_Response.__import_type_support__()
            if _update_safety_map.Metaclass_UpdateSafetyMap_Event._TYPE_SUPPORT is None:
                _update_safety_map.Metaclass_UpdateSafetyMap_Event.__import_type_support__()


class UpdateSafetyMap(metaclass=Metaclass_UpdateSafetyMap):
    from safe_teleop_core.srv._update_safety_map import UpdateSafetyMap_Request as Request
    from safe_teleop_core.srv._update_safety_map import UpdateSafetyMap_Response as Response
    from safe_teleop_core.srv._update_safety_map import UpdateSafetyMap_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
