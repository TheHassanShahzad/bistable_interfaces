// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bistable_interfaces:msg/GamepadData.idl
// generated code does not contain a copyright notice

#ifndef BISTABLE_INTERFACES__MSG__DETAIL__GAMEPAD_DATA__STRUCT_HPP_
#define BISTABLE_INTERFACES__MSG__DETAIL__GAMEPAD_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bistable_interfaces__msg__GamepadData __attribute__((deprecated))
#else
# define DEPRECATED__bistable_interfaces__msg__GamepadData __declspec(deprecated)
#endif

namespace bistable_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GamepadData_
{
  using Type = GamepadData_<ContainerAllocator>;

  explicit GamepadData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->inclination = 0.0f;
      this->yaw_vel = 0.0f;
      this->eq_change = 0.0f;
      this->kp_change = 0.0f;
      this->ki_change = 0.0f;
      this->kd_change = 0.0f;
      this->tracking_toggle = false;
    }
  }

  explicit GamepadData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->inclination = 0.0f;
      this->yaw_vel = 0.0f;
      this->eq_change = 0.0f;
      this->kp_change = 0.0f;
      this->ki_change = 0.0f;
      this->kd_change = 0.0f;
      this->tracking_toggle = false;
    }
  }

  // field types and members
  using _inclination_type =
    float;
  _inclination_type inclination;
  using _yaw_vel_type =
    float;
  _yaw_vel_type yaw_vel;
  using _eq_change_type =
    float;
  _eq_change_type eq_change;
  using _kp_change_type =
    float;
  _kp_change_type kp_change;
  using _ki_change_type =
    float;
  _ki_change_type ki_change;
  using _kd_change_type =
    float;
  _kd_change_type kd_change;
  using _tracking_toggle_type =
    bool;
  _tracking_toggle_type tracking_toggle;

  // setters for named parameter idiom
  Type & set__inclination(
    const float & _arg)
  {
    this->inclination = _arg;
    return *this;
  }
  Type & set__yaw_vel(
    const float & _arg)
  {
    this->yaw_vel = _arg;
    return *this;
  }
  Type & set__eq_change(
    const float & _arg)
  {
    this->eq_change = _arg;
    return *this;
  }
  Type & set__kp_change(
    const float & _arg)
  {
    this->kp_change = _arg;
    return *this;
  }
  Type & set__ki_change(
    const float & _arg)
  {
    this->ki_change = _arg;
    return *this;
  }
  Type & set__kd_change(
    const float & _arg)
  {
    this->kd_change = _arg;
    return *this;
  }
  Type & set__tracking_toggle(
    const bool & _arg)
  {
    this->tracking_toggle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bistable_interfaces::msg::GamepadData_<ContainerAllocator> *;
  using ConstRawPtr =
    const bistable_interfaces::msg::GamepadData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bistable_interfaces::msg::GamepadData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bistable_interfaces::msg::GamepadData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bistable_interfaces::msg::GamepadData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bistable_interfaces::msg::GamepadData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bistable_interfaces::msg::GamepadData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bistable_interfaces::msg::GamepadData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bistable_interfaces::msg::GamepadData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bistable_interfaces::msg::GamepadData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bistable_interfaces__msg__GamepadData
    std::shared_ptr<bistable_interfaces::msg::GamepadData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bistable_interfaces__msg__GamepadData
    std::shared_ptr<bistable_interfaces::msg::GamepadData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GamepadData_ & other) const
  {
    if (this->inclination != other.inclination) {
      return false;
    }
    if (this->yaw_vel != other.yaw_vel) {
      return false;
    }
    if (this->eq_change != other.eq_change) {
      return false;
    }
    if (this->kp_change != other.kp_change) {
      return false;
    }
    if (this->ki_change != other.ki_change) {
      return false;
    }
    if (this->kd_change != other.kd_change) {
      return false;
    }
    if (this->tracking_toggle != other.tracking_toggle) {
      return false;
    }
    return true;
  }
  bool operator!=(const GamepadData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GamepadData_

// alias to use template instance with default allocator
using GamepadData =
  bistable_interfaces::msg::GamepadData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bistable_interfaces

#endif  // BISTABLE_INTERFACES__MSG__DETAIL__GAMEPAD_DATA__STRUCT_HPP_
