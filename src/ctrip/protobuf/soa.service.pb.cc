// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: soa.service.proto

#include "soa.service.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace soa {
namespace service {
}  // namespace service
}  // namespace soa
namespace protobuf_soa_2eservice_2eproto {
void InitDefaults() {
}

const ::google::protobuf::uint32 TableStruct::offsets[1] = {};
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "soa.service.proto", schemas, file_default_instances, TableStruct::offsets,
      NULL, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\021soa.service.proto\022\013soa.service\032 google"
      "/protobuf/descriptor.proto:.\n\004name\022\037.goo"
      "gle.protobuf.ServiceOptions\030\260\t \001(\t:3\n\tna"
      "mespace\022\037.google.protobuf.ServiceOptions"
      "\030\261\t \001(\t"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 167);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "soa.service.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fprotobuf_2fdescriptor_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_soa_2eservice_2eproto
namespace soa {
namespace service {
const ::std::string name_default("");
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::ServiceOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  name(kNameFieldNumber, name_default);
const ::std::string namespace_default("");
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::ServiceOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  namespace_(kNamespaceFieldNumber, namespace_default);

// @@protoc_insertion_point(namespace_scope)
}  // namespace service
}  // namespace soa
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)