// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from safe_teleop_core:msg/CollisionWarning.idl
// generated code does not contain a copyright notice

#include "safe_teleop_core/msg/detail/collision_warning__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_safe_teleop_core
const rosidl_type_hash_t *
safe_teleop_core__msg__CollisionWarning__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x87, 0xde, 0xa6, 0x65, 0x6f, 0x1c, 0xfd, 0xff,
      0x11, 0x79, 0xdb, 0x79, 0xd6, 0x76, 0x19, 0x8a,
      0xb5, 0xe4, 0x54, 0xee, 0x77, 0x06, 0x41, 0x73,
      0x3f, 0xd5, 0x0a, 0x11, 0x5a, 0x26, 0x97, 0xc5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char safe_teleop_core__msg__CollisionWarning__TYPE_NAME[] = "safe_teleop_core/msg/CollisionWarning";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char safe_teleop_core__msg__CollisionWarning__FIELD_NAME__header[] = "header";
static char safe_teleop_core__msg__CollisionWarning__FIELD_NAME__severity[] = "severity";
static char safe_teleop_core__msg__CollisionWarning__FIELD_NAME__object_id[] = "object_id";
static char safe_teleop_core__msg__CollisionWarning__FIELD_NAME__distance_to_collision[] = "distance_to_collision";
static char safe_teleop_core__msg__CollisionWarning__FIELD_NAME__time_to_collision[] = "time_to_collision";
static char safe_teleop_core__msg__CollisionWarning__FIELD_NAME__emergency_stop_required[] = "emergency_stop_required";
static char safe_teleop_core__msg__CollisionWarning__FIELD_NAME__velocity_reduction_required[] = "velocity_reduction_required";
static char safe_teleop_core__msg__CollisionWarning__FIELD_NAME__max_safe_velocity[] = "max_safe_velocity";
static char safe_teleop_core__msg__CollisionWarning__FIELD_NAME__warning_source[] = "warning_source";

static rosidl_runtime_c__type_description__Field safe_teleop_core__msg__CollisionWarning__FIELDS[] = {
  {
    {safe_teleop_core__msg__CollisionWarning__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__msg__CollisionWarning__FIELD_NAME__severity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__msg__CollisionWarning__FIELD_NAME__object_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__msg__CollisionWarning__FIELD_NAME__distance_to_collision, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__msg__CollisionWarning__FIELD_NAME__time_to_collision, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__msg__CollisionWarning__FIELD_NAME__emergency_stop_required, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__msg__CollisionWarning__FIELD_NAME__velocity_reduction_required, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__msg__CollisionWarning__FIELD_NAME__max_safe_velocity, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__msg__CollisionWarning__FIELD_NAME__warning_source, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription safe_teleop_core__msg__CollisionWarning__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
safe_teleop_core__msg__CollisionWarning__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {safe_teleop_core__msg__CollisionWarning__TYPE_NAME, 37, 37},
      {safe_teleop_core__msg__CollisionWarning__FIELDS, 9, 9},
    },
    {safe_teleop_core__msg__CollisionWarning__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# CollisionWarning message - real-time collision risk assessment\n"
  "std_msgs/Header header\n"
  "\n"
  "# Severity levels\n"
  "uint8 NONE = 0\n"
  "uint8 LOW = 1\n"
  "uint8 MEDIUM = 2\n"
  "uint8 HIGH = 3\n"
  "uint8 CRITICAL = 4  # immediate stop required\n"
  "\n"
  "uint8 severity\n"
  "\n"
  "# Collision details\n"
  "string object_id  # ID of object at risk\n"
  "float32 distance_to_collision  # meters\n"
  "float32 time_to_collision  # seconds (estimated)\n"
  "\n"
  "# Recommended action\n"
  "bool emergency_stop_required\n"
  "bool velocity_reduction_required\n"
  "float32 max_safe_velocity  # m/s\n"
  "\n"
  "# Source of warning\n"
  "string warning_source  # \"esdf\", \"pointcloud\", \"sensor\"";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
safe_teleop_core__msg__CollisionWarning__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {safe_teleop_core__msg__CollisionWarning__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 575, 575},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
safe_teleop_core__msg__CollisionWarning__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *safe_teleop_core__msg__CollisionWarning__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
