// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from safe_teleop_core:msg/DynamicObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "safe_teleop_core/msg/dynamic_object.hpp"


#ifndef SAFE_TELEOP_CORE__MSG__DETAIL__DYNAMIC_OBJECT__STRUCT_HPP_
#define SAFE_TELEOP_CORE__MSG__DETAIL__DYNAMIC_OBJECT__STRUCT_HPP_

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
// Member 'current_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'bounding_box'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'first_detected'
// Member 'last_updated'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__safe_teleop_core__msg__DynamicObject __attribute__((deprecated))
#else
# define DEPRECATED__safe_teleop_core__msg__DynamicObject __declspec(deprecated)
#endif

namespace safe_teleop_core
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DynamicObject_
{
  using Type = DynamicObject_<ContainerAllocator>;

  explicit DynamicObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    current_pose(_init),
    velocity(_init),
    bounding_box(_init),
    first_detected(_init),
    last_updated(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = "";
      this->tracking_id = 0ull;
      this->object_class = 0;
      this->tracking_confidence = 0.0f;
      this->frames_tracked = 0ul;
    }
  }

  explicit DynamicObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    object_id(_alloc),
    current_pose(_alloc, _init),
    velocity(_alloc, _init),
    bounding_box(_alloc, _init),
    first_detected(_alloc, _init),
    last_updated(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = "";
      this->tracking_id = 0ull;
      this->object_class = 0;
      this->tracking_confidence = 0.0f;
      this->frames_tracked = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _object_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _object_id_type object_id;
  using _tracking_id_type =
    uint64_t;
  _tracking_id_type tracking_id;
  using _current_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _current_pose_type current_pose;
  using _velocity_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _velocity_type velocity;
  using _bounding_box_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _bounding_box_type bounding_box;
  using _object_class_type =
    uint8_t;
  _object_class_type object_class;
  using _tracking_confidence_type =
    float;
  _tracking_confidence_type tracking_confidence;
  using _frames_tracked_type =
    uint32_t;
  _frames_tracked_type frames_tracked;
  using _first_detected_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _first_detected_type first_detected;
  using _last_updated_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _last_updated_type last_updated;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__object_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->object_id = _arg;
    return *this;
  }
  Type & set__tracking_id(
    const uint64_t & _arg)
  {
    this->tracking_id = _arg;
    return *this;
  }
  Type & set__current_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->current_pose = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__bounding_box(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->bounding_box = _arg;
    return *this;
  }
  Type & set__object_class(
    const uint8_t & _arg)
  {
    this->object_class = _arg;
    return *this;
  }
  Type & set__tracking_confidence(
    const float & _arg)
  {
    this->tracking_confidence = _arg;
    return *this;
  }
  Type & set__frames_tracked(
    const uint32_t & _arg)
  {
    this->frames_tracked = _arg;
    return *this;
  }
  Type & set__first_detected(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->first_detected = _arg;
    return *this;
  }
  Type & set__last_updated(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->last_updated = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t PERSON =
    0u;
  static constexpr uint8_t MOVING_OBJECT =
    1u;
  static constexpr uint8_t ROBOT_INTERACTION =
    2u;

  // pointer types
  using RawPtr =
    safe_teleop_core::msg::DynamicObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const safe_teleop_core::msg::DynamicObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<safe_teleop_core::msg::DynamicObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<safe_teleop_core::msg::DynamicObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      safe_teleop_core::msg::DynamicObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<safe_teleop_core::msg::DynamicObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      safe_teleop_core::msg::DynamicObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<safe_teleop_core::msg::DynamicObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<safe_teleop_core::msg::DynamicObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<safe_teleop_core::msg::DynamicObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__safe_teleop_core__msg__DynamicObject
    std::shared_ptr<safe_teleop_core::msg::DynamicObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__safe_teleop_core__msg__DynamicObject
    std::shared_ptr<safe_teleop_core::msg::DynamicObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynamicObject_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->object_id != other.object_id) {
      return false;
    }
    if (this->tracking_id != other.tracking_id) {
      return false;
    }
    if (this->current_pose != other.current_pose) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->bounding_box != other.bounding_box) {
      return false;
    }
    if (this->object_class != other.object_class) {
      return false;
    }
    if (this->tracking_confidence != other.tracking_confidence) {
      return false;
    }
    if (this->frames_tracked != other.frames_tracked) {
      return false;
    }
    if (this->first_detected != other.first_detected) {
      return false;
    }
    if (this->last_updated != other.last_updated) {
      return false;
    }
    return true;
  }
  bool operator!=(const DynamicObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DynamicObject_

// alias to use template instance with default allocator
using DynamicObject =
  safe_teleop_core::msg::DynamicObject_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObject_<ContainerAllocator>::PERSON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObject_<ContainerAllocator>::MOVING_OBJECT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObject_<ContainerAllocator>::ROBOT_INTERACTION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace safe_teleop_core

#endif  // SAFE_TELEOP_CORE__MSG__DETAIL__DYNAMIC_OBJECT__STRUCT_HPP_
