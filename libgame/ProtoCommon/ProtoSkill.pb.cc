// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProtoSkill.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ProtoSkill.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace Protocol {

void protobuf_ShutdownFile_ProtoSkill_2eproto() {
  delete RequestLearnSkill::default_instance_;
  delete ResponseLearnSkill::default_instance_;
  delete NotifyUpdateSkill::default_instance_;
  delete NotifyRemoveSkill::default_instance_;
  delete NotifyAddBuff::default_instance_;
  delete NotifyRemoveBuff::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_ProtoSkill_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_ProtoSkill_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::protobuf_AddDesc_ProtoGameData_2eproto();
  RequestLearnSkill::default_instance_ = new RequestLearnSkill();
  ResponseLearnSkill::default_instance_ = new ResponseLearnSkill();
  NotifyUpdateSkill::default_instance_ = new NotifyUpdateSkill();
  NotifyRemoveSkill::default_instance_ = new NotifyRemoveSkill();
  NotifyAddBuff::default_instance_ = new NotifyAddBuff();
  NotifyRemoveBuff::default_instance_ = new NotifyRemoveBuff();
  RequestLearnSkill::default_instance_->InitAsDefaultInstance();
  ResponseLearnSkill::default_instance_->InitAsDefaultInstance();
  NotifyUpdateSkill::default_instance_->InitAsDefaultInstance();
  NotifyRemoveSkill::default_instance_->InitAsDefaultInstance();
  NotifyAddBuff::default_instance_->InitAsDefaultInstance();
  NotifyRemoveBuff::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ProtoSkill_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_ProtoSkill_2eproto_once_);
void protobuf_AddDesc_ProtoSkill_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_ProtoSkill_2eproto_once_,
                 &protobuf_AddDesc_ProtoSkill_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ProtoSkill_2eproto {
  StaticDescriptorInitializer_ProtoSkill_2eproto() {
    protobuf_AddDesc_ProtoSkill_2eproto();
  }
} static_descriptor_initializer_ProtoSkill_2eproto_;
#endif
bool SkillOpCode_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int RequestLearnSkill::kLocFieldNumber;
#endif  // !_MSC_VER

RequestLearnSkill::RequestLearnSkill()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void RequestLearnSkill::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  loc_ = const_cast< ::ItemLoc*>(
      ::ItemLoc::internal_default_instance());
#else
  loc_ = const_cast< ::ItemLoc*>(&::ItemLoc::default_instance());
#endif
}

RequestLearnSkill::RequestLearnSkill(const RequestLearnSkill& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void RequestLearnSkill::SharedCtor() {
  _cached_size_ = 0;
  loc_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RequestLearnSkill::~RequestLearnSkill() {
  SharedDtor();
}

void RequestLearnSkill::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete loc_;
  }
}

void RequestLearnSkill::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const RequestLearnSkill& RequestLearnSkill::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ProtoSkill_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ProtoSkill_2eproto();
#endif
  return *default_instance_;
}

RequestLearnSkill* RequestLearnSkill::default_instance_ = NULL;

RequestLearnSkill* RequestLearnSkill::New() const {
  return new RequestLearnSkill;
}

void RequestLearnSkill::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_loc()) {
      if (loc_ != NULL) loc_->::ItemLoc::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool RequestLearnSkill::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .ItemLoc loc = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_loc()));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void RequestLearnSkill::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .ItemLoc loc = 1;
  if (has_loc()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->loc(), output);
  }

}

int RequestLearnSkill::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .ItemLoc loc = 1;
    if (has_loc()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->loc());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RequestLearnSkill::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const RequestLearnSkill*>(&from));
}

void RequestLearnSkill::MergeFrom(const RequestLearnSkill& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_loc()) {
      mutable_loc()->::ItemLoc::MergeFrom(from.loc());
    }
  }
}

void RequestLearnSkill::CopyFrom(const RequestLearnSkill& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RequestLearnSkill::IsInitialized() const {

  return true;
}

void RequestLearnSkill::Swap(RequestLearnSkill* other) {
  if (other != this) {
    std::swap(loc_, other->loc_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string RequestLearnSkill::GetTypeName() const {
  return "Protocol.RequestLearnSkill";
}


// ===================================================================

#ifndef _MSC_VER
const int ResponseLearnSkill::kDataFieldNumber;
#endif  // !_MSC_VER

ResponseLearnSkill::ResponseLearnSkill()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ResponseLearnSkill::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  data_ = const_cast< ::SkillData*>(
      ::SkillData::internal_default_instance());
#else
  data_ = const_cast< ::SkillData*>(&::SkillData::default_instance());
#endif
}

ResponseLearnSkill::ResponseLearnSkill(const ResponseLearnSkill& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ResponseLearnSkill::SharedCtor() {
  _cached_size_ = 0;
  data_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ResponseLearnSkill::~ResponseLearnSkill() {
  SharedDtor();
}

void ResponseLearnSkill::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete data_;
  }
}

void ResponseLearnSkill::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ResponseLearnSkill& ResponseLearnSkill::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ProtoSkill_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ProtoSkill_2eproto();
#endif
  return *default_instance_;
}

ResponseLearnSkill* ResponseLearnSkill::default_instance_ = NULL;

ResponseLearnSkill* ResponseLearnSkill::New() const {
  return new ResponseLearnSkill;
}

void ResponseLearnSkill::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_data()) {
      if (data_ != NULL) data_->::SkillData::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ResponseLearnSkill::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .SkillData data = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_data()));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ResponseLearnSkill::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .SkillData data = 1;
  if (has_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->data(), output);
  }

}

int ResponseLearnSkill::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .SkillData data = 1;
    if (has_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->data());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ResponseLearnSkill::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ResponseLearnSkill*>(&from));
}

void ResponseLearnSkill::MergeFrom(const ResponseLearnSkill& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_data()) {
      mutable_data()->::SkillData::MergeFrom(from.data());
    }
  }
}

void ResponseLearnSkill::CopyFrom(const ResponseLearnSkill& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResponseLearnSkill::IsInitialized() const {

  return true;
}

void ResponseLearnSkill::Swap(ResponseLearnSkill* other) {
  if (other != this) {
    std::swap(data_, other->data_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ResponseLearnSkill::GetTypeName() const {
  return "Protocol.ResponseLearnSkill";
}


// ===================================================================

#ifndef _MSC_VER
const int NotifyUpdateSkill::kDataFieldNumber;
#endif  // !_MSC_VER

NotifyUpdateSkill::NotifyUpdateSkill()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void NotifyUpdateSkill::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  data_ = const_cast< ::SkillData*>(
      ::SkillData::internal_default_instance());
#else
  data_ = const_cast< ::SkillData*>(&::SkillData::default_instance());
#endif
}

NotifyUpdateSkill::NotifyUpdateSkill(const NotifyUpdateSkill& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void NotifyUpdateSkill::SharedCtor() {
  _cached_size_ = 0;
  data_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

NotifyUpdateSkill::~NotifyUpdateSkill() {
  SharedDtor();
}

void NotifyUpdateSkill::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete data_;
  }
}

void NotifyUpdateSkill::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const NotifyUpdateSkill& NotifyUpdateSkill::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ProtoSkill_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ProtoSkill_2eproto();
#endif
  return *default_instance_;
}

NotifyUpdateSkill* NotifyUpdateSkill::default_instance_ = NULL;

NotifyUpdateSkill* NotifyUpdateSkill::New() const {
  return new NotifyUpdateSkill;
}

void NotifyUpdateSkill::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_data()) {
      if (data_ != NULL) data_->::SkillData::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool NotifyUpdateSkill::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .SkillData data = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_data()));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void NotifyUpdateSkill::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .SkillData data = 1;
  if (has_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->data(), output);
  }

}

int NotifyUpdateSkill::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .SkillData data = 1;
    if (has_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->data());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void NotifyUpdateSkill::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const NotifyUpdateSkill*>(&from));
}

void NotifyUpdateSkill::MergeFrom(const NotifyUpdateSkill& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_data()) {
      mutable_data()->::SkillData::MergeFrom(from.data());
    }
  }
}

void NotifyUpdateSkill::CopyFrom(const NotifyUpdateSkill& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NotifyUpdateSkill::IsInitialized() const {

  return true;
}

void NotifyUpdateSkill::Swap(NotifyUpdateSkill* other) {
  if (other != this) {
    std::swap(data_, other->data_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string NotifyUpdateSkill::GetTypeName() const {
  return "Protocol.NotifyUpdateSkill";
}


// ===================================================================

#ifndef _MSC_VER
const int NotifyRemoveSkill::kSkillIdFieldNumber;
const int NotifyRemoveSkill::kSkillLevelFieldNumber;
#endif  // !_MSC_VER

NotifyRemoveSkill::NotifyRemoveSkill()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void NotifyRemoveSkill::InitAsDefaultInstance() {
}

NotifyRemoveSkill::NotifyRemoveSkill(const NotifyRemoveSkill& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void NotifyRemoveSkill::SharedCtor() {
  _cached_size_ = 0;
  skill_id_ = 0;
  skill_level_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

NotifyRemoveSkill::~NotifyRemoveSkill() {
  SharedDtor();
}

void NotifyRemoveSkill::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void NotifyRemoveSkill::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const NotifyRemoveSkill& NotifyRemoveSkill::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ProtoSkill_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ProtoSkill_2eproto();
#endif
  return *default_instance_;
}

NotifyRemoveSkill* NotifyRemoveSkill::default_instance_ = NULL;

NotifyRemoveSkill* NotifyRemoveSkill::New() const {
  return new NotifyRemoveSkill;
}

void NotifyRemoveSkill::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    skill_id_ = 0;
    skill_level_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool NotifyRemoveSkill::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 skill_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &skill_id_)));
          set_has_skill_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_skill_level;
        break;
      }

      // optional int32 skill_level = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_skill_level:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &skill_level_)));
          set_has_skill_level();
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void NotifyRemoveSkill::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 skill_id = 1;
  if (has_skill_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->skill_id(), output);
  }

  // optional int32 skill_level = 2;
  if (has_skill_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->skill_level(), output);
  }

}

int NotifyRemoveSkill::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 skill_id = 1;
    if (has_skill_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->skill_id());
    }

    // optional int32 skill_level = 2;
    if (has_skill_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->skill_level());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void NotifyRemoveSkill::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const NotifyRemoveSkill*>(&from));
}

void NotifyRemoveSkill::MergeFrom(const NotifyRemoveSkill& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_skill_id()) {
      set_skill_id(from.skill_id());
    }
    if (from.has_skill_level()) {
      set_skill_level(from.skill_level());
    }
  }
}

void NotifyRemoveSkill::CopyFrom(const NotifyRemoveSkill& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NotifyRemoveSkill::IsInitialized() const {

  return true;
}

void NotifyRemoveSkill::Swap(NotifyRemoveSkill* other) {
  if (other != this) {
    std::swap(skill_id_, other->skill_id_);
    std::swap(skill_level_, other->skill_level_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string NotifyRemoveSkill::GetTypeName() const {
  return "Protocol.NotifyRemoveSkill";
}


// ===================================================================

#ifndef _MSC_VER
const int NotifyAddBuff::kObjTypeFieldNumber;
const int NotifyAddBuff::kObjIdFieldNumber;
const int NotifyAddBuff::kDataFieldNumber;
#endif  // !_MSC_VER

NotifyAddBuff::NotifyAddBuff()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void NotifyAddBuff::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  data_ = const_cast< ::SkillBuffData*>(
      ::SkillBuffData::internal_default_instance());
#else
  data_ = const_cast< ::SkillBuffData*>(&::SkillBuffData::default_instance());
#endif
}

NotifyAddBuff::NotifyAddBuff(const NotifyAddBuff& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void NotifyAddBuff::SharedCtor() {
  _cached_size_ = 0;
  obj_type_ = 0;
  obj_id_ = 0;
  data_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

NotifyAddBuff::~NotifyAddBuff() {
  SharedDtor();
}

void NotifyAddBuff::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete data_;
  }
}

void NotifyAddBuff::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const NotifyAddBuff& NotifyAddBuff::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ProtoSkill_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ProtoSkill_2eproto();
#endif
  return *default_instance_;
}

NotifyAddBuff* NotifyAddBuff::default_instance_ = NULL;

NotifyAddBuff* NotifyAddBuff::New() const {
  return new NotifyAddBuff;
}

void NotifyAddBuff::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    obj_type_ = 0;
    obj_id_ = 0;
    if (has_data()) {
      if (data_ != NULL) data_->::SkillBuffData::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool NotifyAddBuff::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 obj_type = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &obj_type_)));
          set_has_obj_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_obj_id;
        break;
      }

      // optional int32 obj_id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_obj_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &obj_id_)));
          set_has_obj_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_data;
        break;
      }

      // optional .SkillBuffData data = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_data()));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void NotifyAddBuff::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 obj_type = 1;
  if (has_obj_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->obj_type(), output);
  }

  // optional int32 obj_id = 2;
  if (has_obj_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->obj_id(), output);
  }

  // optional .SkillBuffData data = 3;
  if (has_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->data(), output);
  }

}

int NotifyAddBuff::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 obj_type = 1;
    if (has_obj_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->obj_type());
    }

    // optional int32 obj_id = 2;
    if (has_obj_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->obj_id());
    }

    // optional .SkillBuffData data = 3;
    if (has_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->data());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void NotifyAddBuff::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const NotifyAddBuff*>(&from));
}

void NotifyAddBuff::MergeFrom(const NotifyAddBuff& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_obj_type()) {
      set_obj_type(from.obj_type());
    }
    if (from.has_obj_id()) {
      set_obj_id(from.obj_id());
    }
    if (from.has_data()) {
      mutable_data()->::SkillBuffData::MergeFrom(from.data());
    }
  }
}

void NotifyAddBuff::CopyFrom(const NotifyAddBuff& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NotifyAddBuff::IsInitialized() const {

  return true;
}

void NotifyAddBuff::Swap(NotifyAddBuff* other) {
  if (other != this) {
    std::swap(obj_type_, other->obj_type_);
    std::swap(obj_id_, other->obj_id_);
    std::swap(data_, other->data_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string NotifyAddBuff::GetTypeName() const {
  return "Protocol.NotifyAddBuff";
}


// ===================================================================

#ifndef _MSC_VER
const int NotifyRemoveBuff::kObjTypeFieldNumber;
const int NotifyRemoveBuff::kObjIdFieldNumber;
const int NotifyRemoveBuff::kDataFieldNumber;
#endif  // !_MSC_VER

NotifyRemoveBuff::NotifyRemoveBuff()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void NotifyRemoveBuff::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  data_ = const_cast< ::SkillBuffData*>(
      ::SkillBuffData::internal_default_instance());
#else
  data_ = const_cast< ::SkillBuffData*>(&::SkillBuffData::default_instance());
#endif
}

NotifyRemoveBuff::NotifyRemoveBuff(const NotifyRemoveBuff& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void NotifyRemoveBuff::SharedCtor() {
  _cached_size_ = 0;
  obj_type_ = 0;
  obj_id_ = 0;
  data_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

NotifyRemoveBuff::~NotifyRemoveBuff() {
  SharedDtor();
}

void NotifyRemoveBuff::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete data_;
  }
}

void NotifyRemoveBuff::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const NotifyRemoveBuff& NotifyRemoveBuff::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ProtoSkill_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ProtoSkill_2eproto();
#endif
  return *default_instance_;
}

NotifyRemoveBuff* NotifyRemoveBuff::default_instance_ = NULL;

NotifyRemoveBuff* NotifyRemoveBuff::New() const {
  return new NotifyRemoveBuff;
}

void NotifyRemoveBuff::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    obj_type_ = 0;
    obj_id_ = 0;
    if (has_data()) {
      if (data_ != NULL) data_->::SkillBuffData::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool NotifyRemoveBuff::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 obj_type = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &obj_type_)));
          set_has_obj_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_obj_id;
        break;
      }

      // optional int32 obj_id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_obj_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &obj_id_)));
          set_has_obj_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_data;
        break;
      }

      // optional .SkillBuffData data = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_data()));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void NotifyRemoveBuff::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 obj_type = 1;
  if (has_obj_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->obj_type(), output);
  }

  // optional int32 obj_id = 2;
  if (has_obj_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->obj_id(), output);
  }

  // optional .SkillBuffData data = 3;
  if (has_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->data(), output);
  }

}

int NotifyRemoveBuff::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 obj_type = 1;
    if (has_obj_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->obj_type());
    }

    // optional int32 obj_id = 2;
    if (has_obj_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->obj_id());
    }

    // optional .SkillBuffData data = 3;
    if (has_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->data());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void NotifyRemoveBuff::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const NotifyRemoveBuff*>(&from));
}

void NotifyRemoveBuff::MergeFrom(const NotifyRemoveBuff& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_obj_type()) {
      set_obj_type(from.obj_type());
    }
    if (from.has_obj_id()) {
      set_obj_id(from.obj_id());
    }
    if (from.has_data()) {
      mutable_data()->::SkillBuffData::MergeFrom(from.data());
    }
  }
}

void NotifyRemoveBuff::CopyFrom(const NotifyRemoveBuff& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NotifyRemoveBuff::IsInitialized() const {

  return true;
}

void NotifyRemoveBuff::Swap(NotifyRemoveBuff* other) {
  if (other != this) {
    std::swap(obj_type_, other->obj_type_);
    std::swap(obj_id_, other->obj_id_);
    std::swap(data_, other->data_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string NotifyRemoveBuff::GetTypeName() const {
  return "Protocol.NotifyRemoveBuff";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocol

// @@protoc_insertion_point(global_scope)