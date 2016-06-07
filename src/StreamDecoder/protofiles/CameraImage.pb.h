// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CameraImage.proto

#ifndef PROTOBUF_CameraImage_2eproto__INCLUDED
#define PROTOBUF_CameraImage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "header.pb.h"
// @@protoc_insertion_point(includes)

namespace pb {
namespace SensorNearData {
namespace MFC {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_CameraImage_2eproto();
void protobuf_AssignDesc_CameraImage_2eproto();
void protobuf_ShutdownFile_CameraImage_2eproto();

class CameraImage;

// ===================================================================

class CameraImage : public ::google::protobuf::Message {
 public:
  CameraImage();
  virtual ~CameraImage();

  CameraImage(const CameraImage& from);

  inline CameraImage& operator=(const CameraImage& from) {
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
  static const CameraImage& default_instance();

  void Swap(CameraImage* other);

  // implements Message ----------------------------------------------

  CameraImage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CameraImage& from);
  void MergeFrom(const CameraImage& from);
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

  // optional .pb.Header header = 1;
  inline bool has_header() const;
  inline void clear_header();
  static const int kHeaderFieldNumber = 1;
  inline const ::pb::Header& header() const;
  inline ::pb::Header* mutable_header();
  inline ::pb::Header* release_header();
  inline void set_allocated_header(::pb::Header* header);

  // optional uint32 image_counter = 2 [default = 0];
  inline bool has_image_counter() const;
  inline void clear_image_counter();
  static const int kImageCounterFieldNumber = 2;
  inline ::google::protobuf::uint32 image_counter() const;
  inline void set_image_counter(::google::protobuf::uint32 value);

  // optional sint32 image_width = 3 [default = 1176];
  inline bool has_image_width() const;
  inline void clear_image_width();
  static const int kImageWidthFieldNumber = 3;
  inline ::google::protobuf::int32 image_width() const;
  inline void set_image_width(::google::protobuf::int32 value);

  // optional sint32 image_height = 4 [default = 640];
  inline bool has_image_height() const;
  inline void clear_image_height();
  static const int kImageHeightFieldNumber = 4;
  inline ::google::protobuf::int32 image_height() const;
  inline void set_image_height(::google::protobuf::int32 value);

  // optional sint32 image_shift_u = 5 [default = 0];
  inline bool has_image_shift_u() const;
  inline void clear_image_shift_u();
  static const int kImageShiftUFieldNumber = 5;
  inline ::google::protobuf::int32 image_shift_u() const;
  inline void set_image_shift_u(::google::protobuf::int32 value);

  // optional sint32 image_shift_v = 6 [default = 0];
  inline bool has_image_shift_v() const;
  inline void clear_image_shift_v();
  static const int kImageShiftVFieldNumber = 6;
  inline ::google::protobuf::int32 image_shift_v() const;
  inline void set_image_shift_v(::google::protobuf::int32 value);

  // optional sint32 o_image_width = 7 [default = 1176];
  inline bool has_o_image_width() const;
  inline void clear_o_image_width();
  static const int kOImageWidthFieldNumber = 7;
  inline ::google::protobuf::int32 o_image_width() const;
  inline void set_o_image_width(::google::protobuf::int32 value);

  // optional sint32 o_image_height = 8 [default = 640];
  inline bool has_o_image_height() const;
  inline void clear_o_image_height();
  static const int kOImageHeightFieldNumber = 8;
  inline ::google::protobuf::int32 o_image_height() const;
  inline void set_o_image_height(::google::protobuf::int32 value);

  // optional sint32 imager_size_u = 9 [default = 1280];
  inline bool has_imager_size_u() const;
  inline void clear_imager_size_u();
  static const int kImagerSizeUFieldNumber = 9;
  inline ::google::protobuf::int32 imager_size_u() const;
  inline void set_imager_size_u(::google::protobuf::int32 value);

  // optional sint32 imager_size_v = 10 [default = 960];
  inline bool has_imager_size_v() const;
  inline void clear_imager_size_v();
  static const int kImagerSizeVFieldNumber = 10;
  inline ::google::protobuf::int32 imager_size_v() const;
  inline void set_imager_size_v(::google::protobuf::int32 value);

  // optional uint32 o_image_pattern = 11 [default = 3];
  inline bool has_o_image_pattern() const;
  inline void clear_o_image_pattern();
  static const int kOImagePatternFieldNumber = 11;
  inline ::google::protobuf::uint32 o_image_pattern() const;
  inline void set_o_image_pattern(::google::protobuf::uint32 value);

  // optional bool image_compressed = 12 [default = true];
  inline bool has_image_compressed() const;
  inline void clear_image_compressed();
  static const int kImageCompressedFieldNumber = 12;
  inline bool image_compressed() const;
  inline void set_image_compressed(bool value);

  // optional uint32 image_compression_type = 13 [default = 2];
  inline bool has_image_compression_type() const;
  inline void clear_image_compression_type();
  static const int kImageCompressionTypeFieldNumber = 13;
  inline ::google::protobuf::uint32 image_compression_type() const;
  inline void set_image_compression_type(::google::protobuf::uint32 value);

  // optional uint32 image_type = 14 [default = 3];
  inline bool has_image_type() const;
  inline void clear_image_type();
  static const int kImageTypeFieldNumber = 14;
  inline ::google::protobuf::uint32 image_type() const;
  inline void set_image_type(::google::protobuf::uint32 value);

  // optional uint32 byte_per_pixel = 15 [default = 1];
  inline bool has_byte_per_pixel() const;
  inline void clear_byte_per_pixel();
  static const int kBytePerPixelFieldNumber = 15;
  inline ::google::protobuf::uint32 byte_per_pixel() const;
  inline void set_byte_per_pixel(::google::protobuf::uint32 value);

  // optional uint32 bit_per_pixel = 16 [default = 8];
  inline bool has_bit_per_pixel() const;
  inline void clear_bit_per_pixel();
  static const int kBitPerPixelFieldNumber = 16;
  inline ::google::protobuf::uint32 bit_per_pixel() const;
  inline void set_bit_per_pixel(::google::protobuf::uint32 value);

  // optional bytes image_payload = 17;
  inline bool has_image_payload() const;
  inline void clear_image_payload();
  static const int kImagePayloadFieldNumber = 17;
  inline const ::std::string& image_payload() const;
  inline void set_image_payload(const ::std::string& value);
  inline void set_image_payload(const char* value);
  inline void set_image_payload(const void* value, size_t size);
  inline ::std::string* mutable_image_payload();
  inline ::std::string* release_image_payload();
  inline void set_allocated_image_payload(::std::string* image_payload);

  // optional bytes bmp_image = 18;
  inline bool has_bmp_image() const;
  inline void clear_bmp_image();
  static const int kBmpImageFieldNumber = 18;
  inline const ::std::string& bmp_image() const;
  inline void set_bmp_image(const ::std::string& value);
  inline void set_bmp_image(const char* value);
  inline void set_bmp_image(const void* value, size_t size);
  inline ::std::string* mutable_bmp_image();
  inline ::std::string* release_bmp_image();
  inline void set_allocated_bmp_image(::std::string* bmp_image);

  // @@protoc_insertion_point(class_scope:pb.SensorNearData.MFC.CameraImage)
 private:
  inline void set_has_header();
  inline void clear_has_header();
  inline void set_has_image_counter();
  inline void clear_has_image_counter();
  inline void set_has_image_width();
  inline void clear_has_image_width();
  inline void set_has_image_height();
  inline void clear_has_image_height();
  inline void set_has_image_shift_u();
  inline void clear_has_image_shift_u();
  inline void set_has_image_shift_v();
  inline void clear_has_image_shift_v();
  inline void set_has_o_image_width();
  inline void clear_has_o_image_width();
  inline void set_has_o_image_height();
  inline void clear_has_o_image_height();
  inline void set_has_imager_size_u();
  inline void clear_has_imager_size_u();
  inline void set_has_imager_size_v();
  inline void clear_has_imager_size_v();
  inline void set_has_o_image_pattern();
  inline void clear_has_o_image_pattern();
  inline void set_has_image_compressed();
  inline void clear_has_image_compressed();
  inline void set_has_image_compression_type();
  inline void clear_has_image_compression_type();
  inline void set_has_image_type();
  inline void clear_has_image_type();
  inline void set_has_byte_per_pixel();
  inline void clear_has_byte_per_pixel();
  inline void set_has_bit_per_pixel();
  inline void clear_has_bit_per_pixel();
  inline void set_has_image_payload();
  inline void clear_has_image_payload();
  inline void set_has_bmp_image();
  inline void clear_has_bmp_image();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::pb::Header* header_;
  ::google::protobuf::uint32 image_counter_;
  ::google::protobuf::int32 image_width_;
  ::google::protobuf::int32 image_height_;
  ::google::protobuf::int32 image_shift_u_;
  ::google::protobuf::int32 image_shift_v_;
  ::google::protobuf::int32 o_image_width_;
  ::google::protobuf::int32 o_image_height_;
  ::google::protobuf::int32 imager_size_u_;
  ::google::protobuf::int32 imager_size_v_;
  ::google::protobuf::uint32 o_image_pattern_;
  bool image_compressed_;
  ::google::protobuf::uint32 image_compression_type_;
  ::google::protobuf::uint32 image_type_;
  ::google::protobuf::uint32 byte_per_pixel_;
  ::std::string* image_payload_;
  ::std::string* bmp_image_;
  ::google::protobuf::uint32 bit_per_pixel_;
  friend void  protobuf_AddDesc_CameraImage_2eproto();
  friend void protobuf_AssignDesc_CameraImage_2eproto();
  friend void protobuf_ShutdownFile_CameraImage_2eproto();

  void InitAsDefaultInstance();
  static CameraImage* default_instance_;
};
// ===================================================================


// ===================================================================

// CameraImage

// optional .pb.Header header = 1;
inline bool CameraImage::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CameraImage::set_has_header() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CameraImage::clear_has_header() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CameraImage::clear_header() {
  if (header_ != NULL) header_->::pb::Header::Clear();
  clear_has_header();
}
inline const ::pb::Header& CameraImage::header() const {
  // @@protoc_insertion_point(field_get:pb.SensorNearData.MFC.CameraImage.header)
  return header_ != NULL ? *header_ : *default_instance_->header_;
}
inline ::pb::Header* CameraImage::mutable_header() {
  set_has_header();
  if (header_ == NULL) header_ = new ::pb::Header;
  // @@protoc_insertion_point(field_mutable:pb.SensorNearData.MFC.CameraImage.header)
  return header_;
}
inline ::pb::Header* CameraImage::release_header() {
  clear_has_header();
  ::pb::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline void CameraImage::set_allocated_header(::pb::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    set_has_header();
  } else {
    clear_has_header();
  }
  // @@protoc_insertion_point(field_set_allocated:pb.SensorNearData.MFC.CameraImage.header)
}

// optional uint32 image_counter = 2 [default = 0];
inline bool CameraImage::has_image_counter() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CameraImage::set_has_image_counter() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CameraImage::clear_has_image_counter() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CameraImage::clear_image_counter() {
  image_counter_ = 0u;
  clear_has_image_counter();
}
inline ::google::protobuf::uint32 CameraImage::image_counter() const {
  // @@protoc_insertion_point(field_get:pb.SensorNearData.MFC.CameraImage.image_counter)
  return image_counter_;
}
inline void CameraImage::set_image_counter(::google::protobuf::uint32 value) {
  set_has_image_counter();
  image_counter_ = value;
  // @@protoc_insertion_point(field_set:pb.SensorNearData.MFC.CameraImage.image_counter)
}

// optional sint32 image_width = 3 [default = 1176];
inline bool CameraImage::has_image_width() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CameraImage::set_has_image_width() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CameraImage::clear_has_image_width() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CameraImage::clear_image_width() {
  image_width_ = 1176;
  clear_has_image_width();
}
inline ::google::protobuf::int32 CameraImage::image_width() const {
  // @@protoc_insertion_point(field_get:pb.SensorNearData.MFC.CameraImage.image_width)
  return image_width_;
}
inline void CameraImage::set_image_width(::google::protobuf::int32 value) {
  set_has_image_width();
  image_width_ = value;
  // @@protoc_insertion_point(field_set:pb.SensorNearData.MFC.CameraImage.image_width)
}

// optional sint32 image_height = 4 [default = 640];
inline bool CameraImage::has_image_height() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CameraImage::set_has_image_height() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CameraImage::clear_has_image_height() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CameraImage::clear_image_height() {
  image_height_ = 640;
  clear_has_image_height();
}
inline ::google::protobuf::int32 CameraImage::image_height() const {
  // @@protoc_insertion_point(field_get:pb.SensorNearData.MFC.CameraImage.image_height)
  return image_height_;
}
inline void CameraImage::set_image_height(::google::protobuf::int32 value) {
  set_has_image_height();
  image_height_ = value;
  // @@protoc_insertion_point(field_set:pb.SensorNearData.MFC.CameraImage.image_height)
}

// optional sint32 image_shift_u = 5 [default = 0];
inline bool CameraImage::has_image_shift_u() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void CameraImage::set_has_image_shift_u() {
  _has_bits_[0] |= 0x00000010u;
}
inline void CameraImage::clear_has_image_shift_u() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void CameraImage::clear_image_shift_u() {
  image_shift_u_ = 0;
  clear_has_image_shift_u();
}
inline ::google::protobuf::int32 CameraImage::image_shift_u() const {
  // @@protoc_insertion_point(field_get:pb.SensorNearData.MFC.CameraImage.image_shift_u)
  return image_shift_u_;
}
inline void CameraImage::set_image_shift_u(::google::protobuf::int32 value) {
  set_has_image_shift_u();
  image_shift_u_ = value;
  // @@protoc_insertion_point(field_set:pb.SensorNearData.MFC.CameraImage.image_shift_u)
}

// optional sint32 image_shift_v = 6 [default = 0];
inline bool CameraImage::has_image_shift_v() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void CameraImage::set_has_image_shift_v() {
  _has_bits_[0] |= 0x00000020u;
}
inline void CameraImage::clear_has_image_shift_v() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void CameraImage::clear_image_shift_v() {
  image_shift_v_ = 0;
  clear_has_image_shift_v();
}
inline ::google::protobuf::int32 CameraImage::image_shift_v() const {
  // @@protoc_insertion_point(field_get:pb.SensorNearData.MFC.CameraImage.image_shift_v)
  return image_shift_v_;
}
inline void CameraImage::set_image_shift_v(::google::protobuf::int32 value) {
  set_has_image_shift_v();
  image_shift_v_ = value;
  // @@protoc_insertion_point(field_set:pb.SensorNearData.MFC.CameraImage.image_shift_v)
}

// optional sint32 o_image_width = 7 [default = 1176];
inline bool CameraImage::has_o_image_width() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void CameraImage::set_has_o_image_width() {
  _has_bits_[0] |= 0x00000040u;
}
inline void CameraImage::clear_has_o_image_width() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void CameraImage::clear_o_image_width() {
  o_image_width_ = 1176;
  clear_has_o_image_width();
}
inline ::google::protobuf::int32 CameraImage::o_image_width() const {
  // @@protoc_insertion_point(field_get:pb.SensorNearData.MFC.CameraImage.o_image_width)
  return o_image_width_;
}
inline void CameraImage::set_o_image_width(::google::protobuf::int32 value) {
  set_has_o_image_width();
  o_image_width_ = value;
  // @@protoc_insertion_point(field_set:pb.SensorNearData.MFC.CameraImage.o_image_width)
}

// optional sint32 o_image_height = 8 [default = 640];
inline bool CameraImage::has_o_image_height() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void CameraImage::set_has_o_image_height() {
  _has_bits_[0] |= 0x00000080u;
}
inline void CameraImage::clear_has_o_image_height() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void CameraImage::clear_o_image_height() {
  o_image_height_ = 640;
  clear_has_o_image_height();
}
inline ::google::protobuf::int32 CameraImage::o_image_height() const {
  // @@protoc_insertion_point(field_get:pb.SensorNearData.MFC.CameraImage.o_image_height)
  return o_image_height_;
}
inline void CameraImage::set_o_image_height(::google::protobuf::int32 value) {
  set_has_o_image_height();
  o_image_height_ = value;
  // @@protoc_insertion_point(field_set:pb.SensorNearData.MFC.CameraImage.o_image_height)
}

// optional sint32 imager_size_u = 9 [default = 1280];
inline bool CameraImage::has_imager_size_u() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void CameraImage::set_has_imager_size_u() {
  _has_bits_[0] |= 0x00000100u;
}
inline void CameraImage::clear_has_imager_size_u() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void CameraImage::clear_imager_size_u() {
  imager_size_u_ = 1280;
  clear_has_imager_size_u();
}
inline ::google::protobuf::int32 CameraImage::imager_size_u() const {
  // @@protoc_insertion_point(field_get:pb.SensorNearData.MFC.CameraImage.imager_size_u)
  return imager_size_u_;
}
inline void CameraImage::set_imager_size_u(::google::protobuf::int32 value) {
  set_has_imager_size_u();
  imager_size_u_ = value;
  // @@protoc_insertion_point(field_set:pb.SensorNearData.MFC.CameraImage.imager_size_u)
}

// optional sint32 imager_size_v = 10 [default = 960];
inline bool CameraImage::has_imager_size_v() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void CameraImage::set_has_imager_size_v() {
  _has_bits_[0] |= 0x00000200u;
}
inline void CameraImage::clear_has_imager_size_v() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void CameraImage::clear_imager_size_v() {
  imager_size_v_ = 960;
  clear_has_imager_size_v();
}
inline ::google::protobuf::int32 CameraImage::imager_size_v() const {
  // @@protoc_insertion_point(field_get:pb.SensorNearData.MFC.CameraImage.imager_size_v)
  return imager_size_v_;
}
inline void CameraImage::set_imager_size_v(::google::protobuf::int32 value) {
  set_has_imager_size_v();
  imager_size_v_ = value;
  // @@protoc_insertion_point(field_set:pb.SensorNearData.MFC.CameraImage.imager_size_v)
}

// optional uint32 o_image_pattern = 11 [default = 3];
inline bool CameraImage::has_o_image_pattern() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void CameraImage::set_has_o_image_pattern() {
  _has_bits_[0] |= 0x00000400u;
}
inline void CameraImage::clear_has_o_image_pattern() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void CameraImage::clear_o_image_pattern() {
  o_image_pattern_ = 3u;
  clear_has_o_image_pattern();
}
inline ::google::protobuf::uint32 CameraImage::o_image_pattern() const {
  // @@protoc_insertion_point(field_get:pb.SensorNearData.MFC.CameraImage.o_image_pattern)
  return o_image_pattern_;
}
inline void CameraImage::set_o_image_pattern(::google::protobuf::uint32 value) {
  set_has_o_image_pattern();
  o_image_pattern_ = value;
  // @@protoc_insertion_point(field_set:pb.SensorNearData.MFC.CameraImage.o_image_pattern)
}

// optional bool image_compressed = 12 [default = true];
inline bool CameraImage::has_image_compressed() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void CameraImage::set_has_image_compressed() {
  _has_bits_[0] |= 0x00000800u;
}
inline void CameraImage::clear_has_image_compressed() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void CameraImage::clear_image_compressed() {
  image_compressed_ = true;
  clear_has_image_compressed();
}
inline bool CameraImage::image_compressed() const {
  // @@protoc_insertion_point(field_get:pb.SensorNearData.MFC.CameraImage.image_compressed)
  return image_compressed_;
}
inline void CameraImage::set_image_compressed(bool value) {
  set_has_image_compressed();
  image_compressed_ = value;
  // @@protoc_insertion_point(field_set:pb.SensorNearData.MFC.CameraImage.image_compressed)
}

// optional uint32 image_compression_type = 13 [default = 2];
inline bool CameraImage::has_image_compression_type() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void CameraImage::set_has_image_compression_type() {
  _has_bits_[0] |= 0x00001000u;
}
inline void CameraImage::clear_has_image_compression_type() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void CameraImage::clear_image_compression_type() {
  image_compression_type_ = 2u;
  clear_has_image_compression_type();
}
inline ::google::protobuf::uint32 CameraImage::image_compression_type() const {
  // @@protoc_insertion_point(field_get:pb.SensorNearData.MFC.CameraImage.image_compression_type)
  return image_compression_type_;
}
inline void CameraImage::set_image_compression_type(::google::protobuf::uint32 value) {
  set_has_image_compression_type();
  image_compression_type_ = value;
  // @@protoc_insertion_point(field_set:pb.SensorNearData.MFC.CameraImage.image_compression_type)
}

// optional uint32 image_type = 14 [default = 3];
inline bool CameraImage::has_image_type() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void CameraImage::set_has_image_type() {
  _has_bits_[0] |= 0x00002000u;
}
inline void CameraImage::clear_has_image_type() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void CameraImage::clear_image_type() {
  image_type_ = 3u;
  clear_has_image_type();
}
inline ::google::protobuf::uint32 CameraImage::image_type() const {
  // @@protoc_insertion_point(field_get:pb.SensorNearData.MFC.CameraImage.image_type)
  return image_type_;
}
inline void CameraImage::set_image_type(::google::protobuf::uint32 value) {
  set_has_image_type();
  image_type_ = value;
  // @@protoc_insertion_point(field_set:pb.SensorNearData.MFC.CameraImage.image_type)
}

// optional uint32 byte_per_pixel = 15 [default = 1];
inline bool CameraImage::has_byte_per_pixel() const {
  return (_has_bits_[0] & 0x00004000u) != 0;
}
inline void CameraImage::set_has_byte_per_pixel() {
  _has_bits_[0] |= 0x00004000u;
}
inline void CameraImage::clear_has_byte_per_pixel() {
  _has_bits_[0] &= ~0x00004000u;
}
inline void CameraImage::clear_byte_per_pixel() {
  byte_per_pixel_ = 1u;
  clear_has_byte_per_pixel();
}
inline ::google::protobuf::uint32 CameraImage::byte_per_pixel() const {
  // @@protoc_insertion_point(field_get:pb.SensorNearData.MFC.CameraImage.byte_per_pixel)
  return byte_per_pixel_;
}
inline void CameraImage::set_byte_per_pixel(::google::protobuf::uint32 value) {
  set_has_byte_per_pixel();
  byte_per_pixel_ = value;
  // @@protoc_insertion_point(field_set:pb.SensorNearData.MFC.CameraImage.byte_per_pixel)
}

// optional uint32 bit_per_pixel = 16 [default = 8];
inline bool CameraImage::has_bit_per_pixel() const {
  return (_has_bits_[0] & 0x00008000u) != 0;
}
inline void CameraImage::set_has_bit_per_pixel() {
  _has_bits_[0] |= 0x00008000u;
}
inline void CameraImage::clear_has_bit_per_pixel() {
  _has_bits_[0] &= ~0x00008000u;
}
inline void CameraImage::clear_bit_per_pixel() {
  bit_per_pixel_ = 8u;
  clear_has_bit_per_pixel();
}
inline ::google::protobuf::uint32 CameraImage::bit_per_pixel() const {
  // @@protoc_insertion_point(field_get:pb.SensorNearData.MFC.CameraImage.bit_per_pixel)
  return bit_per_pixel_;
}
inline void CameraImage::set_bit_per_pixel(::google::protobuf::uint32 value) {
  set_has_bit_per_pixel();
  bit_per_pixel_ = value;
  // @@protoc_insertion_point(field_set:pb.SensorNearData.MFC.CameraImage.bit_per_pixel)
}

// optional bytes image_payload = 17;
inline bool CameraImage::has_image_payload() const {
  return (_has_bits_[0] & 0x00010000u) != 0;
}
inline void CameraImage::set_has_image_payload() {
  _has_bits_[0] |= 0x00010000u;
}
inline void CameraImage::clear_has_image_payload() {
  _has_bits_[0] &= ~0x00010000u;
}
inline void CameraImage::clear_image_payload() {
  if (image_payload_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    image_payload_->clear();
  }
  clear_has_image_payload();
}
inline const ::std::string& CameraImage::image_payload() const {
  // @@protoc_insertion_point(field_get:pb.SensorNearData.MFC.CameraImage.image_payload)
  return *image_payload_;
}
inline void CameraImage::set_image_payload(const ::std::string& value) {
  set_has_image_payload();
  if (image_payload_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    image_payload_ = new ::std::string;
  }
  image_payload_->assign(value);
  // @@protoc_insertion_point(field_set:pb.SensorNearData.MFC.CameraImage.image_payload)
}
inline void CameraImage::set_image_payload(const char* value) {
  set_has_image_payload();
  if (image_payload_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    image_payload_ = new ::std::string;
  }
  image_payload_->assign(value);
  // @@protoc_insertion_point(field_set_char:pb.SensorNearData.MFC.CameraImage.image_payload)
}
inline void CameraImage::set_image_payload(const void* value, size_t size) {
  set_has_image_payload();
  if (image_payload_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    image_payload_ = new ::std::string;
  }
  image_payload_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:pb.SensorNearData.MFC.CameraImage.image_payload)
}
inline ::std::string* CameraImage::mutable_image_payload() {
  set_has_image_payload();
  if (image_payload_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    image_payload_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:pb.SensorNearData.MFC.CameraImage.image_payload)
  return image_payload_;
}
inline ::std::string* CameraImage::release_image_payload() {
  clear_has_image_payload();
  if (image_payload_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = image_payload_;
    image_payload_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void CameraImage::set_allocated_image_payload(::std::string* image_payload) {
  if (image_payload_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete image_payload_;
  }
  if (image_payload) {
    set_has_image_payload();
    image_payload_ = image_payload;
  } else {
    clear_has_image_payload();
    image_payload_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:pb.SensorNearData.MFC.CameraImage.image_payload)
}

// optional bytes bmp_image = 18;
inline bool CameraImage::has_bmp_image() const {
  return (_has_bits_[0] & 0x00020000u) != 0;
}
inline void CameraImage::set_has_bmp_image() {
  _has_bits_[0] |= 0x00020000u;
}
inline void CameraImage::clear_has_bmp_image() {
  _has_bits_[0] &= ~0x00020000u;
}
inline void CameraImage::clear_bmp_image() {
  if (bmp_image_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    bmp_image_->clear();
  }
  clear_has_bmp_image();
}
inline const ::std::string& CameraImage::bmp_image() const {
  // @@protoc_insertion_point(field_get:pb.SensorNearData.MFC.CameraImage.bmp_image)
  return *bmp_image_;
}
inline void CameraImage::set_bmp_image(const ::std::string& value) {
  set_has_bmp_image();
  if (bmp_image_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    bmp_image_ = new ::std::string;
  }
  bmp_image_->assign(value);
  // @@protoc_insertion_point(field_set:pb.SensorNearData.MFC.CameraImage.bmp_image)
}
inline void CameraImage::set_bmp_image(const char* value) {
  set_has_bmp_image();
  if (bmp_image_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    bmp_image_ = new ::std::string;
  }
  bmp_image_->assign(value);
  // @@protoc_insertion_point(field_set_char:pb.SensorNearData.MFC.CameraImage.bmp_image)
}
inline void CameraImage::set_bmp_image(const void* value, size_t size) {
  set_has_bmp_image();
  if (bmp_image_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    bmp_image_ = new ::std::string;
  }
  bmp_image_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:pb.SensorNearData.MFC.CameraImage.bmp_image)
}
inline ::std::string* CameraImage::mutable_bmp_image() {
  set_has_bmp_image();
  if (bmp_image_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    bmp_image_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:pb.SensorNearData.MFC.CameraImage.bmp_image)
  return bmp_image_;
}
inline ::std::string* CameraImage::release_bmp_image() {
  clear_has_bmp_image();
  if (bmp_image_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = bmp_image_;
    bmp_image_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void CameraImage::set_allocated_bmp_image(::std::string* bmp_image) {
  if (bmp_image_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete bmp_image_;
  }
  if (bmp_image) {
    set_has_bmp_image();
    bmp_image_ = bmp_image;
  } else {
    clear_has_bmp_image();
    bmp_image_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:pb.SensorNearData.MFC.CameraImage.bmp_image)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace MFC
}  // namespace SensorNearData
}  // namespace pb

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_CameraImage_2eproto__INCLUDED
