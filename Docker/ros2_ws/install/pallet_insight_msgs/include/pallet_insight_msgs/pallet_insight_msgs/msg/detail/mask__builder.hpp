// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pallet_insight_msgs:msg/Mask.idl
// generated code does not contain a copyright notice

#ifndef PALLET_INSIGHT_MSGS__MSG__DETAIL__MASK__BUILDER_HPP_
#define PALLET_INSIGHT_MSGS__MSG__DETAIL__MASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pallet_insight_msgs/msg/detail/mask__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pallet_insight_msgs
{

namespace msg
{

namespace builder
{

class Init_Mask_data
{
public:
  explicit Init_Mask_data(::pallet_insight_msgs::msg::Mask & msg)
  : msg_(msg)
  {}
  ::pallet_insight_msgs::msg::Mask data(::pallet_insight_msgs::msg::Mask::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pallet_insight_msgs::msg::Mask msg_;
};

class Init_Mask_width
{
public:
  explicit Init_Mask_width(::pallet_insight_msgs::msg::Mask & msg)
  : msg_(msg)
  {}
  Init_Mask_data width(::pallet_insight_msgs::msg::Mask::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Mask_data(msg_);
  }

private:
  ::pallet_insight_msgs::msg::Mask msg_;
};

class Init_Mask_height
{
public:
  Init_Mask_height()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mask_width height(::pallet_insight_msgs::msg::Mask::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Mask_width(msg_);
  }

private:
  ::pallet_insight_msgs::msg::Mask msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pallet_insight_msgs::msg::Mask>()
{
  return pallet_insight_msgs::msg::builder::Init_Mask_height();
}

}  // namespace pallet_insight_msgs

#endif  // PALLET_INSIGHT_MSGS__MSG__DETAIL__MASK__BUILDER_HPP_
