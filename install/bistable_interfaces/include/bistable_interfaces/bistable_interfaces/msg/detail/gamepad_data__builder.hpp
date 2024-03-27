// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bistable_interfaces:msg/GamepadData.idl
// generated code does not contain a copyright notice

#ifndef BISTABLE_INTERFACES__MSG__DETAIL__GAMEPAD_DATA__BUILDER_HPP_
#define BISTABLE_INTERFACES__MSG__DETAIL__GAMEPAD_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bistable_interfaces/msg/detail/gamepad_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bistable_interfaces
{

namespace msg
{

namespace builder
{

class Init_GamepadData_tracking_toggle
{
public:
  explicit Init_GamepadData_tracking_toggle(::bistable_interfaces::msg::GamepadData & msg)
  : msg_(msg)
  {}
  ::bistable_interfaces::msg::GamepadData tracking_toggle(::bistable_interfaces::msg::GamepadData::_tracking_toggle_type arg)
  {
    msg_.tracking_toggle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bistable_interfaces::msg::GamepadData msg_;
};

class Init_GamepadData_kd_change
{
public:
  explicit Init_GamepadData_kd_change(::bistable_interfaces::msg::GamepadData & msg)
  : msg_(msg)
  {}
  Init_GamepadData_tracking_toggle kd_change(::bistable_interfaces::msg::GamepadData::_kd_change_type arg)
  {
    msg_.kd_change = std::move(arg);
    return Init_GamepadData_tracking_toggle(msg_);
  }

private:
  ::bistable_interfaces::msg::GamepadData msg_;
};

class Init_GamepadData_ki_change
{
public:
  explicit Init_GamepadData_ki_change(::bistable_interfaces::msg::GamepadData & msg)
  : msg_(msg)
  {}
  Init_GamepadData_kd_change ki_change(::bistable_interfaces::msg::GamepadData::_ki_change_type arg)
  {
    msg_.ki_change = std::move(arg);
    return Init_GamepadData_kd_change(msg_);
  }

private:
  ::bistable_interfaces::msg::GamepadData msg_;
};

class Init_GamepadData_kp_change
{
public:
  explicit Init_GamepadData_kp_change(::bistable_interfaces::msg::GamepadData & msg)
  : msg_(msg)
  {}
  Init_GamepadData_ki_change kp_change(::bistable_interfaces::msg::GamepadData::_kp_change_type arg)
  {
    msg_.kp_change = std::move(arg);
    return Init_GamepadData_ki_change(msg_);
  }

private:
  ::bistable_interfaces::msg::GamepadData msg_;
};

class Init_GamepadData_eq_change
{
public:
  explicit Init_GamepadData_eq_change(::bistable_interfaces::msg::GamepadData & msg)
  : msg_(msg)
  {}
  Init_GamepadData_kp_change eq_change(::bistable_interfaces::msg::GamepadData::_eq_change_type arg)
  {
    msg_.eq_change = std::move(arg);
    return Init_GamepadData_kp_change(msg_);
  }

private:
  ::bistable_interfaces::msg::GamepadData msg_;
};

class Init_GamepadData_yaw_vel
{
public:
  explicit Init_GamepadData_yaw_vel(::bistable_interfaces::msg::GamepadData & msg)
  : msg_(msg)
  {}
  Init_GamepadData_eq_change yaw_vel(::bistable_interfaces::msg::GamepadData::_yaw_vel_type arg)
  {
    msg_.yaw_vel = std::move(arg);
    return Init_GamepadData_eq_change(msg_);
  }

private:
  ::bistable_interfaces::msg::GamepadData msg_;
};

class Init_GamepadData_inclination
{
public:
  Init_GamepadData_inclination()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GamepadData_yaw_vel inclination(::bistable_interfaces::msg::GamepadData::_inclination_type arg)
  {
    msg_.inclination = std::move(arg);
    return Init_GamepadData_yaw_vel(msg_);
  }

private:
  ::bistable_interfaces::msg::GamepadData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bistable_interfaces::msg::GamepadData>()
{
  return bistable_interfaces::msg::builder::Init_GamepadData_inclination();
}

}  // namespace bistable_interfaces

#endif  // BISTABLE_INTERFACES__MSG__DETAIL__GAMEPAD_DATA__BUILDER_HPP_
