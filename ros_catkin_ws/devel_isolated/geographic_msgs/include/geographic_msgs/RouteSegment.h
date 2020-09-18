// Generated by gencpp from file geographic_msgs/RouteSegment.msg
// DO NOT EDIT!


#ifndef GEOGRAPHIC_MSGS_MESSAGE_ROUTESEGMENT_H
#define GEOGRAPHIC_MSGS_MESSAGE_ROUTESEGMENT_H


#include <string>
#include <vector>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <uuid_msgs/UniqueID.h>
#include <uuid_msgs/UniqueID.h>
#include <uuid_msgs/UniqueID.h>
#include <geographic_msgs/KeyValue.h>

namespace geographic_msgs
{
template <class ContainerAllocator>
struct RouteSegment_
{
  typedef RouteSegment_<ContainerAllocator> Type;

  RouteSegment_()
    : id()
    , start()
    , end()
    , props()  {
    }
  RouteSegment_(const ContainerAllocator& _alloc)
    : id(_alloc)
    , start(_alloc)
    , end(_alloc)
    , props(_alloc)  {
  (void)_alloc;
    }



   typedef  ::uuid_msgs::UniqueID_<ContainerAllocator>  _id_type;
  _id_type id;

   typedef  ::uuid_msgs::UniqueID_<ContainerAllocator>  _start_type;
  _start_type start;

   typedef  ::uuid_msgs::UniqueID_<ContainerAllocator>  _end_type;
  _end_type end;

   typedef std::vector< ::geographic_msgs::KeyValue_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geographic_msgs::KeyValue_<ContainerAllocator> >::other >  _props_type;
  _props_type props;





  typedef boost::shared_ptr< ::geographic_msgs::RouteSegment_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::geographic_msgs::RouteSegment_<ContainerAllocator> const> ConstPtr;

}; // struct RouteSegment_

typedef ::geographic_msgs::RouteSegment_<std::allocator<void> > RouteSegment;

typedef boost::shared_ptr< ::geographic_msgs::RouteSegment > RouteSegmentPtr;
typedef boost::shared_ptr< ::geographic_msgs::RouteSegment const> RouteSegmentConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::geographic_msgs::RouteSegment_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::geographic_msgs::RouteSegment_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::geographic_msgs::RouteSegment_<ContainerAllocator1> & lhs, const ::geographic_msgs::RouteSegment_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.start == rhs.start &&
    lhs.end == rhs.end &&
    lhs.props == rhs.props;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::geographic_msgs::RouteSegment_<ContainerAllocator1> & lhs, const ::geographic_msgs::RouteSegment_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace geographic_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::geographic_msgs::RouteSegment_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::geographic_msgs::RouteSegment_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::geographic_msgs::RouteSegment_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::geographic_msgs::RouteSegment_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::geographic_msgs::RouteSegment_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::geographic_msgs::RouteSegment_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::geographic_msgs::RouteSegment_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8583d1e2ddf1891c3934a5d2ed9a799c";
  }

  static const char* value(const ::geographic_msgs::RouteSegment_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8583d1e2ddf1891cULL;
  static const uint64_t static_value2 = 0x3934a5d2ed9a799cULL;
};

template<class ContainerAllocator>
struct DataType< ::geographic_msgs::RouteSegment_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geographic_msgs/RouteSegment";
  }

  static const char* value(const ::geographic_msgs::RouteSegment_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::geographic_msgs::RouteSegment_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Route network segment.\n"
"#\n"
"# This is one directed edge of a RouteNetwork graph. It represents a\n"
"# known path from one way point to another.  If the path is two-way,\n"
"# there will be another RouteSegment with \"start\" and \"end\" reversed.\n"
"\n"
"uuid_msgs/UniqueID id           # Unique identifier for this segment\n"
"\n"
"uuid_msgs/UniqueID start        # beginning way point of segment\n"
"uuid_msgs/UniqueID end          # ending way point of segment\n"
"\n"
"KeyValue[] props                # segment properties\n"
"\n"
"================================================================================\n"
"MSG: uuid_msgs/UniqueID\n"
"# A universally unique identifier (UUID).\n"
"#\n"
"#  http://en.wikipedia.org/wiki/Universally_unique_identifier\n"
"#  http://tools.ietf.org/html/rfc4122.html\n"
"\n"
"uint8[16] uuid\n"
"\n"
"================================================================================\n"
"MSG: geographic_msgs/KeyValue\n"
"# Geographic map tag (key, value) pair\n"
"#\n"
"# This is equivalent to diagnostic_msgs/KeyValue, repeated here to\n"
"# avoid introducing a trivial stack dependency.\n"
"\n"
"string key                     # tag label\n"
"string value                   # corresponding value\n"
;
  }

  static const char* value(const ::geographic_msgs::RouteSegment_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::geographic_msgs::RouteSegment_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.start);
      stream.next(m.end);
      stream.next(m.props);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RouteSegment_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::geographic_msgs::RouteSegment_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::geographic_msgs::RouteSegment_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    s << std::endl;
    Printer< ::uuid_msgs::UniqueID_<ContainerAllocator> >::stream(s, indent + "  ", v.id);
    s << indent << "start: ";
    s << std::endl;
    Printer< ::uuid_msgs::UniqueID_<ContainerAllocator> >::stream(s, indent + "  ", v.start);
    s << indent << "end: ";
    s << std::endl;
    Printer< ::uuid_msgs::UniqueID_<ContainerAllocator> >::stream(s, indent + "  ", v.end);
    s << indent << "props[]" << std::endl;
    for (size_t i = 0; i < v.props.size(); ++i)
    {
      s << indent << "  props[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geographic_msgs::KeyValue_<ContainerAllocator> >::stream(s, indent + "    ", v.props[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // GEOGRAPHIC_MSGS_MESSAGE_ROUTESEGMENT_H