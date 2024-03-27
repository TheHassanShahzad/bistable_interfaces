// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bistable_interfaces:msg/TrackingData.idl
// generated code does not contain a copyright notice

#ifndef BISTABLE_INTERFACES__MSG__DETAIL__TRACKING_DATA__BUILDER_HPP_
#define BISTABLE_INTERFACES__MSG__DETAIL__TRACKING_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bistable_interfaces/msg/detail/tracking_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bistable_interfaces
{

namespace msg
{

namespace builder
{

class Init_TrackingData_yaw_vel
{
public:
  explicit Init_TrackingData_yaw_vel(::bistable_interfaces::msg::TrackingData & msg)
  : msg_(msg)
  {}
  ::bistable_interfaces::msg::TrackingData yaw_vel(::bistable_interfaces::msg::TrackingData::_yaw_vel_type arg)
  {
    msg_.yaw_vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bistable_interfaces::msg::TrackingData msg_;
};

class Init_TrackingData_inclination
{
public:
  Init_TrackingData_inclination()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackingData_yaw_vel inclination(::bistable_interfaces::msg::TrackingData::_inclination_type arg)
  {
    msg_.inclination = std::move(arg);
    return Init_TrackingData_yaw_vel(msg_);
  }

private:
  ::bistable_interfaces::msg::TrackingData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bistable_interfaces::msg::TrackingData>()
{
  return bistable_interfaces::msg::builder::Init_TrackingData_inclination();
}

}  // namespace bistable_interfaces

#endif  // BISTABLE_INTERFACES__MSG__DETAIL__TRACKING_DATA__BUILDER_HPP_
