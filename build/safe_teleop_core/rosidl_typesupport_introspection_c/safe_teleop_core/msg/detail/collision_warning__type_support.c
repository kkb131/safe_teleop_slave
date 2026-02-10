// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from safe_teleop_core:msg/CollisionWarning.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "safe_teleop_core/msg/detail/collision_warning__rosidl_typesupport_introspection_c.h"
#include "safe_teleop_core/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "safe_teleop_core/msg/detail/collision_warning__functions.h"
#include "safe_teleop_core/msg/detail/collision_warning__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `object_id`
// Member `warning_source`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void safe_teleop_core__msg__CollisionWarning__rosidl_typesupport_introspection_c__CollisionWarning_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  safe_teleop_core__msg__CollisionWarning__init(message_memory);
}

void safe_teleop_core__msg__CollisionWarning__rosidl_typesupport_introspection_c__CollisionWarning_fini_function(void * message_memory)
{
  safe_teleop_core__msg__CollisionWarning__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember safe_teleop_core__msg__CollisionWarning__rosidl_typesupport_introspection_c__CollisionWarning_message_member_array[9] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(safe_teleop_core__msg__CollisionWarning, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "severity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(safe_teleop_core__msg__CollisionWarning, severity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(safe_teleop_core__msg__CollisionWarning, object_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance_to_collision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(safe_teleop_core__msg__CollisionWarning, distance_to_collision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_to_collision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(safe_teleop_core__msg__CollisionWarning, time_to_collision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "emergency_stop_required",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(safe_teleop_core__msg__CollisionWarning, emergency_stop_required),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_reduction_required",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(safe_teleop_core__msg__CollisionWarning, velocity_reduction_required),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_safe_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(safe_teleop_core__msg__CollisionWarning, max_safe_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "warning_source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(safe_teleop_core__msg__CollisionWarning, warning_source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers safe_teleop_core__msg__CollisionWarning__rosidl_typesupport_introspection_c__CollisionWarning_message_members = {
  "safe_teleop_core__msg",  // message namespace
  "CollisionWarning",  // message name
  9,  // number of fields
  sizeof(safe_teleop_core__msg__CollisionWarning),
  false,  // has_any_key_member_
  safe_teleop_core__msg__CollisionWarning__rosidl_typesupport_introspection_c__CollisionWarning_message_member_array,  // message members
  safe_teleop_core__msg__CollisionWarning__rosidl_typesupport_introspection_c__CollisionWarning_init_function,  // function to initialize message memory (memory has to be allocated)
  safe_teleop_core__msg__CollisionWarning__rosidl_typesupport_introspection_c__CollisionWarning_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t safe_teleop_core__msg__CollisionWarning__rosidl_typesupport_introspection_c__CollisionWarning_message_type_support_handle = {
  0,
  &safe_teleop_core__msg__CollisionWarning__rosidl_typesupport_introspection_c__CollisionWarning_message_members,
  get_message_typesupport_handle_function,
  &safe_teleop_core__msg__CollisionWarning__get_type_hash,
  &safe_teleop_core__msg__CollisionWarning__get_type_description,
  &safe_teleop_core__msg__CollisionWarning__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_safe_teleop_core
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, safe_teleop_core, msg, CollisionWarning)() {
  safe_teleop_core__msg__CollisionWarning__rosidl_typesupport_introspection_c__CollisionWarning_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!safe_teleop_core__msg__CollisionWarning__rosidl_typesupport_introspection_c__CollisionWarning_message_type_support_handle.typesupport_identifier) {
    safe_teleop_core__msg__CollisionWarning__rosidl_typesupport_introspection_c__CollisionWarning_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &safe_teleop_core__msg__CollisionWarning__rosidl_typesupport_introspection_c__CollisionWarning_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
