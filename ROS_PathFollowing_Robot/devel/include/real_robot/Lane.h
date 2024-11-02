// Generated by gencpp from file real_robot/Lane.msg
// DO NOT EDIT!


#ifndef REAL_ROBOT_MESSAGE_LANE_H
#define REAL_ROBOT_MESSAGE_LANE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <real_robot/Waypoint.h>

namespace real_robot
{
template <class ContainerAllocator>
struct Lane_
{
  typedef Lane_<ContainerAllocator> Type;

  Lane_()
    : header()
    , waypoints()  {
    }
  Lane_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , waypoints(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::real_robot::Waypoint_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::real_robot::Waypoint_<ContainerAllocator> >> _waypoints_type;
  _waypoints_type waypoints;





  typedef boost::shared_ptr< ::real_robot::Lane_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::real_robot::Lane_<ContainerAllocator> const> ConstPtr;

}; // struct Lane_

typedef ::real_robot::Lane_<std::allocator<void> > Lane;

typedef boost::shared_ptr< ::real_robot::Lane > LanePtr;
typedef boost::shared_ptr< ::real_robot::Lane const> LaneConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::real_robot::Lane_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::real_robot::Lane_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::real_robot::Lane_<ContainerAllocator1> & lhs, const ::real_robot::Lane_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.waypoints == rhs.waypoints;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::real_robot::Lane_<ContainerAllocator1> & lhs, const ::real_robot::Lane_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace real_robot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::real_robot::Lane_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::real_robot::Lane_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::real_robot::Lane_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::real_robot::Lane_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::real_robot::Lane_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::real_robot::Lane_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::real_robot::Lane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d677da6803e261da968368ac6e143267";
  }

  static const char* value(const ::real_robot::Lane_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd677da6803e261daULL;
  static const uint64_t static_value2 = 0x968368ac6e143267ULL;
};

template<class ContainerAllocator>
struct DataType< ::real_robot::Lane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "real_robot/Lane";
  }

  static const char* value(const ::real_robot::Lane_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::real_robot::Lane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"Waypoint[] waypoints\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: real_robot/Waypoint\n"
"geometry_msgs/PoseStamped pose\n"
"geometry_msgs/TwistStamped twist\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/TwistStamped\n"
"# A twist with reference coordinate frame and timestamp\n"
"Header header\n"
"Twist twist\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Twist\n"
"# This expresses velocity in free space broken into its linear and angular parts.\n"
"Vector3  linear\n"
"Vector3  angular\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::real_robot::Lane_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::real_robot::Lane_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.waypoints);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Lane_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::real_robot::Lane_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::real_robot::Lane_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "waypoints[]" << std::endl;
    for (size_t i = 0; i < v.waypoints.size(); ++i)
    {
      s << indent << "  waypoints[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::real_robot::Waypoint_<ContainerAllocator> >::stream(s, indent + "    ", v.waypoints[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // REAL_ROBOT_MESSAGE_LANE_H
