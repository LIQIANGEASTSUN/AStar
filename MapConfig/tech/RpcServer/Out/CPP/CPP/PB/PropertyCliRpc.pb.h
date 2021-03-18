// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PropertyCliRpc.proto

#ifndef PROTOBUF_PropertyCliRpc_2eproto__INCLUDED
#define PROTOBUF_PropertyCliRpc_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "PublicStruct.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_PropertyCliRpc_2eproto();
void protobuf_AssignDesc_PropertyCliRpc_2eproto();
void protobuf_ShutdownFile_PropertyCliRpc_2eproto();

class PropertyRpcSyncAsk;
class PropertyRpcSyncReply;

// ===================================================================

class PropertyRpcSyncAsk : public ::google::protobuf::Message {
 public:
  PropertyRpcSyncAsk();
  virtual ~PropertyRpcSyncAsk();

  PropertyRpcSyncAsk(const PropertyRpcSyncAsk& from);

  inline PropertyRpcSyncAsk& operator=(const PropertyRpcSyncAsk& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PropertyRpcSyncAsk& default_instance();

  void Swap(PropertyRpcSyncAsk* other);

  // implements Message ----------------------------------------------

  PropertyRpcSyncAsk* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PropertyRpcSyncAsk& from);
  void MergeFrom(const PropertyRpcSyncAsk& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:PropertyRpcSyncAsk)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  friend void  protobuf_AddDesc_PropertyCliRpc_2eproto();
  friend void protobuf_AssignDesc_PropertyCliRpc_2eproto();
  friend void protobuf_ShutdownFile_PropertyCliRpc_2eproto();

  void InitAsDefaultInstance();
  static PropertyRpcSyncAsk* default_instance_;
};
// -------------------------------------------------------------------

class PropertyRpcSyncReply : public ::google::protobuf::Message {
 public:
  PropertyRpcSyncReply();
  virtual ~PropertyRpcSyncReply();

  PropertyRpcSyncReply(const PropertyRpcSyncReply& from);

  inline PropertyRpcSyncReply& operator=(const PropertyRpcSyncReply& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PropertyRpcSyncReply& default_instance();

  void Swap(PropertyRpcSyncReply* other);

  // implements Message ----------------------------------------------

  PropertyRpcSyncReply* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PropertyRpcSyncReply& from);
  void MergeFrom(const PropertyRpcSyncReply& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional sint32 Result = 1 [default = -9999];
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 1;
  inline ::google::protobuf::int32 result() const;
  inline void set_result(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:PropertyRpcSyncReply)
 private:
  inline void set_has_result();
  inline void clear_has_result();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 result_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_PropertyCliRpc_2eproto();
  friend void protobuf_AssignDesc_PropertyCliRpc_2eproto();
  friend void protobuf_ShutdownFile_PropertyCliRpc_2eproto();

  void InitAsDefaultInstance();
  static PropertyRpcSyncReply* default_instance_;
};
// ===================================================================


// ===================================================================

// PropertyRpcSyncAsk

// -------------------------------------------------------------------

// PropertyRpcSyncReply

// optional sint32 Result = 1 [default = -9999];
inline bool PropertyRpcSyncReply::has_result() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PropertyRpcSyncReply::set_has_result() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PropertyRpcSyncReply::clear_has_result() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PropertyRpcSyncReply::clear_result() {
  result_ = -9999;
  clear_has_result();
}
inline ::google::protobuf::int32 PropertyRpcSyncReply::result() const {
  return result_;
}
inline void PropertyRpcSyncReply::set_result(::google::protobuf::int32 value) {
  set_has_result();
  result_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_PropertyCliRpc_2eproto__INCLUDED
