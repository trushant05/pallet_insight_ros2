// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pallet_insight_msgs:msg/DetectionArray.idl
// generated code does not contain a copyright notice

#ifndef PALLET_INSIGHT_MSGS__MSG__DETAIL__DETECTION_ARRAY__TRAITS_HPP_
#define PALLET_INSIGHT_MSGS__MSG__DETAIL__DETECTION_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pallet_insight_msgs/msg/detail/detection_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'detections'
#include "pallet_insight_msgs/msg/detail/detection__traits.hpp"

namespace pallet_insight_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DetectionArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: detections
  {
    if (msg.detections.size() == 0) {
      out << "detections: []";
    } else {
      out << "detections: [";
      size_t pending_items = msg.detections.size();
      for (auto item : msg.detections) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectionArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: detections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.detections.size() == 0) {
      out << "detections: []\n";
    } else {
      out << "detections:\n";
      for (auto item : msg.detections) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectionArray & msg, bool use_flow_style = false)
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
  const pallet_insight_msgs::msg::DetectionArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  pallet_insight_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pallet_insight_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pallet_insight_msgs::msg::DetectionArray & msg)
{
  return pallet_insight_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pallet_insight_msgs::msg::DetectionArray>()
{
  return "pallet_insight_msgs::msg::DetectionArray";
}

template<>
inline const char * name<pallet_insight_msgs::msg::DetectionArray>()
{
  return "pallet_insight_msgs/msg/DetectionArray";
}

template<>
struct has_fixed_size<pallet_insight_msgs::msg::DetectionArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pallet_insight_msgs::msg::DetectionArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pallet_insight_msgs::msg::DetectionArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PALLET_INSIGHT_MSGS__MSG__DETAIL__DETECTION_ARRAY__TRAITS_HPP_
