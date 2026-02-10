// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from safe_teleop_core:msg/SafetyStatus.idl
// generated code does not contain a copyright notice

#include "safe_teleop_core/msg/detail/safety_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_safe_teleop_core
const rosidl_type_hash_t *
safe_teleop_core__msg__SafetyStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xeb, 0x84, 0xa6, 0xfc, 0xe8, 0xcc, 0x8e, 0xd0,
      0xd1, 0x51, 0x0c, 0x9c, 0x9e, 0xc6, 0xcf, 0x22,
      0x3a, 0x0c, 0xd1, 0x8e, 0xf7, 0x35, 0xe9, 0x1f,
      0xd6, 0x41, 0xd6, 0xfe, 0x92, 0x6c, 0x4a, 0xe4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

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

static char safe_teleop_core__msg__SafetyStatus__TYPE_NAME[] = "safe_teleop_core/msg/SafetyStatus";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char safe_teleop_core__msg__SafetyStatus__FIELD_NAME__header[] = "header";
static char safe_teleop_core__msg__SafetyStatus__FIELD_NAME__safety_mode[] = "safety_mode";
static char safe_teleop_core__msg__SafetyStatus__FIELD_NAME__master_connected[] = "master_connected";
static char safe_teleop_core__msg__SafetyStatus__FIELD_NAME__esdf_available[] = "esdf_available";
static char safe_teleop_core__msg__SafetyStatus__FIELD_NAME__pointcloud_available[] = "pointcloud_available";
static char safe_teleop_core__msg__SafetyStatus__FIELD_NAME__emergency_stop_active[] = "emergency_stop_active";
static char safe_teleop_core__msg__SafetyStatus__FIELD_NAME__esdf_age_sec[] = "esdf_age_sec";
static char safe_teleop_core__msg__SafetyStatus__FIELD_NAME__pointcloud_age_sec[] = "pointcloud_age_sec";
static char safe_teleop_core__msg__SafetyStatus__FIELD_NAME__last_collision_check_ms[] = "last_collision_check_ms";
static char safe_teleop_core__msg__SafetyStatus__FIELD_NAME__active_collision_severity[] = "active_collision_severity";
static char safe_teleop_core__msg__SafetyStatus__FIELD_NAME__min_distance_to_obstacle[] = "min_distance_to_obstacle";
static char safe_teleop_core__msg__SafetyStatus__FIELD_NAME__avg_collision_check_latency_ms[] = "avg_collision_check_latency_ms";
static char safe_teleop_core__msg__SafetyStatus__FIELD_NAME__collision_checks_per_sec[] = "collision_checks_per_sec";
static char safe_teleop_core__msg__SafetyStatus__FIELD_NAME__velocity_limit_active[] = "velocity_limit_active";
static char safe_teleop_core__msg__SafetyStatus__FIELD_NAME__max_safe_velocity[] = "max_safe_velocity";

static rosidl_runtime_c__type_description__Field safe_teleop_core__msg__SafetyStatus__FIELDS[] = {
  {
    {safe_teleop_core__msg__SafetyStatus__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__msg__SafetyStatus__FIELD_NAME__safety_mode, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__msg__SafetyStatus__FIELD_NAME__master_connected, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__msg__SafetyStatus__FIELD_NAME__esdf_available, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__msg__SafetyStatus__FIELD_NAME__pointcloud_available, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__msg__SafetyStatus__FIELD_NAME__emergency_stop_active, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__msg__SafetyStatus__FIELD_NAME__esdf_age_sec, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__msg__SafetyStatus__FIELD_NAME__pointcloud_age_sec, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__msg__SafetyStatus__FIELD_NAME__last_collision_check_ms, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__msg__SafetyStatus__FIELD_NAME__active_collision_severity, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__msg__SafetyStatus__FIELD_NAME__min_distance_to_obstacle, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__msg__SafetyStatus__FIELD_NAME__avg_collision_check_latency_ms, 30, 30},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__msg__SafetyStatus__FIELD_NAME__collision_checks_per_sec, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__msg__SafetyStatus__FIELD_NAME__velocity_limit_active, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {safe_teleop_core__msg__SafetyStatus__FIELD_NAME__max_safe_velocity, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription safe_teleop_core__msg__SafetyStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
safe_teleop_core__msg__SafetyStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {safe_teleop_core__msg__SafetyStatus__TYPE_NAME, 33, 33},
      {safe_teleop_core__msg__SafetyStatus__FIELDS, 15, 15},
    },
    {safe_teleop_core__msg__SafetyStatus__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "# SafetyStatus message - overall system safety state\n"
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "# Safety mode (matches C++ enum in collision_detector_node.cpp)\n"
  "uint8 NORMAL = 0        # Master connected, all sensors active\n"
  "uint8 DEGRADED = 1      # Master disconnected, using cached ESDF\n"
  "uint8 EMERGENCY = 2     # Sensor failure or critical collision\n"
  "\n"
  "uint8 safety_mode\n"
  "\n"
  "# System health\n"
  "bool master_connected\n"
  "bool esdf_available\n"
  "bool pointcloud_available\n"
  "bool emergency_stop_active\n"
  "\n"
  "# Timing diagnostics\n"
  "float32 esdf_age_sec          # seconds since last ESDF update\n"
  "float32 pointcloud_age_sec    # seconds since last PointCloud\n"
  "float32 last_collision_check_ms  # latency of last collision check\n"
  "\n"
  "# Active warnings\n"
  "uint8 active_collision_severity  # from CollisionWarning\n"
  "float32 min_distance_to_obstacle  # meters\n"
  "\n"
  "# Performance metrics\n"
  "float32 avg_collision_check_latency_ms\n"
  "uint32 collision_checks_per_sec\n"
  "\n"
  "# Recommended actions\n"
  "bool velocity_limit_active\n"
  "float32 max_safe_velocity  # m/s";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
safe_teleop_core__msg__SafetyStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {safe_teleop_core__msg__SafetyStatus__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 974, 974},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
safe_teleop_core__msg__SafetyStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *safe_teleop_core__msg__SafetyStatus__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
