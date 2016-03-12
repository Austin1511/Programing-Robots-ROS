// Generated by gencpp from file nasa_r2_common_msgs/ResetTableSceneResponse.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_RESETTABLESCENERESPONSE_H
#define NASA_R2_COMMON_MSGS_MESSAGE_RESETTABLESCENERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace nasa_r2_common_msgs
{
template <class ContainerAllocator>
struct ResetTableSceneResponse_
{
  typedef ResetTableSceneResponse_<ContainerAllocator> Type;

  ResetTableSceneResponse_()
    : result(false)  {
    }
  ResetTableSceneResponse_(const ContainerAllocator& _alloc)
    : result(false)  {
    }



   typedef uint8_t _result_type;
  _result_type result;




  typedef boost::shared_ptr< ::nasa_r2_common_msgs::ResetTableSceneResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::ResetTableSceneResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ResetTableSceneResponse_

typedef ::nasa_r2_common_msgs::ResetTableSceneResponse_<std::allocator<void> > ResetTableSceneResponse;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::ResetTableSceneResponse > ResetTableSceneResponsePtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::ResetTableSceneResponse const> ResetTableSceneResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::ResetTableSceneResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::ResetTableSceneResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nasa_r2_common_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'nasa_r2_common_msgs': ['/home/mkhuthir/learnROS/src/chessbot/src/nasa_r2_common/nasa_r2_common_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'visualization_msgs': ['/opt/ros/indigo/share/visualization_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::ResetTableSceneResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::ResetTableSceneResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::ResetTableSceneResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::ResetTableSceneResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::ResetTableSceneResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::ResetTableSceneResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::ResetTableSceneResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eb13ac1f1354ccecb7941ee8fa2192e8";
  }

  static const char* value(const ::nasa_r2_common_msgs::ResetTableSceneResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeb13ac1f1354ccecULL;
  static const uint64_t static_value2 = 0xb7941ee8fa2192e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::ResetTableSceneResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/ResetTableSceneResponse";
  }

  static const char* value(const ::nasa_r2_common_msgs::ResetTableSceneResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::ResetTableSceneResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool result\n\
\n\
";
  }

  static const char* value(const ::nasa_r2_common_msgs::ResetTableSceneResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::ResetTableSceneResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct ResetTableSceneResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::ResetTableSceneResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::ResetTableSceneResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_RESETTABLESCENERESPONSE_H
