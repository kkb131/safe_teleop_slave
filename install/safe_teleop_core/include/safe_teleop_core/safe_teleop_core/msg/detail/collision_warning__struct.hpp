// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from safe_teleop_core:msg/CollisionWarning.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "safe_teleop_core/msg/collision_warning.hpp"


#ifndef SAFE_TELEOP_CORE__MSG__DETAIL__COLLISION_WARNING__STRUCT_HPP_
#define SAFE_TELEOP_CORE__MSG__DETAIL__COLLISION_WARNING__STRUCT_HPP_

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
# define DEPRECATED__safe_teleop_core__msg__CollisionWarning __attribute__((deprecated))
#else
# define DEPRECATED__safe_teleop_core__msg__CollisionWarning __declspec(deprecated)
#endif

namespace safe_teleop_core
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CollisionWarning_
{
  using Type = CollisionWarning_<ContainerAllocator>;

  explicit CollisionWarning_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->severity = 0;
      this->object_id = "";
      this->distance_to_collision = 0.0f;
      this->time_to_collision = 0.0f;
      this->emergency_stop_required = false;
      this->velocity_reduction_required = false;
      this->max_safe_velocity = 0.0f;
      this->warning_source = "";
    }
  }

  explicit CollisionWarning_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    object_id(_alloc),
    warning_source(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->severity = 0;
      this->object_id = "";
      this->distance_to_collision = 0.0f;
      this->time_to_collision = 0.0f;
      this->emergency_stop_required = false;
      this->velocity_reduction_required = false;
      this->max_safe_velocity = 0.0f;
      this->warning_source = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _severity_type =
    uint8_t;
  _severity_type severity;
  using _object_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _object_id_type object_id;
  using _distance_to_collision_type =
    float;
  _distance_to_collision_type distance_to_collision;
  using _time_to_collision_type =
    float;
  _time_to_collision_type time_to_collision;
  using _emergency_stop_required_type =
    bool;
  _emergency_stop_required_type emergency_stop_required;
  using _velocity_reduction_required_type =
    bool;
  _velocity_reduction_required_type velocity_reduction_required;
  using _max_safe_velocity_type =
    float;
  _max_safe_velocity_type max_safe_velocity;
  using _warning_source_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _warning_source_type warning_source;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__severity(
    const uint8_t & _arg)
  {
    this->severity = _arg;
    return *this;
  }
  Type & set__object_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->object_id = _arg;
    return *this;
  }
  Type & set__distance_to_collision(
    const float & _arg)
  {
    this->distance_to_collision = _arg;
    return *this;
  }
  Type & set__time_to_collision(
    const float & _arg)
  {
    this->time_to_collision = _arg;
    return *this;
  }
  Type & set__emergency_stop_required(
    const bool & _arg)
  {
    this->emergency_stop_required = _arg;
    return *this;
  }
  Type & set__velocity_reduction_required(
    const bool & _arg)
  {
    this->velocity_reduction_required = _arg;
    return *this;
  }
  Type & set__max_safe_velocity(
    const float & _arg)
  {
    this->max_safe_velocity = _arg;
    return *this;
  }
  Type & set__warning_source(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->warning_source = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NONE =
    0u;
  static constexpr uint8_t LOW =
    1u;
  static constexpr uint8_t MEDIUM =
    2u;
  static constexpr uint8_t HIGH =
    3u;
  static constexpr uint8_t CRITICAL =
    4u;

  // pointer types
  using RawPtr =
    safe_teleop_core::msg::CollisionWarning_<ContainerAllocator> *;
  using ConstRawPtr =
    const safe_teleop_core::msg::CollisionWarning_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<safe_teleop_core::msg::CollisionWarning_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<safe_teleop_core::msg::CollisionWarning_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      safe_teleop_core::msg::CollisionWarning_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<safe_teleop_core::msg::CollisionWarning_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      safe_teleop_core::msg::CollisionWarning_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<safe_teleop_core::msg::CollisionWarning_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<safe_teleop_core::msg::CollisionWarning_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<safe_teleop_core::msg::CollisionWarning_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__safe_teleop_core__msg__CollisionWarning
    std::shared_ptr<safe_teleop_core::msg::CollisionWarning_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__safe_teleop_core__msg__CollisionWarning
    std::shared_ptr<safe_teleop_core::msg::CollisionWarning_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CollisionWarning_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->severity != other.severity) {
      return false;
    }
    if (this->object_id != other.object_id) {
      return false;
    }
    if (this->distance_to_collision != other.distance_to_collision) {
      return false;
    }
    if (this->time_to_collision != other.time_to_collision) {
      return false;
    }
    if (this->emergency_stop_required != other.emergency_stop_required) {
      return false;
    }
    if (this->velocity_reduction_required != other.velocity_reduction_required) {
      return false;
    }
    if (this->max_safe_velocity != other.max_safe_velocity) {
      return false;
    }
    if (this->warning_source != other.warning_source) {
      return false;
    }
    return true;
  }
  bool operator!=(const CollisionWarning_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CollisionWarning_

// alias to use template instance with default allocator
using CollisionWarning =
  safe_teleop_core::msg::CollisionWarning_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CollisionWarning_<ContainerAllocator>::NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CollisionWarning_<ContainerAllocator>::LOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CollisionWarning_<ContainerAllocator>::MEDIUM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CollisionWarning_<ContainerAllocator>::HIGH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CollisionWarning_<ContainerAllocator>::CRITICAL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace safe_teleop_core

#endif  // SAFE_TELEOP_CORE__MSG__DETAIL__COLLISION_WARNING__STRUCT_HPP_
