// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pallet_insight_msgs:msg/BoundingBox2D.idl
// generated code does not contain a copyright notice

#ifndef PALLET_INSIGHT_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__TRAITS_HPP_
#define PALLET_INSIGHT_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pallet_insight_msgs/msg/detail/bounding_box2_d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'center'
#include "pallet_insight_msgs/msg/detail/pose2_d__traits.hpp"
// Member 'size'
#include "pallet_insight_msgs/msg/detail/vector2__traits.hpp"

namespace pallet_insight_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BoundingBox2D & msg,
  std::ostream & out)
{
  out << "{";
  // member: center
  {
    out << "center: ";
    to_flow_style_yaml(msg.center, out);
    out << ", ";
  }

  // member: size
  {
    out << "size: ";
    to_flow_style_yaml(msg.size, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BoundingBox2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center:\n";
    to_block_style_yaml(msg.center, out, indentation + 2);
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size:\n";
    to_block_style_yaml(msg.size, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BoundingBox2D & msg, bool use_flow_style = false)
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
  const pallet_insight_msgs::msg::BoundingBox2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  pallet_insight_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pallet_insight_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pallet_insight_msgs::msg::BoundingBox2D & msg)
{
  return pallet_insight_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pallet_insight_msgs::msg::BoundingBox2D>()
{
  return "pallet_insight_msgs::msg::BoundingBox2D";
}

template<>
inline const char * name<pallet_insight_msgs::msg::BoundingBox2D>()
{
  return "pallet_insight_msgs/msg/BoundingBox2D";
}

template<>
struct has_fixed_size<pallet_insight_msgs::msg::BoundingBox2D>
  : std::integral_constant<bool, has_fixed_size<pallet_insight_msgs::msg::Pose2D>::value && has_fixed_size<pallet_insight_msgs::msg::Vector2>::value> {};

template<>
struct has_bounded_size<pallet_insight_msgs::msg::BoundingBox2D>
  : std::integral_constant<bool, has_bounded_size<pallet_insight_msgs::msg::Pose2D>::value && has_bounded_size<pallet_insight_msgs::msg::Vector2>::value> {};

template<>
struct is_message<pallet_insight_msgs::msg::BoundingBox2D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PALLET_INSIGHT_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__TRAITS_HPP_
