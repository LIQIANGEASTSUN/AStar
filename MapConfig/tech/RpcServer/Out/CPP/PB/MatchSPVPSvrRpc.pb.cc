// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MatchSPVPSvrRpc.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MatchSPVPSvrRpc.pb.h"

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

const ::google::protobuf::Descriptor* MatchSPVPRpcBattleNumNotify_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MatchSPVPRpcBattleNumNotify_reflection_ = NULL;
const ::google::protobuf::Descriptor* MatchSPVPRpcAINumNotify_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MatchSPVPRpcAINumNotify_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MatchSPVPSvrRpc_2eproto() {
  protobuf_AddDesc_MatchSPVPSvrRpc_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MatchSPVPSvrRpc.proto");
  GOOGLE_CHECK(file != NULL);
  MatchSPVPRpcBattleNumNotify_descriptor_ = file->message_type(0);
  static const int MatchSPVPRpcBattleNumNotify_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MatchSPVPRpcBattleNumNotify, ip_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MatchSPVPRpcBattleNumNotify, port_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MatchSPVPRpcBattleNumNotify, scenenum_),
  };
  MatchSPVPRpcBattleNumNotify_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MatchSPVPRpcBattleNumNotify_descriptor_,
      MatchSPVPRpcBattleNumNotify::default_instance_,
      MatchSPVPRpcBattleNumNotify_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MatchSPVPRpcBattleNumNotify, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MatchSPVPRpcBattleNumNotify, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MatchSPVPRpcBattleNumNotify));
  MatchSPVPRpcAINumNotify_descriptor_ = file->message_type(1);
  static const int MatchSPVPRpcAINumNotify_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MatchSPVPRpcAINumNotify, ip_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MatchSPVPRpcAINumNotify, port_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MatchSPVPRpcAINumNotify, scenenum_),
  };
  MatchSPVPRpcAINumNotify_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MatchSPVPRpcAINumNotify_descriptor_,
      MatchSPVPRpcAINumNotify::default_instance_,
      MatchSPVPRpcAINumNotify_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MatchSPVPRpcAINumNotify, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MatchSPVPRpcAINumNotify, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MatchSPVPRpcAINumNotify));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MatchSPVPSvrRpc_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MatchSPVPRpcBattleNumNotify_descriptor_, &MatchSPVPRpcBattleNumNotify::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MatchSPVPRpcAINumNotify_descriptor_, &MatchSPVPRpcAINumNotify::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MatchSPVPSvrRpc_2eproto() {
  delete MatchSPVPRpcBattleNumNotify::default_instance_;
  delete MatchSPVPRpcBattleNumNotify_reflection_;
  delete MatchSPVPRpcAINumNotify::default_instance_;
  delete MatchSPVPRpcAINumNotify_reflection_;
}

void protobuf_AddDesc_MatchSPVPSvrRpc_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_PublicStruct_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\025MatchSPVPSvrRpc.proto\032\022PublicStruct.pr"
    "oto\"P\n\033MatchSPVPRpcBattleNumNotify\022\n\n\002IP"
    "\030\001 \001(\t\022\020\n\004Port\030\002 \001(\021:\002-1\022\023\n\010SceneNum\030\003 \001"
    "(\021:\0010\"L\n\027MatchSPVPRpcAINumNotify\022\n\n\002IP\030\001"
    " \001(\t\022\020\n\004Port\030\002 \001(\021:\002-1\022\023\n\010SceneNum\030\003 \001(\021"
    ":\0010", 203);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MatchSPVPSvrRpc.proto", &protobuf_RegisterTypes);
  MatchSPVPRpcBattleNumNotify::default_instance_ = new MatchSPVPRpcBattleNumNotify();
  MatchSPVPRpcAINumNotify::default_instance_ = new MatchSPVPRpcAINumNotify();
  MatchSPVPRpcBattleNumNotify::default_instance_->InitAsDefaultInstance();
  MatchSPVPRpcAINumNotify::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MatchSPVPSvrRpc_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MatchSPVPSvrRpc_2eproto {
  StaticDescriptorInitializer_MatchSPVPSvrRpc_2eproto() {
    protobuf_AddDesc_MatchSPVPSvrRpc_2eproto();
  }
} static_descriptor_initializer_MatchSPVPSvrRpc_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int MatchSPVPRpcBattleNumNotify::kIPFieldNumber;
const int MatchSPVPRpcBattleNumNotify::kPortFieldNumber;
const int MatchSPVPRpcBattleNumNotify::kSceneNumFieldNumber;
#endif  // !_MSC_VER

MatchSPVPRpcBattleNumNotify::MatchSPVPRpcBattleNumNotify()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void MatchSPVPRpcBattleNumNotify::InitAsDefaultInstance() {
}

MatchSPVPRpcBattleNumNotify::MatchSPVPRpcBattleNumNotify(const MatchSPVPRpcBattleNumNotify& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void MatchSPVPRpcBattleNumNotify::SharedCtor() {
  _cached_size_ = 0;
  ip_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  port_ = -1;
  scenenum_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MatchSPVPRpcBattleNumNotify::~MatchSPVPRpcBattleNumNotify() {
  SharedDtor();
}

void MatchSPVPRpcBattleNumNotify::SharedDtor() {
  if (ip_ != &::google::protobuf::internal::kEmptyString) {
    delete ip_;
  }
  if (this != default_instance_) {
  }
}

void MatchSPVPRpcBattleNumNotify::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MatchSPVPRpcBattleNumNotify::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MatchSPVPRpcBattleNumNotify_descriptor_;
}

const MatchSPVPRpcBattleNumNotify& MatchSPVPRpcBattleNumNotify::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MatchSPVPSvrRpc_2eproto();
  return *default_instance_;
}

MatchSPVPRpcBattleNumNotify* MatchSPVPRpcBattleNumNotify::default_instance_ = NULL;

MatchSPVPRpcBattleNumNotify* MatchSPVPRpcBattleNumNotify::New() const {
  return new MatchSPVPRpcBattleNumNotify;
}

void MatchSPVPRpcBattleNumNotify::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_ip()) {
      if (ip_ != &::google::protobuf::internal::kEmptyString) {
        ip_->clear();
      }
    }
    port_ = -1;
    scenenum_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MatchSPVPRpcBattleNumNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string IP = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ip()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->ip().data(), this->ip().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_Port;
        break;
      }

      // optional sint32 Port = 2 [default = -1];
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_Port:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 input, &port_)));
          set_has_port();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_SceneNum;
        break;
      }

      // optional sint32 SceneNum = 3 [default = 0];
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_SceneNum:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 input, &scenenum_)));
          set_has_scenenum();
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

void MatchSPVPRpcBattleNumNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string IP = 1;
  if (has_ip()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->ip().data(), this->ip().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->ip(), output);
  }

  // optional sint32 Port = 2 [default = -1];
  if (has_port()) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt32(2, this->port(), output);
  }

  // optional sint32 SceneNum = 3 [default = 0];
  if (has_scenenum()) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt32(3, this->scenenum(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MatchSPVPRpcBattleNumNotify::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string IP = 1;
  if (has_ip()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->ip().data(), this->ip().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->ip(), target);
  }

  // optional sint32 Port = 2 [default = -1];
  if (has_port()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSInt32ToArray(2, this->port(), target);
  }

  // optional sint32 SceneNum = 3 [default = 0];
  if (has_scenenum()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSInt32ToArray(3, this->scenenum(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int MatchSPVPRpcBattleNumNotify::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string IP = 1;
    if (has_ip()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->ip());
    }

    // optional sint32 Port = 2 [default = -1];
    if (has_port()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::SInt32Size(
          this->port());
    }

    // optional sint32 SceneNum = 3 [default = 0];
    if (has_scenenum()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::SInt32Size(
          this->scenenum());
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

void MatchSPVPRpcBattleNumNotify::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MatchSPVPRpcBattleNumNotify* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MatchSPVPRpcBattleNumNotify*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MatchSPVPRpcBattleNumNotify::MergeFrom(const MatchSPVPRpcBattleNumNotify& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_ip()) {
      set_ip(from.ip());
    }
    if (from.has_port()) {
      set_port(from.port());
    }
    if (from.has_scenenum()) {
      set_scenenum(from.scenenum());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MatchSPVPRpcBattleNumNotify::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MatchSPVPRpcBattleNumNotify::CopyFrom(const MatchSPVPRpcBattleNumNotify& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MatchSPVPRpcBattleNumNotify::IsInitialized() const {

  return true;
}

void MatchSPVPRpcBattleNumNotify::Swap(MatchSPVPRpcBattleNumNotify* other) {
  if (other != this) {
    std::swap(ip_, other->ip_);
    std::swap(port_, other->port_);
    std::swap(scenenum_, other->scenenum_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MatchSPVPRpcBattleNumNotify::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MatchSPVPRpcBattleNumNotify_descriptor_;
  metadata.reflection = MatchSPVPRpcBattleNumNotify_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int MatchSPVPRpcAINumNotify::kIPFieldNumber;
const int MatchSPVPRpcAINumNotify::kPortFieldNumber;
const int MatchSPVPRpcAINumNotify::kSceneNumFieldNumber;
#endif  // !_MSC_VER

MatchSPVPRpcAINumNotify::MatchSPVPRpcAINumNotify()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void MatchSPVPRpcAINumNotify::InitAsDefaultInstance() {
}

MatchSPVPRpcAINumNotify::MatchSPVPRpcAINumNotify(const MatchSPVPRpcAINumNotify& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void MatchSPVPRpcAINumNotify::SharedCtor() {
  _cached_size_ = 0;
  ip_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  port_ = -1;
  scenenum_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MatchSPVPRpcAINumNotify::~MatchSPVPRpcAINumNotify() {
  SharedDtor();
}

void MatchSPVPRpcAINumNotify::SharedDtor() {
  if (ip_ != &::google::protobuf::internal::kEmptyString) {
    delete ip_;
  }
  if (this != default_instance_) {
  }
}

void MatchSPVPRpcAINumNotify::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MatchSPVPRpcAINumNotify::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MatchSPVPRpcAINumNotify_descriptor_;
}

const MatchSPVPRpcAINumNotify& MatchSPVPRpcAINumNotify::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MatchSPVPSvrRpc_2eproto();
  return *default_instance_;
}

MatchSPVPRpcAINumNotify* MatchSPVPRpcAINumNotify::default_instance_ = NULL;

MatchSPVPRpcAINumNotify* MatchSPVPRpcAINumNotify::New() const {
  return new MatchSPVPRpcAINumNotify;
}

void MatchSPVPRpcAINumNotify::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_ip()) {
      if (ip_ != &::google::protobuf::internal::kEmptyString) {
        ip_->clear();
      }
    }
    port_ = -1;
    scenenum_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MatchSPVPRpcAINumNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string IP = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ip()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->ip().data(), this->ip().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_Port;
        break;
      }

      // optional sint32 Port = 2 [default = -1];
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_Port:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 input, &port_)));
          set_has_port();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_SceneNum;
        break;
      }

      // optional sint32 SceneNum = 3 [default = 0];
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_SceneNum:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 input, &scenenum_)));
          set_has_scenenum();
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

void MatchSPVPRpcAINumNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string IP = 1;
  if (has_ip()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->ip().data(), this->ip().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->ip(), output);
  }

  // optional sint32 Port = 2 [default = -1];
  if (has_port()) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt32(2, this->port(), output);
  }

  // optional sint32 SceneNum = 3 [default = 0];
  if (has_scenenum()) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt32(3, this->scenenum(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MatchSPVPRpcAINumNotify::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string IP = 1;
  if (has_ip()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->ip().data(), this->ip().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->ip(), target);
  }

  // optional sint32 Port = 2 [default = -1];
  if (has_port()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSInt32ToArray(2, this->port(), target);
  }

  // optional sint32 SceneNum = 3 [default = 0];
  if (has_scenenum()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSInt32ToArray(3, this->scenenum(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int MatchSPVPRpcAINumNotify::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string IP = 1;
    if (has_ip()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->ip());
    }

    // optional sint32 Port = 2 [default = -1];
    if (has_port()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::SInt32Size(
          this->port());
    }

    // optional sint32 SceneNum = 3 [default = 0];
    if (has_scenenum()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::SInt32Size(
          this->scenenum());
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

void MatchSPVPRpcAINumNotify::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MatchSPVPRpcAINumNotify* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MatchSPVPRpcAINumNotify*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MatchSPVPRpcAINumNotify::MergeFrom(const MatchSPVPRpcAINumNotify& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_ip()) {
      set_ip(from.ip());
    }
    if (from.has_port()) {
      set_port(from.port());
    }
    if (from.has_scenenum()) {
      set_scenenum(from.scenenum());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MatchSPVPRpcAINumNotify::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MatchSPVPRpcAINumNotify::CopyFrom(const MatchSPVPRpcAINumNotify& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MatchSPVPRpcAINumNotify::IsInitialized() const {

  return true;
}

void MatchSPVPRpcAINumNotify::Swap(MatchSPVPRpcAINumNotify* other) {
  if (other != this) {
    std::swap(ip_, other->ip_);
    std::swap(port_, other->port_);
    std::swap(scenenum_, other->scenenum_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MatchSPVPRpcAINumNotify::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MatchSPVPRpcAINumNotify_descriptor_;
  metadata.reflection = MatchSPVPRpcAINumNotify_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
