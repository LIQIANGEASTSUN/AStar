// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UserMsgSvrRpc.proto

#ifndef PROTOBUF_UserMsgSvrRpc_2eproto__INCLUDED
#define PROTOBUF_UserMsgSvrRpc_2eproto__INCLUDED

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
void  protobuf_AddDesc_UserMsgSvrRpc_2eproto();
void protobuf_AssignDesc_UserMsgSvrRpc_2eproto();
void protobuf_ShutdownFile_UserMsgSvrRpc_2eproto();

class UserMsgRpcExecAsk;
class UserMsgRpcExecReply;

// ===================================================================

class UserMsgRpcExecAsk : public ::google::protobuf::Message {
 public:
  UserMsgRpcExecAsk();
  virtual ~UserMsgRpcExecAsk();

  UserMsgRpcExecAsk(const UserMsgRpcExecAsk& from);

  inline UserMsgRpcExecAsk& operator=(const UserMsgRpcExecAsk& from) {
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
  static const UserMsgRpcExecAsk& default_instance();

  void Swap(UserMsgRpcExecAsk* other);

  // implements Message ----------------------------------------------

  UserMsgRpcExecAsk* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UserMsgRpcExecAsk& from);
  void MergeFrom(const UserMsgRpcExecAsk& from);
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

  // optional bytes Msg = 2;
  inline bool has_msg() const;
  inline void clear_msg();
  static const int kMsgFieldNumber = 2;
  inline const ::std::string& msg() const;
  inline void set_msg(const ::std::string& value);
  inline void set_msg(const char* value);
  inline void set_msg(const void* value, size_t size);
  inline ::std::string* mutable_msg();
  inline ::std::string* release_msg();
  inline void set_allocated_msg(::std::string* msg);

  // optional sint32 ClientNodeId = 3 [default = -1];
  inline bool has_clientnodeid() const;
  inline void clear_clientnodeid();
  static const int kClientNodeIdFieldNumber = 3;
  inline ::google::protobuf::int32 clientnodeid() const;
  inline void set_clientnodeid(::google::protobuf::int32 value);

  // optional sint64 Uid = 4 [default = -1];
  inline bool has_uid() const;
  inline void clear_uid();
  static const int kUidFieldNumber = 4;
  inline ::google::protobuf::int64 uid() const;
  inline void set_uid(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:UserMsgRpcExecAsk)
 private:
  inline void set_has_msg();
  inline void clear_has_msg();
  inline void set_has_clientnodeid();
  inline void clear_has_clientnodeid();
  inline void set_has_uid();
  inline void clear_has_uid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* msg_;
  ::google::protobuf::int64 uid_;
  ::google::protobuf::int32 clientnodeid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_UserMsgSvrRpc_2eproto();
  friend void protobuf_AssignDesc_UserMsgSvrRpc_2eproto();
  friend void protobuf_ShutdownFile_UserMsgSvrRpc_2eproto();

  void InitAsDefaultInstance();
  static UserMsgRpcExecAsk* default_instance_;
};
// -------------------------------------------------------------------

class UserMsgRpcExecReply : public ::google::protobuf::Message {
 public:
  UserMsgRpcExecReply();
  virtual ~UserMsgRpcExecReply();

  UserMsgRpcExecReply(const UserMsgRpcExecReply& from);

  inline UserMsgRpcExecReply& operator=(const UserMsgRpcExecReply& from) {
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
  static const UserMsgRpcExecReply& default_instance();

  void Swap(UserMsgRpcExecReply* other);

  // implements Message ----------------------------------------------

  UserMsgRpcExecReply* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UserMsgRpcExecReply& from);
  void MergeFrom(const UserMsgRpcExecReply& from);
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

  // optional bytes Msg = 2;
  inline bool has_msg() const;
  inline void clear_msg();
  static const int kMsgFieldNumber = 2;
  inline const ::std::string& msg() const;
  inline void set_msg(const ::std::string& value);
  inline void set_msg(const char* value);
  inline void set_msg(const void* value, size_t size);
  inline ::std::string* mutable_msg();
  inline ::std::string* release_msg();
  inline void set_allocated_msg(::std::string* msg);

  // @@protoc_insertion_point(class_scope:UserMsgRpcExecReply)
 private:
  inline void set_has_result();
  inline void clear_has_result();
  inline void set_has_msg();
  inline void clear_has_msg();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* msg_;
  ::google::protobuf::int32 result_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_UserMsgSvrRpc_2eproto();
  friend void protobuf_AssignDesc_UserMsgSvrRpc_2eproto();
  friend void protobuf_ShutdownFile_UserMsgSvrRpc_2eproto();

  void InitAsDefaultInstance();
  static UserMsgRpcExecReply* default_instance_;
};
// ===================================================================


// ===================================================================

// UserMsgRpcExecAsk

// optional bytes Msg = 2;
inline bool UserMsgRpcExecAsk::has_msg() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UserMsgRpcExecAsk::set_has_msg() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UserMsgRpcExecAsk::clear_has_msg() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UserMsgRpcExecAsk::clear_msg() {
  if (msg_ != &::google::protobuf::internal::kEmptyString) {
    msg_->clear();
  }
  clear_has_msg();
}
inline const ::std::string& UserMsgRpcExecAsk::msg() const {
  return *msg_;
}
inline void UserMsgRpcExecAsk::set_msg(const ::std::string& value) {
  set_has_msg();
  if (msg_ == &::google::protobuf::internal::kEmptyString) {
    msg_ = new ::std::string;
  }
  msg_->assign(value);
}
inline void UserMsgRpcExecAsk::set_msg(const char* value) {
  set_has_msg();
  if (msg_ == &::google::protobuf::internal::kEmptyString) {
    msg_ = new ::std::string;
  }
  msg_->assign(value);
}
inline void UserMsgRpcExecAsk::set_msg(const void* value, size_t size) {
  set_has_msg();
  if (msg_ == &::google::protobuf::internal::kEmptyString) {
    msg_ = new ::std::string;
  }
  msg_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* UserMsgRpcExecAsk::mutable_msg() {
  set_has_msg();
  if (msg_ == &::google::protobuf::internal::kEmptyString) {
    msg_ = new ::std::string;
  }
  return msg_;
}
inline ::std::string* UserMsgRpcExecAsk::release_msg() {
  clear_has_msg();
  if (msg_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = msg_;
    msg_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void UserMsgRpcExecAsk::set_allocated_msg(::std::string* msg) {
  if (msg_ != &::google::protobuf::internal::kEmptyString) {
    delete msg_;
  }
  if (msg) {
    set_has_msg();
    msg_ = msg;
  } else {
    clear_has_msg();
    msg_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional sint32 ClientNodeId = 3 [default = -1];
inline bool UserMsgRpcExecAsk::has_clientnodeid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UserMsgRpcExecAsk::set_has_clientnodeid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UserMsgRpcExecAsk::clear_has_clientnodeid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UserMsgRpcExecAsk::clear_clientnodeid() {
  clientnodeid_ = -1;
  clear_has_clientnodeid();
}
inline ::google::protobuf::int32 UserMsgRpcExecAsk::clientnodeid() const {
  return clientnodeid_;
}
inline void UserMsgRpcExecAsk::set_clientnodeid(::google::protobuf::int32 value) {
  set_has_clientnodeid();
  clientnodeid_ = value;
}

// optional sint64 Uid = 4 [default = -1];
inline bool UserMsgRpcExecAsk::has_uid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void UserMsgRpcExecAsk::set_has_uid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void UserMsgRpcExecAsk::clear_has_uid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void UserMsgRpcExecAsk::clear_uid() {
  uid_ = GOOGLE_LONGLONG(-1);
  clear_has_uid();
}
inline ::google::protobuf::int64 UserMsgRpcExecAsk::uid() const {
  return uid_;
}
inline void UserMsgRpcExecAsk::set_uid(::google::protobuf::int64 value) {
  set_has_uid();
  uid_ = value;
}

// -------------------------------------------------------------------

// UserMsgRpcExecReply

// optional sint32 Result = 1 [default = -9999];
inline bool UserMsgRpcExecReply::has_result() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UserMsgRpcExecReply::set_has_result() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UserMsgRpcExecReply::clear_has_result() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UserMsgRpcExecReply::clear_result() {
  result_ = -9999;
  clear_has_result();
}
inline ::google::protobuf::int32 UserMsgRpcExecReply::result() const {
  return result_;
}
inline void UserMsgRpcExecReply::set_result(::google::protobuf::int32 value) {
  set_has_result();
  result_ = value;
}

// optional bytes Msg = 2;
inline bool UserMsgRpcExecReply::has_msg() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UserMsgRpcExecReply::set_has_msg() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UserMsgRpcExecReply::clear_has_msg() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UserMsgRpcExecReply::clear_msg() {
  if (msg_ != &::google::protobuf::internal::kEmptyString) {
    msg_->clear();
  }
  clear_has_msg();
}
inline const ::std::string& UserMsgRpcExecReply::msg() const {
  return *msg_;
}
inline void UserMsgRpcExecReply::set_msg(const ::std::string& value) {
  set_has_msg();
  if (msg_ == &::google::protobuf::internal::kEmptyString) {
    msg_ = new ::std::string;
  }
  msg_->assign(value);
}
inline void UserMsgRpcExecReply::set_msg(const char* value) {
  set_has_msg();
  if (msg_ == &::google::protobuf::internal::kEmptyString) {
    msg_ = new ::std::string;
  }
  msg_->assign(value);
}
inline void UserMsgRpcExecReply::set_msg(const void* value, size_t size) {
  set_has_msg();
  if (msg_ == &::google::protobuf::internal::kEmptyString) {
    msg_ = new ::std::string;
  }
  msg_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* UserMsgRpcExecReply::mutable_msg() {
  set_has_msg();
  if (msg_ == &::google::protobuf::internal::kEmptyString) {
    msg_ = new ::std::string;
  }
  return msg_;
}
inline ::std::string* UserMsgRpcExecReply::release_msg() {
  clear_has_msg();
  if (msg_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = msg_;
    msg_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void UserMsgRpcExecReply::set_allocated_msg(::std::string* msg) {
  if (msg_ != &::google::protobuf::internal::kEmptyString) {
    delete msg_;
  }
  if (msg) {
    set_has_msg();
    msg_ = msg;
  } else {
    clear_has_msg();
    msg_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_UserMsgSvrRpc_2eproto__INCLUDED