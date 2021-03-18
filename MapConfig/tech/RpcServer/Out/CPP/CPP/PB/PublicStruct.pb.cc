// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PublicStruct.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "PublicStruct.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* bag_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  bag_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_PublicStruct_2eproto() {
  protobuf_AddDesc_PublicStruct_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "PublicStruct.proto");
  GOOGLE_CHECK(file != NULL);
  bag_descriptor_ = file->message_type(0);
  static const int bag_offsets_[1] = {
  };
  bag_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      bag_descriptor_,
      bag::default_instance_,
      bag_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(bag, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(bag, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(bag));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_PublicStruct_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    bag_descriptor_, &bag::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_PublicStruct_2eproto() {
  delete bag::default_instance_;
  delete bag_reflection_;
}

void protobuf_AddDesc_PublicStruct_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022PublicStruct.proto\"\005\n\003bag", 27);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "PublicStruct.proto", &protobuf_RegisterTypes);
  bag::default_instance_ = new bag();
  bag::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_PublicStruct_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_PublicStruct_2eproto {
  StaticDescriptorInitializer_PublicStruct_2eproto() {
    protobuf_AddDesc_PublicStruct_2eproto();
  }
} static_descriptor_initializer_PublicStruct_2eproto_;

// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

bag::bag()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void bag::InitAsDefaultInstance() {
}

bag::bag(const bag& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void bag::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bag::~bag() {
  SharedDtor();
}

void bag::SharedDtor() {
  if (this != default_instance_) {
  }
}

void bag::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* bag::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return bag_descriptor_;
}

const bag& bag::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_PublicStruct_2eproto();
  return *default_instance_;
}

bag* bag::default_instance_ = NULL;

bag* bag::New() const {
  return new bag;
}

void bag::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool bag::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      return true;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, mutable_unknown_fields()));
  }
  return true;
#undef DO_
}

void bag::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* bag::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int bag::ByteSize() const {
  int total_size = 0;

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void bag::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const bag* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const bag*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void bag::MergeFrom(const bag& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void bag::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void bag::CopyFrom(const bag& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool bag::IsInitialized() const {

  return true;
}

void bag::Swap(bag* other) {
  if (other != this) {
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata bag::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = bag_descriptor_;
  metadata.reflection = bag_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
