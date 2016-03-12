// Generated by gencpp from file nasa_r2_common_msgs/SystemStatus.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_SYSTEMSTATUS_H
#define NASA_R2_COMMON_MSGS_MESSAGE_SYSTEMSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <nasa_r2_common_msgs/SystemCore.h>

namespace nasa_r2_common_msgs
{
template <class ContainerAllocator>
struct SystemStatus_
{
  typedef SystemStatus_<ContainerAllocator> Type;

  SystemStatus_()
    : header()
    , name()
    , coreStats()
    , coreTemps()
    , oneMinuteLoad(0.0)
    , fiveMinuteLoad(0.0)
    , fifteenMinuteLoad(0.0)
    , uptime()
    , totalMemory(0)
    , usedMemory(0)
    , freeMemory(0)  {
    }
  SystemStatus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , name(_alloc)
    , coreStats(_alloc)
    , coreTemps(_alloc)
    , oneMinuteLoad(0.0)
    , fiveMinuteLoad(0.0)
    , fifteenMinuteLoad(0.0)
    , uptime()
    , totalMemory(0)
    , usedMemory(0)
    , freeMemory(0)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::vector< ::nasa_r2_common_msgs::SystemCore_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::nasa_r2_common_msgs::SystemCore_<ContainerAllocator> >::other >  _coreStats_type;
  _coreStats_type coreStats;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _coreTemps_type;
  _coreTemps_type coreTemps;

   typedef double _oneMinuteLoad_type;
  _oneMinuteLoad_type oneMinuteLoad;

   typedef double _fiveMinuteLoad_type;
  _fiveMinuteLoad_type fiveMinuteLoad;

   typedef double _fifteenMinuteLoad_type;
  _fifteenMinuteLoad_type fifteenMinuteLoad;

   typedef ros::Duration _uptime_type;
  _uptime_type uptime;

   typedef uint32_t _totalMemory_type;
  _totalMemory_type totalMemory;

   typedef uint32_t _usedMemory_type;
  _usedMemory_type usedMemory;

   typedef uint32_t _freeMemory_type;
  _freeMemory_type freeMemory;




  typedef boost::shared_ptr< ::nasa_r2_common_msgs::SystemStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::SystemStatus_<ContainerAllocator> const> ConstPtr;

}; // struct SystemStatus_

typedef ::nasa_r2_common_msgs::SystemStatus_<std::allocator<void> > SystemStatus;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::SystemStatus > SystemStatusPtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::SystemStatus const> SystemStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::SystemStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::SystemStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nasa_r2_common_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'nasa_r2_common_msgs': ['/home/mkhuthir/learnROS/src/chessbot/src/nasa_r2_common/nasa_r2_common_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'visualization_msgs': ['/opt/ros/indigo/share/visualization_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::SystemStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::SystemStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::SystemStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::SystemStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::SystemStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::SystemStatus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::SystemStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4896af13a56b5d046a8dac4145b244f0";
  }

  static const char* value(const ::nasa_r2_common_msgs::SystemStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4896af13a56b5d04ULL;
  static const uint64_t static_value2 = 0x6a8dac4145b244f0ULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::SystemStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/SystemStatus";
  }

  static const char* value(const ::nasa_r2_common_msgs::SystemStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::SystemStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header              header\n\
string              name\n\
SystemCore[]        coreStats\n\
float64[]           coreTemps\n\
float64             oneMinuteLoad\n\
float64             fiveMinuteLoad\n\
float64             fifteenMinuteLoad\n\
duration            uptime\n\
uint32              totalMemory\n\
uint32              usedMemory\n\
uint32              freeMemory\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: nasa_r2_common_msgs/SystemCore\n\
string       id\n\
float64      speed\n\
float64     load\n\
bool        failure\n\
";
  }

  static const char* value(const ::nasa_r2_common_msgs::SystemStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::SystemStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.name);
      stream.next(m.coreStats);
      stream.next(m.coreTemps);
      stream.next(m.oneMinuteLoad);
      stream.next(m.fiveMinuteLoad);
      stream.next(m.fifteenMinuteLoad);
      stream.next(m.uptime);
      stream.next(m.totalMemory);
      stream.next(m.usedMemory);
      stream.next(m.freeMemory);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct SystemStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::SystemStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::SystemStatus_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "coreStats[]" << std::endl;
    for (size_t i = 0; i < v.coreStats.size(); ++i)
    {
      s << indent << "  coreStats[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::nasa_r2_common_msgs::SystemCore_<ContainerAllocator> >::stream(s, indent + "    ", v.coreStats[i]);
    }
    s << indent << "coreTemps[]" << std::endl;
    for (size_t i = 0; i < v.coreTemps.size(); ++i)
    {
      s << indent << "  coreTemps[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.coreTemps[i]);
    }
    s << indent << "oneMinuteLoad: ";
    Printer<double>::stream(s, indent + "  ", v.oneMinuteLoad);
    s << indent << "fiveMinuteLoad: ";
    Printer<double>::stream(s, indent + "  ", v.fiveMinuteLoad);
    s << indent << "fifteenMinuteLoad: ";
    Printer<double>::stream(s, indent + "  ", v.fifteenMinuteLoad);
    s << indent << "uptime: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.uptime);
    s << indent << "totalMemory: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.totalMemory);
    s << indent << "usedMemory: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.usedMemory);
    s << indent << "freeMemory: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.freeMemory);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_SYSTEMSTATUS_H
