// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pallet_insight_msgs:msg/Pose2D.idl
// generated code does not contain a copyright notice

#ifndef PALLET_INSIGHT_MSGS__MSG__DETAIL__POSE2_D__TRAITS_HPP_
#define PALLET_INSIGHT_MSGS__MSG__DETAIL__POSE2_D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pallet_insight_msgs/msg/detail/pose2_d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "pallet_insight_msgs/msg/detail/point2_d__traits.hpp"

namespace pallet_insight_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Pose2D & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Pose2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Pose2D & msg, bool use_flow_style = false)
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

}  // namespace pallet_insight_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pallet_insight_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pallet_insight_msgs::msg::Pose2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  pallet_insight_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pallet_insight_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pallet_insight_msgs::msg::Pose2D & msg)
{
  return pallet_insight_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pallet_insight_msgs::msg::Pose2D>()
{
  return "pallet_insight_msgs::msg::Pose2D";
}

template<>
inline const char * name<pallet_insight_msgs::msg::Pose2D>()
{
  return "pallet_insight_msgs/msg/Pose2D";
}

template<>
struct has_fixed_size<pallet_insight_msgs::msg::Pose2D>
  : std::integral_constant<bool, has_fixed_size<pallet_insight_msgs::msg::Point2D>::value> {};

template<>
struct has_bounded_size<pallet_insight_msgs::msg::Pose2D>
  : std::integral_constant<bool, has_bounded_size<pallet_insight_msgs::msg::Point2D>::value> {};

template<>
struct is_message<pallet_insight_msgs::msg::Pose2D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PALLET_INSIGHT_MSGS__MSG__DETAIL__POSE2_D__TRAITS_HPP_
