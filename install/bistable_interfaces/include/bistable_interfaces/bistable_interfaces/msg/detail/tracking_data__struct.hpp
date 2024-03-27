// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bistable_interfaces:msg/TrackingData.idl
// generated code does not contain a copyright notice

#ifndef BISTABLE_INTERFACES__MSG__DETAIL__TRACKING_DATA__STRUCT_HPP_
#define BISTABLE_INTERFACES__MSG__DETAIL__TRACKING_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bistable_interfaces__msg__TrackingData __attribute__((deprecated))
#else
# define DEPRECATED__bistable_interfaces__msg__TrackingData __declspec(deprecated)
#endif

namespace bistable_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackingData_
{
  using Type = TrackingData_<ContainerAllocator>;

  explicit TrackingData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->inclination = 0.0f;
      this->yaw_vel = 0.0f;
    }
  }

  explicit TrackingData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->inclination = 0.0f;
      this->yaw_vel = 0.0f;
    }
  }

  // field types and members
  using _inclination_type =
    float;
  _inclination_type inclination;
  using _yaw_vel_type =
    float;
  _yaw_vel_type yaw_vel;

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

  // constant declarations

  // pointer types
  using RawPtr =
    bistable_interfaces::msg::TrackingData_<ContainerAllocator> *;
  using ConstRawPtr =
    const bistable_interfaces::msg::TrackingData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bistable_interfaces::msg::TrackingData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bistable_interfaces::msg::TrackingData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bistable_interfaces::msg::TrackingData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bistable_interfaces::msg::TrackingData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bistable_interfaces::msg::TrackingData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bistable_interfaces::msg::TrackingData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bistable_interfaces::msg::TrackingData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bistable_interfaces::msg::TrackingData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bistable_interfaces__msg__TrackingData
    std::shared_ptr<bistable_interfaces::msg::TrackingData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bistable_interfaces__msg__TrackingData
    std::shared_ptr<bistable_interfaces::msg::TrackingData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackingData_ & other) const
  {
    if (this->inclination != other.inclination) {
      return false;
    }
    if (this->yaw_vel != other.yaw_vel) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackingData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackingData_

// alias to use template instance with default allocator
using TrackingData =
  bistable_interfaces::msg::TrackingData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bistable_interfaces

#endif  // BISTABLE_INTERFACES__MSG__DETAIL__TRACKING_DATA__STRUCT_HPP_
