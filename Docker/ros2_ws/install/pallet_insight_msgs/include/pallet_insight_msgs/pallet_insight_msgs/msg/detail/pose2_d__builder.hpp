// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pallet_insight_msgs:msg/Pose2D.idl
// generated code does not contain a copyright notice

#ifndef PALLET_INSIGHT_MSGS__MSG__DETAIL__POSE2_D__BUILDER_HPP_
#define PALLET_INSIGHT_MSGS__MSG__DETAIL__POSE2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pallet_insight_msgs/msg/detail/pose2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pallet_insight_msgs
{

namespace msg
{

namespace builder
{

class Init_Pose2D_theta
{
public:
  explicit Init_Pose2D_theta(::pallet_insight_msgs::msg::Pose2D & msg)
  : msg_(msg)
  {}
  ::pallet_insight_msgs::msg::Pose2D theta(::pallet_insight_msgs::msg::Pose2D::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pallet_insight_msgs::msg::Pose2D msg_;
};

class Init_Pose2D_position
{
public:
  Init_Pose2D_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pose2D_theta position(::pallet_insight_msgs::msg::Pose2D::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Pose2D_theta(msg_);
  }

private:
  ::pallet_insight_msgs::msg::Pose2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pallet_insight_msgs::msg::Pose2D>()
{
  return pallet_insight_msgs::msg::builder::Init_Pose2D_position();
}

}  // namespace pallet_insight_msgs

#endif  // PALLET_INSIGHT_MSGS__MSG__DETAIL__POSE2_D__BUILDER_HPP_
