// Generated by gencpp from file dnb_msgs/SetInt32Response.msg
// DO NOT EDIT!


#ifndef DNB_MSGS_MESSAGE_SETINT32RESPONSE_H
#define DNB_MSGS_MESSAGE_SETINT32RESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dnb_msgs
{
template <class ContainerAllocator>
struct SetInt32Response_
{
  typedef SetInt32Response_<ContainerAllocator> Type;

  SetInt32Response_()
    : success(false)
    , message()  {
    }
  SetInt32Response_(const ContainerAllocator& _alloc)
    : success(false)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _message_type;
  _message_type message;





  typedef boost::shared_ptr< ::dnb_msgs::SetInt32Response_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dnb_msgs::SetInt32Response_<ContainerAllocator> const> ConstPtr;

}; // struct SetInt32Response_

typedef ::dnb_msgs::SetInt32Response_<std::allocator<void> > SetInt32Response;

typedef boost::shared_ptr< ::dnb_msgs::SetInt32Response > SetInt32ResponsePtr;
typedef boost::shared_ptr< ::dnb_msgs::SetInt32Response const> SetInt32ResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dnb_msgs::SetInt32Response_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dnb_msgs::SetInt32Response_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dnb_msgs::SetInt32Response_<ContainerAllocator1> & lhs, const ::dnb_msgs::SetInt32Response_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success &&
    lhs.message == rhs.message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dnb_msgs::SetInt32Response_<ContainerAllocator1> & lhs, const ::dnb_msgs::SetInt32Response_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dnb_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dnb_msgs::SetInt32Response_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dnb_msgs::SetInt32Response_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dnb_msgs::SetInt32Response_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dnb_msgs::SetInt32Response_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dnb_msgs::SetInt32Response_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dnb_msgs::SetInt32Response_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dnb_msgs::SetInt32Response_<ContainerAllocator> >
{
  static const char* value()
  {
    return "937c9679a518e3a18d831e57125ea522";
  }

  static const char* value(const ::dnb_msgs::SetInt32Response_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x937c9679a518e3a1ULL;
  static const uint64_t static_value2 = 0x8d831e57125ea522ULL;
};

template<class ContainerAllocator>
struct DataType< ::dnb_msgs::SetInt32Response_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dnb_msgs/SetInt32Response";
  }

  static const char* value(const ::dnb_msgs::SetInt32Response_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dnb_msgs::SetInt32Response_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"string message\n"
;
  }

  static const char* value(const ::dnb_msgs::SetInt32Response_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dnb_msgs::SetInt32Response_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetInt32Response_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dnb_msgs::SetInt32Response_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dnb_msgs::SetInt32Response_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DNB_MSGS_MESSAGE_SETINT32RESPONSE_H
