// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: IDSvrRpc.proto

#ifndef PROTOBUF_IDSvrRpc_2eproto__INCLUDED
#define PROTOBUF_IDSvrRpc_2eproto__INCLUDED

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
void  protobuf_AddDesc_IDSvrRpc_2eproto();
void protobuf_AssignDesc_IDSvrRpc_2eproto();
void protobuf_ShutdownFile_IDSvrRpc_2eproto();

class IDRpcIDAsk;
class IDRpcIDReply;
class IDRpcAddUserNotify;

// ===================================================================

class IDRpcIDAsk : public ::google::protobuf::Message {
 public:
  IDRpcIDAsk();
  virtual ~IDRpcIDAsk();

  IDRpcIDAsk(const IDRpcIDAsk& from);

  inline IDRpcIDAsk& operator=(const IDRpcIDAsk& from) {
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
  static const IDRpcIDAsk& default_instance();

  void Swap(IDRpcIDAsk* other);

  // implements Message ----------------------------------------------

  IDRpcIDAsk* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const IDRpcIDAsk& from);
  void MergeFrom(const IDRpcIDAsk& from);
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

  // optional string FieldName = 1;
  inline bool has_fieldname() const;
  inline void clear_fieldname();
  static const int kFieldNameFieldNumber = 1;
  inline const ::std::string& fieldname() const;
  inline void set_fieldname(const ::std::string& value);
  inline void set_fieldname(const char* value);
  inline void set_fieldname(const char* value, size_t size);
  inline ::std::string* mutable_fieldname();
  inline ::std::string* release_fieldname();
  inline void set_allocated_fieldname(::std::string* fieldname);

  // optional string UserName = 2;
  inline bool has_username() const;
  inline void clear_username();
  static const int kUserNameFieldNumber = 2;
  inline const ::std::string& username() const;
  inline void set_username(const ::std::string& value);
  inline void set_username(const char* value);
  inline void set_username(const char* value, size_t size);
  inline ::std::string* mutable_username();
  inline ::std::string* release_username();
  inline void set_allocated_username(::std::string* username);

  // @@protoc_insertion_point(class_scope:IDRpcIDAsk)
 private:
  inline void set_has_fieldname();
  inline void clear_has_fieldname();
  inline void set_has_username();
  inline void clear_has_username();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* fieldname_;
  ::std::string* username_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_IDSvrRpc_2eproto();
  friend void protobuf_AssignDesc_IDSvrRpc_2eproto();
  friend void protobuf_ShutdownFile_IDSvrRpc_2eproto();

  void InitAsDefaultInstance();
  static IDRpcIDAsk* default_instance_;
};
// -------------------------------------------------------------------

class IDRpcIDReply : public ::google::protobuf::Message {
 public:
  IDRpcIDReply();
  virtual ~IDRpcIDReply();

  IDRpcIDReply(const IDRpcIDReply& from);

  inline IDRpcIDReply& operator=(const IDRpcIDReply& from) {
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
  static const IDRpcIDReply& default_instance();

  void Swap(IDRpcIDReply* other);

  // implements Message ----------------------------------------------

  IDRpcIDReply* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const IDRpcIDReply& from);
  void MergeFrom(const IDRpcIDReply& from);
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

  // optional sint64 ID = 2 [default = -1];
  inline bool has_id() const;
  inline void clear_id();
  static const int kIDFieldNumber = 2;
  inline ::google::protobuf::int64 id() const;
  inline void set_id(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:IDRpcIDReply)
 private:
  inline void set_has_result();
  inline void clear_has_result();
  inline void set_has_id();
  inline void clear_has_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 id_;
  ::google::protobuf::int32 result_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_IDSvrRpc_2eproto();
  friend void protobuf_AssignDesc_IDSvrRpc_2eproto();
  friend void protobuf_ShutdownFile_IDSvrRpc_2eproto();

  void InitAsDefaultInstance();
  static IDRpcIDReply* default_instance_;
};
// -------------------------------------------------------------------

class IDRpcAddUserNotify : public ::google::protobuf::Message {
 public:
  IDRpcAddUserNotify();
  virtual ~IDRpcAddUserNotify();

  IDRpcAddUserNotify(const IDRpcAddUserNotify& from);

  inline IDRpcAddUserNotify& operator=(const IDRpcAddUserNotify& from) {
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
  static const IDRpcAddUserNotify& default_instance();

  void Swap(IDRpcAddUserNotify* other);

  // implements Message ----------------------------------------------

  IDRpcAddUserNotify* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const IDRpcAddUserNotify& from);
  void MergeFrom(const IDRpcAddUserNotify& from);
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

  // optional string UserName = 1;
  inline bool has_username() const;
  inline void clear_username();
  static const int kUserNameFieldNumber = 1;
  inline const ::std::string& username() const;
  inline void set_username(const ::std::string& value);
  inline void set_username(const char* value);
  inline void set_username(const char* value, size_t size);
  inline ::std::string* mutable_username();
  inline ::std::string* release_username();
  inline void set_allocated_username(::std::string* username);

  // optional sint64 ID = 2 [default = -1];
  inline bool has_id() const;
  inline void clear_id();
  static const int kIDFieldNumber = 2;
  inline ::google::protobuf::int64 id() const;
  inline void set_id(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:IDRpcAddUserNotify)
 private:
  inline void set_has_username();
  inline void clear_has_username();
  inline void set_has_id();
  inline void clear_has_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* username_;
  ::google::protobuf::int64 id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_IDSvrRpc_2eproto();
  friend void protobuf_AssignDesc_IDSvrRpc_2eproto();
  friend void protobuf_ShutdownFile_IDSvrRpc_2eproto();

  void InitAsDefaultInstance();
  static IDRpcAddUserNotify* default_instance_;
};
// ===================================================================


// ===================================================================

// IDRpcIDAsk

// optional string FieldName = 1;
inline bool IDRpcIDAsk::has_fieldname() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void IDRpcIDAsk::set_has_fieldname() {
  _has_bits_[0] |= 0x00000001u;
}
inline void IDRpcIDAsk::clear_has_fieldname() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void IDRpcIDAsk::clear_fieldname() {
  if (fieldname_ != &::google::protobuf::internal::kEmptyString) {
    fieldname_->clear();
  }
  clear_has_fieldname();
}
inline const ::std::string& IDRpcIDAsk::fieldname() const {
  return *fieldname_;
}
inline void IDRpcIDAsk::set_fieldname(const ::std::string& value) {
  set_has_fieldname();
  if (fieldname_ == &::google::protobuf::internal::kEmptyString) {
    fieldname_ = new ::std::string;
  }
  fieldname_->assign(value);
}
inline void IDRpcIDAsk::set_fieldname(const char* value) {
  set_has_fieldname();
  if (fieldname_ == &::google::protobuf::internal::kEmptyString) {
    fieldname_ = new ::std::string;
  }
  fieldname_->assign(value);
}
inline void IDRpcIDAsk::set_fieldname(const char* value, size_t size) {
  set_has_fieldname();
  if (fieldname_ == &::google::protobuf::internal::kEmptyString) {
    fieldname_ = new ::std::string;
  }
  fieldname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* IDRpcIDAsk::mutable_fieldname() {
  set_has_fieldname();
  if (fieldname_ == &::google::protobuf::internal::kEmptyString) {
    fieldname_ = new ::std::string;
  }
  return fieldname_;
}
inline ::std::string* IDRpcIDAsk::release_fieldname() {
  clear_has_fieldname();
  if (fieldname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = fieldname_;
    fieldname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void IDRpcIDAsk::set_allocated_fieldname(::std::string* fieldname) {
  if (fieldname_ != &::google::protobuf::internal::kEmptyString) {
    delete fieldname_;
  }
  if (fieldname) {
    set_has_fieldname();
    fieldname_ = fieldname;
  } else {
    clear_has_fieldname();
    fieldname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string UserName = 2;
inline bool IDRpcIDAsk::has_username() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void IDRpcIDAsk::set_has_username() {
  _has_bits_[0] |= 0x00000002u;
}
inline void IDRpcIDAsk::clear_has_username() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void IDRpcIDAsk::clear_username() {
  if (username_ != &::google::protobuf::internal::kEmptyString) {
    username_->clear();
  }
  clear_has_username();
}
inline const ::std::string& IDRpcIDAsk::username() const {
  return *username_;
}
inline void IDRpcIDAsk::set_username(const ::std::string& value) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  username_->assign(value);
}
inline void IDRpcIDAsk::set_username(const char* value) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  username_->assign(value);
}
inline void IDRpcIDAsk::set_username(const char* value, size_t size) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  username_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* IDRpcIDAsk::mutable_username() {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  return username_;
}
inline ::std::string* IDRpcIDAsk::release_username() {
  clear_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = username_;
    username_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void IDRpcIDAsk::set_allocated_username(::std::string* username) {
  if (username_ != &::google::protobuf::internal::kEmptyString) {
    delete username_;
  }
  if (username) {
    set_has_username();
    username_ = username;
  } else {
    clear_has_username();
    username_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// IDRpcIDReply

// optional sint32 Result = 1 [default = -9999];
inline bool IDRpcIDReply::has_result() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void IDRpcIDReply::set_has_result() {
  _has_bits_[0] |= 0x00000001u;
}
inline void IDRpcIDReply::clear_has_result() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void IDRpcIDReply::clear_result() {
  result_ = -9999;
  clear_has_result();
}
inline ::google::protobuf::int32 IDRpcIDReply::result() const {
  return result_;
}
inline void IDRpcIDReply::set_result(::google::protobuf::int32 value) {
  set_has_result();
  result_ = value;
}

// optional sint64 ID = 2 [default = -1];
inline bool IDRpcIDReply::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void IDRpcIDReply::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void IDRpcIDReply::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void IDRpcIDReply::clear_id() {
  id_ = GOOGLE_LONGLONG(-1);
  clear_has_id();
}
inline ::google::protobuf::int64 IDRpcIDReply::id() const {
  return id_;
}
inline void IDRpcIDReply::set_id(::google::protobuf::int64 value) {
  set_has_id();
  id_ = value;
}

// -------------------------------------------------------------------

// IDRpcAddUserNotify

// optional string UserName = 1;
inline bool IDRpcAddUserNotify::has_username() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void IDRpcAddUserNotify::set_has_username() {
  _has_bits_[0] |= 0x00000001u;
}
inline void IDRpcAddUserNotify::clear_has_username() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void IDRpcAddUserNotify::clear_username() {
  if (username_ != &::google::protobuf::internal::kEmptyString) {
    username_->clear();
  }
  clear_has_username();
}
inline const ::std::string& IDRpcAddUserNotify::username() const {
  return *username_;
}
inline void IDRpcAddUserNotify::set_username(const ::std::string& value) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  username_->assign(value);
}
inline void IDRpcAddUserNotify::set_username(const char* value) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  username_->assign(value);
}
inline void IDRpcAddUserNotify::set_username(const char* value, size_t size) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  username_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* IDRpcAddUserNotify::mutable_username() {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  return username_;
}
inline ::std::string* IDRpcAddUserNotify::release_username() {
  clear_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = username_;
    username_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void IDRpcAddUserNotify::set_allocated_username(::std::string* username) {
  if (username_ != &::google::protobuf::internal::kEmptyString) {
    delete username_;
  }
  if (username) {
    set_has_username();
    username_ = username;
  } else {
    clear_has_username();
    username_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional sint64 ID = 2 [default = -1];
inline bool IDRpcAddUserNotify::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void IDRpcAddUserNotify::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void IDRpcAddUserNotify::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void IDRpcAddUserNotify::clear_id() {
  id_ = GOOGLE_LONGLONG(-1);
  clear_has_id();
}
inline ::google::protobuf::int64 IDRpcAddUserNotify::id() const {
  return id_;
}
inline void IDRpcAddUserNotify::set_id(::google::protobuf::int64 value) {
  set_has_id();
  id_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_IDSvrRpc_2eproto__INCLUDED
