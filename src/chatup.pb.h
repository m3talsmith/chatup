// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: chatup.proto
// Protobuf C++ Version: 4.25.1

#ifndef GOOGLE_PROTOBUF_INCLUDED_chatup_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_chatup_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4025000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4025001 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
#include "google/protobuf/empty.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_chatup_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_chatup_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_chatup_2eproto;
namespace chatup {
class Message;
struct MessageDefaultTypeInternal;
extern MessageDefaultTypeInternal _Message_default_instance_;
}  // namespace chatup
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace chatup {

// ===================================================================


// -------------------------------------------------------------------

class Message final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:chatup.Message) */ {
 public:
  inline Message() : Message(nullptr) {}
  ~Message() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Message(::google::protobuf::internal::ConstantInitialized);

  inline Message(const Message& from)
      : Message(nullptr, from) {}
  Message(Message&& from) noexcept
    : Message() {
    *this = ::std::move(from);
  }

  inline Message& operator=(const Message& from) {
    CopyFrom(from);
    return *this;
  }
  inline Message& operator=(Message&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Message& default_instance() {
    return *internal_default_instance();
  }
  static inline const Message* internal_default_instance() {
    return reinterpret_cast<const Message*>(
               &_Message_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Message& a, Message& b) {
    a.Swap(&b);
  }
  inline void Swap(Message* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Message* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Message* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Message>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Message& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const Message& from) {
    Message::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(Message* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "chatup.Message";
  }
  protected:
  explicit Message(::google::protobuf::Arena* arena);
  Message(::google::protobuf::Arena* arena, const Message& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFromFieldNumber = 1,
    kContentFieldNumber = 3,
    kTimestampFieldNumber = 2,
  };
  // string from = 1;
  void clear_from() ;
  const std::string& from() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_from(Arg_&& arg, Args_... args);
  std::string* mutable_from();
  PROTOBUF_NODISCARD std::string* release_from();
  void set_allocated_from(std::string* value);

  private:
  const std::string& _internal_from() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_from(
      const std::string& value);
  std::string* _internal_mutable_from();

  public:
  // bytes content = 3;
  void clear_content() ;
  const std::string& content() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_content(Arg_&& arg, Args_... args);
  std::string* mutable_content();
  PROTOBUF_NODISCARD std::string* release_content();
  void set_allocated_content(std::string* value);

  private:
  const std::string& _internal_content() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_content(
      const std::string& value);
  std::string* _internal_mutable_content();

  public:
  // uint64 timestamp = 2;
  void clear_timestamp() ;
  ::uint64_t timestamp() const;
  void set_timestamp(::uint64_t value);

  private:
  ::uint64_t _internal_timestamp() const;
  void _internal_set_timestamp(::uint64_t value);

  public:
  // @@protoc_insertion_point(class_scope:chatup.Message)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 3, 0,
      27, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::ArenaStringPtr from_;
    ::google::protobuf::internal::ArenaStringPtr content_;
    ::uint64_t timestamp_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_chatup_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Message

// string from = 1;
inline void Message::clear_from() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.from_.ClearToEmpty();
}
inline const std::string& Message::from() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:chatup.Message.from)
  return _internal_from();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Message::set_from(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.from_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:chatup.Message.from)
}
inline std::string* Message::mutable_from() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_from();
  // @@protoc_insertion_point(field_mutable:chatup.Message.from)
  return _s;
}
inline const std::string& Message::_internal_from() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.from_.Get();
}
inline void Message::_internal_set_from(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.from_.Set(value, GetArena());
}
inline std::string* Message::_internal_mutable_from() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.from_.Mutable( GetArena());
}
inline std::string* Message::release_from() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:chatup.Message.from)
  return _impl_.from_.Release();
}
inline void Message::set_allocated_from(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.from_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.from_.IsDefault()) {
          _impl_.from_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:chatup.Message.from)
}

// uint64 timestamp = 2;
inline void Message::clear_timestamp() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.timestamp_ = ::uint64_t{0u};
}
inline ::uint64_t Message::timestamp() const {
  // @@protoc_insertion_point(field_get:chatup.Message.timestamp)
  return _internal_timestamp();
}
inline void Message::set_timestamp(::uint64_t value) {
  _internal_set_timestamp(value);
  // @@protoc_insertion_point(field_set:chatup.Message.timestamp)
}
inline ::uint64_t Message::_internal_timestamp() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.timestamp_;
}
inline void Message::_internal_set_timestamp(::uint64_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.timestamp_ = value;
}

// bytes content = 3;
inline void Message::clear_content() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.content_.ClearToEmpty();
}
inline const std::string& Message::content() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:chatup.Message.content)
  return _internal_content();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Message::set_content(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.content_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:chatup.Message.content)
}
inline std::string* Message::mutable_content() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_content();
  // @@protoc_insertion_point(field_mutable:chatup.Message.content)
  return _s;
}
inline const std::string& Message::_internal_content() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.content_.Get();
}
inline void Message::_internal_set_content(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.content_.Set(value, GetArena());
}
inline std::string* Message::_internal_mutable_content() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.content_.Mutable( GetArena());
}
inline std::string* Message::release_content() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:chatup.Message.content)
  return _impl_.content_.Release();
}
inline void Message::set_allocated_content(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.content_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.content_.IsDefault()) {
          _impl_.content_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:chatup.Message.content)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace chatup


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_chatup_2eproto_2epb_2eh
