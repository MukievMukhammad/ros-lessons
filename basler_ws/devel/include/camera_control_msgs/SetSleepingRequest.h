// Generated by gencpp from file camera_control_msgs/SetSleepingRequest.msg
// DO NOT EDIT!


#ifndef CAMERA_CONTROL_MSGS_MESSAGE_SETSLEEPINGREQUEST_H
#define CAMERA_CONTROL_MSGS_MESSAGE_SETSLEEPINGREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace camera_control_msgs
{
template <class ContainerAllocator>
struct SetSleepingRequest_
{
  typedef SetSleepingRequest_<ContainerAllocator> Type;

  SetSleepingRequest_()
    : set_sleeping(false)  {
    }
  SetSleepingRequest_(const ContainerAllocator& _alloc)
    : set_sleeping(false)  {
  (void)_alloc;
    }



   typedef uint8_t _set_sleeping_type;
  _set_sleeping_type set_sleeping;





  typedef boost::shared_ptr< ::camera_control_msgs::SetSleepingRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::camera_control_msgs::SetSleepingRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetSleepingRequest_

typedef ::camera_control_msgs::SetSleepingRequest_<std::allocator<void> > SetSleepingRequest;

typedef boost::shared_ptr< ::camera_control_msgs::SetSleepingRequest > SetSleepingRequestPtr;
typedef boost::shared_ptr< ::camera_control_msgs::SetSleepingRequest const> SetSleepingRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::camera_control_msgs::SetSleepingRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::camera_control_msgs::SetSleepingRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::camera_control_msgs::SetSleepingRequest_<ContainerAllocator1> & lhs, const ::camera_control_msgs::SetSleepingRequest_<ContainerAllocator2> & rhs)
{
  return lhs.set_sleeping == rhs.set_sleeping;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::camera_control_msgs::SetSleepingRequest_<ContainerAllocator1> & lhs, const ::camera_control_msgs::SetSleepingRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace camera_control_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::camera_control_msgs::SetSleepingRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::camera_control_msgs::SetSleepingRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::camera_control_msgs::SetSleepingRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::camera_control_msgs::SetSleepingRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::camera_control_msgs::SetSleepingRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::camera_control_msgs::SetSleepingRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::camera_control_msgs::SetSleepingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "58aad3b532b8c4776fd592aec6441836";
  }

  static const char* value(const ::camera_control_msgs::SetSleepingRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x58aad3b532b8c477ULL;
  static const uint64_t static_value2 = 0x6fd592aec6441836ULL;
};

template<class ContainerAllocator>
struct DataType< ::camera_control_msgs::SetSleepingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "camera_control_msgs/SetSleepingRequest";
  }

  static const char* value(const ::camera_control_msgs::SetSleepingRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::camera_control_msgs::SetSleepingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# If the camera runs in topic mode (continuously publishing images over the\n"
"# topics respecting the desired frame_rate) this service offers the posibillity\n"
"# to pause the image acquisition. To restart the grabbing, this service should\n"
"# be called again with set_sleeping set to false\n"
"bool set_sleeping\n"
;
  }

  static const char* value(const ::camera_control_msgs::SetSleepingRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::camera_control_msgs::SetSleepingRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.set_sleeping);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetSleepingRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::camera_control_msgs::SetSleepingRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::camera_control_msgs::SetSleepingRequest_<ContainerAllocator>& v)
  {
    s << indent << "set_sleeping: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.set_sleeping);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAMERA_CONTROL_MSGS_MESSAGE_SETSLEEPINGREQUEST_H
