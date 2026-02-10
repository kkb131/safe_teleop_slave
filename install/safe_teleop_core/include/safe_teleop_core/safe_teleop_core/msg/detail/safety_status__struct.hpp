// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from safe_teleop_core:msg/SafetyStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "safe_teleop_core/msg/safety_status.hpp"


#ifndef SAFE_TELEOP_CORE__MSG__DETAIL__SAFETY_STATUS__STRUCT_HPP_
#define SAFE_TELEOP_CORE__MSG__DETAIL__SAFETY_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__safe_teleop_core__msg__SafetyStatus __attribute__((deprecated))
#else
# define DEPRECATED__safe_teleop_core__msg__SafetyStatus __declspec(deprecated)
#endif

namespace safe_teleop_core
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SafetyStatus_
{
  using Type = SafetyStatus_<ContainerAllocator>;

  explicit SafetyStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->safety_mode = 0;
      this->master_connected = false;
      this->esdf_available = false;
      this->pointcloud_available = false;
      this->emergency_stop_active = false;
      this->esdf_age_sec = 0.0f;
      this->pointcloud_age_sec = 0.0f;
      this->last_collision_check_ms = 0.0f;
      this->active_collision_severity = 0;
      this->min_distance_to_obstacle = 0.0f;
      this->avg_collision_check_latency_ms = 0.0f;
      this->collision_checks_per_sec = 0ul;
      this->velocity_limit_active = false;
      this->max_safe_velocity = 0.0f;
    }
  }

  explicit SafetyStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->safety_mode = 0;
      this->master_connected = false;
      this->esdf_available = false;
      this->pointcloud_available = false;
      this->emergency_stop_active = false;
      this->esdf_age_sec = 0.0f;
      this->pointcloud_age_sec = 0.0f;
      this->last_collision_check_ms = 0.0f;
      this->active_collision_severity = 0;
      this->min_distance_to_obstacle = 0.0f;
      this->avg_collision_check_latency_ms = 0.0f;
      this->collision_checks_per_sec = 0ul;
      this->velocity_limit_active = false;
      this->max_safe_velocity = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _safety_mode_type =
    uint8_t;
  _safety_mode_type safety_mode;
  using _master_connected_type =
    bool;
  _master_connected_type master_connected;
  using _esdf_available_type =
    bool;
  _esdf_available_type esdf_available;
  using _pointcloud_available_type =
    bool;
  _pointcloud_available_type pointcloud_available;
  using _emergency_stop_active_type =
    bool;
  _emergency_stop_active_type emergency_stop_active;
  using _esdf_age_sec_type =
    float;
  _esdf_age_sec_type esdf_age_sec;
  using _pointcloud_age_sec_type =
    float;
  _pointcloud_age_sec_type pointcloud_age_sec;
  using _last_collision_check_ms_type =
    float;
  _last_collision_check_ms_type last_collision_check_ms;
  using _active_collision_severity_type =
    uint8_t;
  _active_collision_severity_type active_collision_severity;
  using _min_distance_to_obstacle_type =
    float;
  _min_distance_to_obstacle_type min_distance_to_obstacle;
  using _avg_collision_check_latency_ms_type =
    float;
  _avg_collision_check_latency_ms_type avg_collision_check_latency_ms;
  using _collision_checks_per_sec_type =
    uint32_t;
  _collision_checks_per_sec_type collision_checks_per_sec;
  using _velocity_limit_active_type =
    bool;
  _velocity_limit_active_type velocity_limit_active;
  using _max_safe_velocity_type =
    float;
  _max_safe_velocity_type max_safe_velocity;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__safety_mode(
    const uint8_t & _arg)
  {
    this->safety_mode = _arg;
    return *this;
  }
  Type & set__master_connected(
    const bool & _arg)
  {
    this->master_connected = _arg;
    return *this;
  }
  Type & set__esdf_available(
    const bool & _arg)
  {
    this->esdf_available = _arg;
    return *this;
  }
  Type & set__pointcloud_available(
    const bool & _arg)
  {
    this->pointcloud_available = _arg;
    return *this;
  }
  Type & set__emergency_stop_active(
    const bool & _arg)
  {
    this->emergency_stop_active = _arg;
    return *this;
  }
  Type & set__esdf_age_sec(
    const float & _arg)
  {
    this->esdf_age_sec = _arg;
    return *this;
  }
  Type & set__pointcloud_age_sec(
    const float & _arg)
  {
    this->pointcloud_age_sec = _arg;
    return *this;
  }
  Type & set__last_collision_check_ms(
    const float & _arg)
  {
    this->last_collision_check_ms = _arg;
    return *this;
  }
  Type & set__active_collision_severity(
    const uint8_t & _arg)
  {
    this->active_collision_severity = _arg;
    return *this;
  }
  Type & set__min_distance_to_obstacle(
    const float & _arg)
  {
    this->min_distance_to_obstacle = _arg;
    return *this;
  }
  Type & set__avg_collision_check_latency_ms(
    const float & _arg)
  {
    this->avg_collision_check_latency_ms = _arg;
    return *this;
  }
  Type & set__collision_checks_per_sec(
    const uint32_t & _arg)
  {
    this->collision_checks_per_sec = _arg;
    return *this;
  }
  Type & set__velocity_limit_active(
    const bool & _arg)
  {
    this->velocity_limit_active = _arg;
    return *this;
  }
  Type & set__max_safe_velocity(
    const float & _arg)
  {
    this->max_safe_velocity = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NORMAL =
    0u;
  static constexpr uint8_t DEGRADED =
    1u;
  static constexpr uint8_t EMERGENCY =
    2u;

  // pointer types
  using RawPtr =
    safe_teleop_core::msg::SafetyStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const safe_teleop_core::msg::SafetyStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<safe_teleop_core::msg::SafetyStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<safe_teleop_core::msg::SafetyStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      safe_teleop_core::msg::SafetyStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<safe_teleop_core::msg::SafetyStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      safe_teleop_core::msg::SafetyStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<safe_teleop_core::msg::SafetyStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<safe_teleop_core::msg::SafetyStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<safe_teleop_core::msg::SafetyStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__safe_teleop_core__msg__SafetyStatus
    std::shared_ptr<safe_teleop_core::msg::SafetyStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__safe_teleop_core__msg__SafetyStatus
    std::shared_ptr<safe_teleop_core::msg::SafetyStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SafetyStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->safety_mode != other.safety_mode) {
      return false;
    }
    if (this->master_connected != other.master_connected) {
      return false;
    }
    if (this->esdf_available != other.esdf_available) {
      return false;
    }
    if (this->pointcloud_available != other.pointcloud_available) {
      return false;
    }
    if (this->emergency_stop_active != other.emergency_stop_active) {
      return false;
    }
    if (this->esdf_age_sec != other.esdf_age_sec) {
      return false;
    }
    if (this->pointcloud_age_sec != other.pointcloud_age_sec) {
      return false;
    }
    if (this->last_collision_check_ms != other.last_collision_check_ms) {
      return false;
    }
    if (this->active_collision_severity != other.active_collision_severity) {
      return false;
    }
    if (this->min_distance_to_obstacle != other.min_distance_to_obstacle) {
      return false;
    }
    if (this->avg_collision_check_latency_ms != other.avg_collision_check_latency_ms) {
      return false;
    }
    if (this->collision_checks_per_sec != other.collision_checks_per_sec) {
      return false;
    }
    if (this->velocity_limit_active != other.velocity_limit_active) {
      return false;
    }
    if (this->max_safe_velocity != other.max_safe_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const SafetyStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SafetyStatus_

// alias to use template instance with default allocator
using SafetyStatus =
  safe_teleop_core::msg::SafetyStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SafetyStatus_<ContainerAllocator>::NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SafetyStatus_<ContainerAllocator>::DEGRADED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SafetyStatus_<ContainerAllocator>::EMERGENCY;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace safe_teleop_core

#endif  // SAFE_TELEOP_CORE__MSG__DETAIL__SAFETY_STATUS__STRUCT_HPP_
