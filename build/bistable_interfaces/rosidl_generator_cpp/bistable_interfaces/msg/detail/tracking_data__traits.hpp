// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bistable_interfaces:msg/TrackingData.idl
// generated code does not contain a copyright notice

#ifndef BISTABLE_INTERFACES__MSG__DETAIL__TRACKING_DATA__TRAITS_HPP_
#define BISTABLE_INTERFACES__MSG__DETAIL__TRACKING_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bistable_interfaces/msg/detail/tracking_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bistable_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrackingData & msg,
  std::ostream & out)
{
  out << "{";
  // member: inclination
  {
    out << "inclination: ";
    rosidl_generator_traits::value_to_yaml(msg.inclination, out);
    out << ", ";
  }

  // member: yaw_vel
  {
    out << "yaw_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_vel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrackingData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: inclination
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inclination: ";
    rosidl_generator_traits::value_to_yaml(msg.inclination, out);
    out << "\n";
  }

  // member: yaw_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_vel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrackingData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace bistable_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use bistable_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bistable_interfaces::msg::TrackingData & msg,
  std::ostream & out, size_t indentation = 0)
{
  bistable_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bistable_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const bistable_interfaces::msg::TrackingData & msg)
{
  return bistable_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bistable_interfaces::msg::TrackingData>()
{
  return "bistable_interfaces::msg::TrackingData";
}

template<>
inline const char * name<bistable_interfaces::msg::TrackingData>()
{
  return "bistable_interfaces/msg/TrackingData";
}

template<>
struct has_fixed_size<bistable_interfaces::msg::TrackingData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bistable_interfaces::msg::TrackingData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bistable_interfaces::msg::TrackingData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BISTABLE_INTERFACES__MSG__DETAIL__TRACKING_DATA__TRAITS_HPP_
