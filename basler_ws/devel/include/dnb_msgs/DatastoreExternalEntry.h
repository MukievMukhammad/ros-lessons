// Generated by gencpp from file dnb_msgs/DatastoreExternalEntry.msg
// DO NOT EDIT!


#ifndef DNB_MSGS_MESSAGE_DATASTOREEXTERNALENTRY_H
#define DNB_MSGS_MESSAGE_DATASTOREEXTERNALENTRY_H


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
struct DatastoreExternalEntry_
{
  typedef DatastoreExternalEntry_<ContainerAllocator> Type;

  DatastoreExternalEntry_()
    : source()
    , source_id()
    , value()
    , type()
    , display_title()
    , editable(false)  {
    }
  DatastoreExternalEntry_(const ContainerAllocator& _alloc)
    : source(_alloc)
    , source_id(_alloc)
    , value(_alloc)
    , type(_alloc)
    , display_title(_alloc)
    , editable(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _source_type;
  _source_type source;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _source_id_type;
  _source_id_type source_id;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _value_type;
  _value_type value;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _type_type;
  _type_type type;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _display_title_type;
  _display_title_type display_title;

   typedef uint8_t _editable_type;
  _editable_type editable;





  typedef boost::shared_ptr< ::dnb_msgs::DatastoreExternalEntry_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dnb_msgs::DatastoreExternalEntry_<ContainerAllocator> const> ConstPtr;

}; // struct DatastoreExternalEntry_

typedef ::dnb_msgs::DatastoreExternalEntry_<std::allocator<void> > DatastoreExternalEntry;

typedef boost::shared_ptr< ::dnb_msgs::DatastoreExternalEntry > DatastoreExternalEntryPtr;
typedef boost::shared_ptr< ::dnb_msgs::DatastoreExternalEntry const> DatastoreExternalEntryConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dnb_msgs::DatastoreExternalEntry_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dnb_msgs::DatastoreExternalEntry_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dnb_msgs::DatastoreExternalEntry_<ContainerAllocator1> & lhs, const ::dnb_msgs::DatastoreExternalEntry_<ContainerAllocator2> & rhs)
{
  return lhs.source == rhs.source &&
    lhs.source_id == rhs.source_id &&
    lhs.value == rhs.value &&
    lhs.type == rhs.type &&
    lhs.display_title == rhs.display_title &&
    lhs.editable == rhs.editable;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dnb_msgs::DatastoreExternalEntry_<ContainerAllocator1> & lhs, const ::dnb_msgs::DatastoreExternalEntry_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dnb_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dnb_msgs::DatastoreExternalEntry_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dnb_msgs::DatastoreExternalEntry_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dnb_msgs::DatastoreExternalEntry_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dnb_msgs::DatastoreExternalEntry_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dnb_msgs::DatastoreExternalEntry_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dnb_msgs::DatastoreExternalEntry_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dnb_msgs::DatastoreExternalEntry_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c5511fa9acf57fd3f2c6cc80e60bd29f";
  }

  static const char* value(const ::dnb_msgs::DatastoreExternalEntry_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc5511fa9acf57fd3ULL;
  static const uint64_t static_value2 = 0xf2c6cc80e60bd29fULL;
};

template<class ContainerAllocator>
struct DataType< ::dnb_msgs::DatastoreExternalEntry_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dnb_msgs/DatastoreExternalEntry";
  }

  static const char* value(const ::dnb_msgs::DatastoreExternalEntry_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dnb_msgs::DatastoreExternalEntry_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string source\n"
"string source_id\n"
"string value\n"
"string type\n"
"string display_title\n"
"bool editable\n"
;
  }

  static const char* value(const ::dnb_msgs::DatastoreExternalEntry_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dnb_msgs::DatastoreExternalEntry_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.source);
      stream.next(m.source_id);
      stream.next(m.value);
      stream.next(m.type);
      stream.next(m.display_title);
      stream.next(m.editable);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DatastoreExternalEntry_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dnb_msgs::DatastoreExternalEntry_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dnb_msgs::DatastoreExternalEntry_<ContainerAllocator>& v)
  {
    s << indent << "source: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.source);
    s << indent << "source_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.source_id);
    s << indent << "value: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.value);
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.type);
    s << indent << "display_title: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.display_title);
    s << indent << "editable: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.editable);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DNB_MSGS_MESSAGE_DATASTOREEXTERNALENTRY_H