// Generated by gencpp from file pose_graph_msgs/PoseGraphNode.msg
// DO NOT EDIT!


#ifndef POSE_GRAPH_MSGS_MESSAGE_POSEGRAPHNODE_H
#define POSE_GRAPH_MSGS_MESSAGE_POSEGRAPHNODE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>

namespace pose_graph_msgs
{
template <class ContainerAllocator>
struct PoseGraphNode_
{
  typedef PoseGraphNode_<ContainerAllocator> Type;

  PoseGraphNode_()
    : header()
    , key(0)
    , pose()  {
    }
  PoseGraphNode_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , key(0)
    , pose(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint64_t _key_type;
  _key_type key;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;





  typedef boost::shared_ptr< ::pose_graph_msgs::PoseGraphNode_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pose_graph_msgs::PoseGraphNode_<ContainerAllocator> const> ConstPtr;

}; // struct PoseGraphNode_

typedef ::pose_graph_msgs::PoseGraphNode_<std::allocator<void> > PoseGraphNode;

typedef boost::shared_ptr< ::pose_graph_msgs::PoseGraphNode > PoseGraphNodePtr;
typedef boost::shared_ptr< ::pose_graph_msgs::PoseGraphNode const> PoseGraphNodeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pose_graph_msgs::PoseGraphNode_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pose_graph_msgs::PoseGraphNode_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pose_graph_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'pose_graph_msgs': ['/home/rish/blam/internal/src/pose_graph_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pose_graph_msgs::PoseGraphNode_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pose_graph_msgs::PoseGraphNode_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pose_graph_msgs::PoseGraphNode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pose_graph_msgs::PoseGraphNode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pose_graph_msgs::PoseGraphNode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pose_graph_msgs::PoseGraphNode_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pose_graph_msgs::PoseGraphNode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d9d31685ad1168ea79c583d44dd3acd2";
  }

  static const char* value(const ::pose_graph_msgs::PoseGraphNode_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd9d31685ad1168eaULL;
  static const uint64_t static_value2 = 0x79c583d44dd3acd2ULL;
};

template<class ContainerAllocator>
struct DataType< ::pose_graph_msgs::PoseGraphNode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pose_graph_msgs/PoseGraphNode";
  }

  static const char* value(const ::pose_graph_msgs::PoseGraphNode_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pose_graph_msgs::PoseGraphNode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
# Every pose has a unique key.\n\
uint64 key\n\
geometry_msgs/Pose pose\n\
\n\
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
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::pose_graph_msgs::PoseGraphNode_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pose_graph_msgs::PoseGraphNode_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.key);
      stream.next(m.pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PoseGraphNode_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pose_graph_msgs::PoseGraphNode_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pose_graph_msgs::PoseGraphNode_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "key: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.key);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // POSE_GRAPH_MSGS_MESSAGE_POSEGRAPHNODE_H
