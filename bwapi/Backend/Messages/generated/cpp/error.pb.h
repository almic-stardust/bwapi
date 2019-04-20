// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: error.proto

#ifndef PROTOBUF_INCLUDED_error_2eproto
#define PROTOBUF_INCLUDED_error_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_error_2eproto 

namespace protobuf_error_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
}  // namespace protobuf_error_2eproto
namespace bwapi {
namespace error {
class Error;
class ErrorDefaultTypeInternal;
extern ErrorDefaultTypeInternal _Error_default_instance_;
}  // namespace error
}  // namespace bwapi
namespace google {
namespace protobuf {
template<> ::bwapi::error::Error* Arena::CreateMaybeMessage<::bwapi::error::Error>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace bwapi {
namespace error {

enum ErrorCode {
  NONE = 0,
  REFUSED = 1,
  ErrorCode_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ErrorCode_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ErrorCode_IsValid(int value);
const ErrorCode ErrorCode_MIN = NONE;
const ErrorCode ErrorCode_MAX = REFUSED;
const int ErrorCode_ARRAYSIZE = ErrorCode_MAX + 1;

// ===================================================================

class Error : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:bwapi.error.Error) */ {
 public:
  Error();
  virtual ~Error();

  Error(const Error& from);

  inline Error& operator=(const Error& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Error(Error&& from) noexcept
    : Error() {
    *this = ::std::move(from);
  }

  inline Error& operator=(Error&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const Error& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Error* internal_default_instance() {
    return reinterpret_cast<const Error*>(
               &_Error_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Error* other);
  friend void swap(Error& a, Error& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Error* New() const final {
    return CreateMaybeMessage<Error>(NULL);
  }

  Error* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Error>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    final;
  void CopyFrom(const Error& from);
  void MergeFrom(const Error& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Error* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string reason = 2;
  void clear_reason();
  static const int kReasonFieldNumber = 2;
  const ::std::string& reason() const;
  void set_reason(const ::std::string& value);
  #if LANG_CXX11
  void set_reason(::std::string&& value);
  #endif
  void set_reason(const char* value);
  void set_reason(const char* value, size_t size);
  ::std::string* mutable_reason();
  ::std::string* release_reason();
  void set_allocated_reason(::std::string* reason);

  // .bwapi.error.ErrorCode code = 1;
  void clear_code();
  static const int kCodeFieldNumber = 1;
  ::bwapi::error::ErrorCode code() const;
  void set_code(::bwapi::error::ErrorCode value);

  // @@protoc_insertion_point(class_scope:bwapi.error.Error)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr reason_;
  int code_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_error_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Error

// .bwapi.error.ErrorCode code = 1;
inline void Error::clear_code() {
  code_ = 0;
}
inline ::bwapi::error::ErrorCode Error::code() const {
  // @@protoc_insertion_point(field_get:bwapi.error.Error.code)
  return static_cast< ::bwapi::error::ErrorCode >(code_);
}
inline void Error::set_code(::bwapi::error::ErrorCode value) {
  
  code_ = value;
  // @@protoc_insertion_point(field_set:bwapi.error.Error.code)
}

// string reason = 2;
inline void Error::clear_reason() {
  reason_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Error::reason() const {
  // @@protoc_insertion_point(field_get:bwapi.error.Error.reason)
  return reason_.GetNoArena();
}
inline void Error::set_reason(const ::std::string& value) {
  
  reason_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:bwapi.error.Error.reason)
}
#if LANG_CXX11
inline void Error::set_reason(::std::string&& value) {
  
  reason_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:bwapi.error.Error.reason)
}
#endif
inline void Error::set_reason(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  reason_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:bwapi.error.Error.reason)
}
inline void Error::set_reason(const char* value, size_t size) {
  
  reason_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:bwapi.error.Error.reason)
}
inline ::std::string* Error::mutable_reason() {
  
  // @@protoc_insertion_point(field_mutable:bwapi.error.Error.reason)
  return reason_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Error::release_reason() {
  // @@protoc_insertion_point(field_release:bwapi.error.Error.reason)
  
  return reason_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Error::set_allocated_reason(::std::string* reason) {
  if (reason != NULL) {
    
  } else {
    
  }
  reason_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), reason);
  // @@protoc_insertion_point(field_set_allocated:bwapi.error.Error.reason)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace error
}  // namespace bwapi

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::bwapi::error::ErrorCode> : ::std::true_type {};

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_error_2eproto
