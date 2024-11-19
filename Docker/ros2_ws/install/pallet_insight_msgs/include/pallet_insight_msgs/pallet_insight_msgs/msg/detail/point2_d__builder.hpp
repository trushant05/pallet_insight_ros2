// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pallet_insight_msgs:msg/Point2D.idl
// generated code does not contain a copyright notice

#ifndef PALLET_INSIGHT_MSGS__MSG__DETAIL__POINT2_D__BUILDER_HPP_
#define PALLET_INSIGHT_MSGS__MSG__DETAIL__POINT2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pallet_insight_msgs/msg/detail/point2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pallet_insight_msgs
{

namespace msg
{

namespace builder
{

class Init_Point2D_y
{
public:
  explicit Init_Point2D_y(::pallet_insight_msgs::msg::Point2D & msg)
  : msg_(msg)
  {}
  ::pallet_insight_msgs::msg::Point2D y(::pallet_insight_msgs::msg::Point2D::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pallet_insight_msgs::msg::Point2D msg_;
};

class Init_Point2D_x
{
public:
  Init_Point2D_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Point2D_y x(::pallet_insight_msgs::msg::Point2D::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Point2D_y(msg_);
  }

private:
  ::pallet_insight_msgs::msg::Point2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pallet_insight_msgs::msg::Point2D>()
{
  return pallet_insight_msgs::msg::builder::Init_Point2D_x();
}

}  // namespace pallet_insight_msgs

#endif  // PALLET_INSIGHT_MSGS__MSG__DETAIL__POINT2_D__BUILDER_HPP_
