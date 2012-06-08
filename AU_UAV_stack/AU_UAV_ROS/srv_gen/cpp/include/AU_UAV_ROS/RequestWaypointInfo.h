/* Auto-generated by genmsg_cpp for file /Users/Ryan/Dropbox/UAV/AU-UAV-ROS/AU_UAV_stack/AU_UAV_ROS/srv/RequestWaypointInfo.srv */
#ifndef AU_UAV_ROS_SERVICE_REQUESTWAYPOINTINFO_H
#define AU_UAV_ROS_SERVICE_REQUESTWAYPOINTINFO_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace AU_UAV_ROS
{
template <class ContainerAllocator>
struct RequestWaypointInfoRequest_ {
  typedef RequestWaypointInfoRequest_<ContainerAllocator> Type;

  RequestWaypointInfoRequest_()
  : planeID(0)
  , isAvoidanceWaypoint(false)
  , positionInQueue(0)
  {
  }

  RequestWaypointInfoRequest_(const ContainerAllocator& _alloc)
  : planeID(0)
  , isAvoidanceWaypoint(false)
  , positionInQueue(0)
  {
  }

  typedef int16_t _planeID_type;
  int16_t planeID;

  typedef uint8_t _isAvoidanceWaypoint_type;
  uint8_t isAvoidanceWaypoint;

  typedef int16_t _positionInQueue_type;
  int16_t positionInQueue;


private:
  static const char* __s_getDataType_() { return "AU_UAV_ROS/RequestWaypointInfoRequest"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "2e653a234de35bdf6da6afeeb9fc6e66"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "db9e3801b1da39b7fbc4397b931e6587"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "int16 planeID\n\
bool isAvoidanceWaypoint\n\
int16 positionInQueue\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, planeID);
    ros::serialization::serialize(stream, isAvoidanceWaypoint);
    ros::serialization::serialize(stream, positionInQueue);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, planeID);
    ros::serialization::deserialize(stream, isAvoidanceWaypoint);
    ros::serialization::deserialize(stream, positionInQueue);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(planeID);
    size += ros::serialization::serializationLength(isAvoidanceWaypoint);
    size += ros::serialization::serializationLength(positionInQueue);
    return size;
  }

  typedef boost::shared_ptr< ::AU_UAV_ROS::RequestWaypointInfoRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::AU_UAV_ROS::RequestWaypointInfoRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct RequestWaypointInfoRequest
typedef  ::AU_UAV_ROS::RequestWaypointInfoRequest_<std::allocator<void> > RequestWaypointInfoRequest;

typedef boost::shared_ptr< ::AU_UAV_ROS::RequestWaypointInfoRequest> RequestWaypointInfoRequestPtr;
typedef boost::shared_ptr< ::AU_UAV_ROS::RequestWaypointInfoRequest const> RequestWaypointInfoRequestConstPtr;


template <class ContainerAllocator>
struct RequestWaypointInfoResponse_ {
  typedef RequestWaypointInfoResponse_<ContainerAllocator> Type;

  RequestWaypointInfoResponse_()
  : error()
  , latitude(0.0)
  , longitude(0.0)
  , altitude(0.0)
  {
  }

  RequestWaypointInfoResponse_(const ContainerAllocator& _alloc)
  : error(_alloc)
  , latitude(0.0)
  , longitude(0.0)
  , altitude(0.0)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _error_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  error;

  typedef double _latitude_type;
  double latitude;

  typedef double _longitude_type;
  double longitude;

  typedef double _altitude_type;
  double altitude;


private:
  static const char* __s_getDataType_() { return "AU_UAV_ROS/RequestWaypointInfoResponse"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "1a61f6fe0ff5166e7f6ee46d444ffb8e"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "db9e3801b1da39b7fbc4397b931e6587"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "string error\n\
float64 latitude\n\
float64 longitude\n\
float64 altitude\n\
\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, error);
    ros::serialization::serialize(stream, latitude);
    ros::serialization::serialize(stream, longitude);
    ros::serialization::serialize(stream, altitude);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, error);
    ros::serialization::deserialize(stream, latitude);
    ros::serialization::deserialize(stream, longitude);
    ros::serialization::deserialize(stream, altitude);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(error);
    size += ros::serialization::serializationLength(latitude);
    size += ros::serialization::serializationLength(longitude);
    size += ros::serialization::serializationLength(altitude);
    return size;
  }

  typedef boost::shared_ptr< ::AU_UAV_ROS::RequestWaypointInfoResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::AU_UAV_ROS::RequestWaypointInfoResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct RequestWaypointInfoResponse
typedef  ::AU_UAV_ROS::RequestWaypointInfoResponse_<std::allocator<void> > RequestWaypointInfoResponse;

typedef boost::shared_ptr< ::AU_UAV_ROS::RequestWaypointInfoResponse> RequestWaypointInfoResponsePtr;
typedef boost::shared_ptr< ::AU_UAV_ROS::RequestWaypointInfoResponse const> RequestWaypointInfoResponseConstPtr;

struct RequestWaypointInfo
{

typedef RequestWaypointInfoRequest Request;
typedef RequestWaypointInfoResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct RequestWaypointInfo
} // namespace AU_UAV_ROS

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::AU_UAV_ROS::RequestWaypointInfoRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::AU_UAV_ROS::RequestWaypointInfoRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::AU_UAV_ROS::RequestWaypointInfoRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "2e653a234de35bdf6da6afeeb9fc6e66";
  }

  static const char* value(const  ::AU_UAV_ROS::RequestWaypointInfoRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x2e653a234de35bdfULL;
  static const uint64_t static_value2 = 0x6da6afeeb9fc6e66ULL;
};

template<class ContainerAllocator>
struct DataType< ::AU_UAV_ROS::RequestWaypointInfoRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "AU_UAV_ROS/RequestWaypointInfoRequest";
  }

  static const char* value(const  ::AU_UAV_ROS::RequestWaypointInfoRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::AU_UAV_ROS::RequestWaypointInfoRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int16 planeID\n\
bool isAvoidanceWaypoint\n\
int16 positionInQueue\n\
\n\
";
  }

  static const char* value(const  ::AU_UAV_ROS::RequestWaypointInfoRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::AU_UAV_ROS::RequestWaypointInfoRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::AU_UAV_ROS::RequestWaypointInfoResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::AU_UAV_ROS::RequestWaypointInfoResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::AU_UAV_ROS::RequestWaypointInfoResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "1a61f6fe0ff5166e7f6ee46d444ffb8e";
  }

  static const char* value(const  ::AU_UAV_ROS::RequestWaypointInfoResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x1a61f6fe0ff5166eULL;
  static const uint64_t static_value2 = 0x7f6ee46d444ffb8eULL;
};

template<class ContainerAllocator>
struct DataType< ::AU_UAV_ROS::RequestWaypointInfoResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "AU_UAV_ROS/RequestWaypointInfoResponse";
  }

  static const char* value(const  ::AU_UAV_ROS::RequestWaypointInfoResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::AU_UAV_ROS::RequestWaypointInfoResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string error\n\
float64 latitude\n\
float64 longitude\n\
float64 altitude\n\
\n\
\n\
";
  }

  static const char* value(const  ::AU_UAV_ROS::RequestWaypointInfoResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::AU_UAV_ROS::RequestWaypointInfoRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.planeID);
    stream.next(m.isAvoidanceWaypoint);
    stream.next(m.positionInQueue);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct RequestWaypointInfoRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::AU_UAV_ROS::RequestWaypointInfoResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.error);
    stream.next(m.latitude);
    stream.next(m.longitude);
    stream.next(m.altitude);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct RequestWaypointInfoResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<AU_UAV_ROS::RequestWaypointInfo> {
  static const char* value() 
  {
    return "db9e3801b1da39b7fbc4397b931e6587";
  }

  static const char* value(const AU_UAV_ROS::RequestWaypointInfo&) { return value(); } 
};

template<>
struct DataType<AU_UAV_ROS::RequestWaypointInfo> {
  static const char* value() 
  {
    return "AU_UAV_ROS/RequestWaypointInfo";
  }

  static const char* value(const AU_UAV_ROS::RequestWaypointInfo&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<AU_UAV_ROS::RequestWaypointInfoRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "db9e3801b1da39b7fbc4397b931e6587";
  }

  static const char* value(const AU_UAV_ROS::RequestWaypointInfoRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<AU_UAV_ROS::RequestWaypointInfoRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "AU_UAV_ROS/RequestWaypointInfo";
  }

  static const char* value(const AU_UAV_ROS::RequestWaypointInfoRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<AU_UAV_ROS::RequestWaypointInfoResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "db9e3801b1da39b7fbc4397b931e6587";
  }

  static const char* value(const AU_UAV_ROS::RequestWaypointInfoResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<AU_UAV_ROS::RequestWaypointInfoResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "AU_UAV_ROS/RequestWaypointInfo";
  }

  static const char* value(const AU_UAV_ROS::RequestWaypointInfoResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // AU_UAV_ROS_SERVICE_REQUESTWAYPOINTINFO_H
