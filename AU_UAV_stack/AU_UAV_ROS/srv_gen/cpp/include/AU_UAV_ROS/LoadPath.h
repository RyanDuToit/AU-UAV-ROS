/* Auto-generated by genmsg_cpp for file /Users/Ryan/Dropbox/UAV/AU-UAV-ROS/AU_UAV_stack/AU_UAV_ROS/srv/LoadPath.srv */
#ifndef AU_UAV_ROS_SERVICE_LOADPATH_H
#define AU_UAV_ROS_SERVICE_LOADPATH_H
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
struct LoadPathRequest_ {
  typedef LoadPathRequest_<ContainerAllocator> Type;

  LoadPathRequest_()
  : filename()
  , planeID(0)
  {
  }

  LoadPathRequest_(const ContainerAllocator& _alloc)
  : filename(_alloc)
  , planeID(0)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _filename_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  filename;

  typedef int16_t _planeID_type;
  int16_t planeID;


private:
  static const char* __s_getDataType_() { return "AU_UAV_ROS/LoadPathRequest"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "ea2c8a215c88af68545e8a3cd5543aa7"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "4061d08328adc7152ed27430e0829f81"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "string filename\n\
int16 planeID\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, filename);
    ros::serialization::serialize(stream, planeID);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, filename);
    ros::serialization::deserialize(stream, planeID);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(filename);
    size += ros::serialization::serializationLength(planeID);
    return size;
  }

  typedef boost::shared_ptr< ::AU_UAV_ROS::LoadPathRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::AU_UAV_ROS::LoadPathRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct LoadPathRequest
typedef  ::AU_UAV_ROS::LoadPathRequest_<std::allocator<void> > LoadPathRequest;

typedef boost::shared_ptr< ::AU_UAV_ROS::LoadPathRequest> LoadPathRequestPtr;
typedef boost::shared_ptr< ::AU_UAV_ROS::LoadPathRequest const> LoadPathRequestConstPtr;


template <class ContainerAllocator>
struct LoadPathResponse_ {
  typedef LoadPathResponse_<ContainerAllocator> Type;

  LoadPathResponse_()
  : error()
  {
  }

  LoadPathResponse_(const ContainerAllocator& _alloc)
  : error(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _error_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  error;


private:
  static const char* __s_getDataType_() { return "AU_UAV_ROS/LoadPathResponse"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "eca8b96616c32aacf1be8bbf14c70eba"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "4061d08328adc7152ed27430e0829f81"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "string error\n\
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
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, error);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(error);
    return size;
  }

  typedef boost::shared_ptr< ::AU_UAV_ROS::LoadPathResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::AU_UAV_ROS::LoadPathResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct LoadPathResponse
typedef  ::AU_UAV_ROS::LoadPathResponse_<std::allocator<void> > LoadPathResponse;

typedef boost::shared_ptr< ::AU_UAV_ROS::LoadPathResponse> LoadPathResponsePtr;
typedef boost::shared_ptr< ::AU_UAV_ROS::LoadPathResponse const> LoadPathResponseConstPtr;

struct LoadPath
{

typedef LoadPathRequest Request;
typedef LoadPathResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct LoadPath
} // namespace AU_UAV_ROS

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::AU_UAV_ROS::LoadPathRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::AU_UAV_ROS::LoadPathRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::AU_UAV_ROS::LoadPathRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ea2c8a215c88af68545e8a3cd5543aa7";
  }

  static const char* value(const  ::AU_UAV_ROS::LoadPathRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xea2c8a215c88af68ULL;
  static const uint64_t static_value2 = 0x545e8a3cd5543aa7ULL;
};

template<class ContainerAllocator>
struct DataType< ::AU_UAV_ROS::LoadPathRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "AU_UAV_ROS/LoadPathRequest";
  }

  static const char* value(const  ::AU_UAV_ROS::LoadPathRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::AU_UAV_ROS::LoadPathRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string filename\n\
int16 planeID\n\
\n\
";
  }

  static const char* value(const  ::AU_UAV_ROS::LoadPathRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::AU_UAV_ROS::LoadPathResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::AU_UAV_ROS::LoadPathResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::AU_UAV_ROS::LoadPathResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "eca8b96616c32aacf1be8bbf14c70eba";
  }

  static const char* value(const  ::AU_UAV_ROS::LoadPathResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xeca8b96616c32aacULL;
  static const uint64_t static_value2 = 0xf1be8bbf14c70ebaULL;
};

template<class ContainerAllocator>
struct DataType< ::AU_UAV_ROS::LoadPathResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "AU_UAV_ROS/LoadPathResponse";
  }

  static const char* value(const  ::AU_UAV_ROS::LoadPathResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::AU_UAV_ROS::LoadPathResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string error\n\
\n\
\n\
";
  }

  static const char* value(const  ::AU_UAV_ROS::LoadPathResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::AU_UAV_ROS::LoadPathRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.filename);
    stream.next(m.planeID);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct LoadPathRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::AU_UAV_ROS::LoadPathResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.error);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct LoadPathResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<AU_UAV_ROS::LoadPath> {
  static const char* value() 
  {
    return "4061d08328adc7152ed27430e0829f81";
  }

  static const char* value(const AU_UAV_ROS::LoadPath&) { return value(); } 
};

template<>
struct DataType<AU_UAV_ROS::LoadPath> {
  static const char* value() 
  {
    return "AU_UAV_ROS/LoadPath";
  }

  static const char* value(const AU_UAV_ROS::LoadPath&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<AU_UAV_ROS::LoadPathRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4061d08328adc7152ed27430e0829f81";
  }

  static const char* value(const AU_UAV_ROS::LoadPathRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<AU_UAV_ROS::LoadPathRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "AU_UAV_ROS/LoadPath";
  }

  static const char* value(const AU_UAV_ROS::LoadPathRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<AU_UAV_ROS::LoadPathResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4061d08328adc7152ed27430e0829f81";
  }

  static const char* value(const AU_UAV_ROS::LoadPathResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<AU_UAV_ROS::LoadPathResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "AU_UAV_ROS/LoadPath";
  }

  static const char* value(const AU_UAV_ROS::LoadPathResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // AU_UAV_ROS_SERVICE_LOADPATH_H
