// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AuthSvrRpc.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "AuthSvrRpc.pb.h"

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

const ::google::protobuf::Descriptor* AuthRpcOfflineAsk_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AuthRpcOfflineAsk_reflection_ = NULL;
const ::google::protobuf::Descriptor* AuthRpcOfflineReply_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AuthRpcOfflineReply_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_AuthSvrRpc_2eproto() {
  protobuf_AddDesc_AuthSvrRpc_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "AuthSvrRpc.proto");
  GOOGLE_CHECK(file != NULL);
  AuthRpcOfflineAsk_descriptor_ = file->message_type(0);
  static const int AuthRpcOfflineAsk_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AuthRpcOfflineAsk, uid_),
  };
  AuthRpcOfflineAsk_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      AuthRpcOfflineAsk_descriptor_,
      AuthRpcOfflineAsk::default_instance_,
      AuthRpcOfflineAsk_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AuthRpcOfflineAsk, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AuthRpcOfflineAsk, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(AuthRpcOfflineAsk));
  AuthRpcOfflineReply_descriptor_ = file->message_type(1);
  static const int AuthRpcOfflineReply_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AuthRpcOfflineReply, result_),
  };
  AuthRpcOfflineReply_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      AuthRpcOfflineReply_descriptor_,
      AuthRpcOfflineReply::default_instance_,
      AuthRpcOfflineReply_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AuthRpcOfflineReply, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AuthRpcOfflineReply, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(AuthRpcOfflineReply));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_AuthSvrRpc_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    AuthRpcOfflineAsk_descriptor_, &AuthRpcOfflineAsk::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    AuthRpcOfflineReply_descriptor_, &AuthRpcOfflineReply::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_AuthSvrRpc_2eproto() {
  delete AuthRpcOfflineAsk::default_instance_;
  delete AuthRpcOfflineAsk_reflection_;
  delete AuthRpcOfflineReply::default_instance_;
  delete AuthRpcOfflineReply_reflection_;
}

void protobuf_AddDesc_AuthSvrRpc_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_PublicStruct_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020AuthSvrRpc.proto\032\022PublicStruct.proto\"$"
    "\n\021AuthRpcOfflineAsk\022\017\n\003Uid\030\001 \001(\022:\002-1\",\n\023"
    "AuthRpcOfflineReply\022\025\n\006Result\030\001 \001(\021:\005-99"
    "99", 122);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "AuthSvrRpc.proto", &protobuf_RegisterTypes);
  AuthRpcOfflineAsk::default_instance_ = new AuthRpcOfflineAsk();
  AuthRpcOfflineReply::default_instance_ = new AuthRpcOfflineReply();
  AuthRpcOfflineAsk::default_instance_->InitAsDefaultInstance();
  AuthRpcOfflineReply::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_AuthSvrRpc_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_AuthSvrRpc_2eproto {
  StaticDescriptorInitializer_AuthSvrRpc_2eproto() {
    protobuf_AddDesc_AuthSvrRpc_2eproto();
  }
} static_descriptor_initializer_AuthSvrRpc_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int AuthRpcOfflineAsk::kUidFieldNumber;
#endif  // !_MSC_VER

AuthRpcOfflineAsk::AuthRpcOfflineAsk()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void AuthRpcOfflineAsk::InitAsDefaultInstance() {
}

AuthRpcOfflineAsk::AuthRpcOfflineAsk(const AuthRpcOfflineAsk& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void AuthRpcOfflineAsk::SharedCtor() {
  _cached_size_ = 0;
  uid_ = GOOGLE_LONGLONG(-1);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AuthRpcOfflineAsk::~AuthRpcOfflineAsk() {
  SharedDtor();
}

void AuthRpcOfflineAsk::SharedDtor() {
  if (this != default_instance_) {
  }
}

void AuthRpcOfflineAsk::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AuthRpcOfflineAsk::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AuthRpcOfflineAsk_descriptor_;
}

const AuthRpcOfflineAsk& AuthRpcOfflineAsk::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_AuthSvrRpc_2eproto();
  return *default_instance_;
}

AuthRpcOfflineAsk* AuthRpcOfflineAsk::default_instance_ = NULL;

AuthRpcOfflineAsk* AuthRpcOfflineAsk::New() const {
  return new AuthRpcOfflineAsk;
}

void AuthRpcOfflineAsk::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    uid_ = GOOGLE_LONGLONG(-1);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool AuthRpcOfflineAsk::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional sint64 Uid = 1 [default = -1];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_SINT64>(
                 input, &uid_)));
          set_has_uid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void AuthRpcOfflineAsk::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional sint64 Uid = 1 [default = -1];
  if (has_uid()) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt64(1, this->uid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* AuthRpcOfflineAsk::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional sint64 Uid = 1 [default = -1];
  if (has_uid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSInt64ToArray(1, this->uid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int AuthRpcOfflineAsk::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional sint64 Uid = 1 [default = -1];
    if (has_uid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::SInt64Size(
          this->uid());
    }

  }
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

void AuthRpcOfflineAsk::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const AuthRpcOfflineAsk* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const AuthRpcOfflineAsk*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void AuthRpcOfflineAsk::MergeFrom(const AuthRpcOfflineAsk& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_uid()) {
      set_uid(from.uid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void AuthRpcOfflineAsk::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AuthRpcOfflineAsk::CopyFrom(const AuthRpcOfflineAsk& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AuthRpcOfflineAsk::IsInitialized() const {

  return true;
}

void AuthRpcOfflineAsk::Swap(AuthRpcOfflineAsk* other) {
  if (other != this) {
    std::swap(uid_, other->uid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata AuthRpcOfflineAsk::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AuthRpcOfflineAsk_descriptor_;
  metadata.reflection = AuthRpcOfflineAsk_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int AuthRpcOfflineReply::kResultFieldNumber;
#endif  // !_MSC_VER

AuthRpcOfflineReply::AuthRpcOfflineReply()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void AuthRpcOfflineReply::InitAsDefaultInstance() {
}

AuthRpcOfflineReply::AuthRpcOfflineReply(const AuthRpcOfflineReply& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void AuthRpcOfflineReply::SharedCtor() {
  _cached_size_ = 0;
  result_ = -9999;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AuthRpcOfflineReply::~AuthRpcOfflineReply() {
  SharedDtor();
}

void AuthRpcOfflineReply::SharedDtor() {
  if (this != default_instance_) {
  }
}

void AuthRpcOfflineReply::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AuthRpcOfflineReply::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AuthRpcOfflineReply_descriptor_;
}

const AuthRpcOfflineReply& AuthRpcOfflineReply::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_AuthSvrRpc_2eproto();
  return *default_instance_;
}

AuthRpcOfflineReply* AuthRpcOfflineReply::default_instance_ = NULL;

AuthRpcOfflineReply* AuthRpcOfflineReply::New() const {
  return new AuthRpcOfflineReply;
}

void AuthRpcOfflineReply::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    result_ = -9999;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool AuthRpcOfflineReply::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional sint32 Result = 1 [default = -9999];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 input, &result_)));
          set_has_result();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void AuthRpcOfflineReply::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional sint32 Result = 1 [default = -9999];
  if (has_result()) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt32(1, this->result(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* AuthRpcOfflineReply::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional sint32 Result = 1 [default = -9999];
  if (has_result()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSInt32ToArray(1, this->result(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int AuthRpcOfflineReply::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional sint32 Result = 1 [default = -9999];
    if (has_result()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::SInt32Size(
          this->result());
    }

  }
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

void AuthRpcOfflineReply::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const AuthRpcOfflineReply* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const AuthRpcOfflineReply*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void AuthRpcOfflineReply::MergeFrom(const AuthRpcOfflineReply& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_result()) {
      set_result(from.result());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void AuthRpcOfflineReply::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AuthRpcOfflineReply::CopyFrom(const AuthRpcOfflineReply& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AuthRpcOfflineReply::IsInitialized() const {

  return true;
}

void AuthRpcOfflineReply::Swap(AuthRpcOfflineReply* other) {
  if (other != this) {
    std::swap(result_, other->result_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata AuthRpcOfflineReply::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AuthRpcOfflineReply_descriptor_;
  metadata.reflection = AuthRpcOfflineReply_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
