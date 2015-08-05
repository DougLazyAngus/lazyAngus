#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlInputStream
struct XmlInputStream_t3185;
// System.Text.Encoding
struct Encoding_t692;
// System.IO.Stream
struct Stream_t51;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.Xml.XmlInputStream::.ctor(System.IO.Stream)
extern "C" void XmlInputStream__ctor_m10723 (XmlInputStream_t3185 * __this, Stream_t51 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::.cctor()
extern "C" void XmlInputStream__cctor_m10724 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlInputStream::GetStringFromBytes(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* XmlInputStream_GetStringFromBytes_m10725 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::Initialize(System.IO.Stream)
extern "C" void XmlInputStream_Initialize_m10726 (XmlInputStream_t3185 * __this, Stream_t51 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlInputStream::ReadByteSpecial()
extern "C" int32_t XmlInputStream_ReadByteSpecial_m10727 (XmlInputStream_t3185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlInputStream::SkipWhitespace()
extern "C" int32_t XmlInputStream_SkipWhitespace_m10728 (XmlInputStream_t3185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Xml.XmlInputStream::get_ActualEncoding()
extern "C" Encoding_t692 * XmlInputStream_get_ActualEncoding_m10729 (XmlInputStream_t3185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlInputStream::get_CanRead()
extern "C" bool XmlInputStream_get_CanRead_m10730 (XmlInputStream_t3185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlInputStream::get_CanSeek()
extern "C" bool XmlInputStream_get_CanSeek_m10731 (XmlInputStream_t3185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlInputStream::get_CanWrite()
extern "C" bool XmlInputStream_get_CanWrite_m10732 (XmlInputStream_t3185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Xml.XmlInputStream::get_Length()
extern "C" int64_t XmlInputStream_get_Length_m10733 (XmlInputStream_t3185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Xml.XmlInputStream::get_Position()
extern "C" int64_t XmlInputStream_get_Position_m10734 (XmlInputStream_t3185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::set_Position(System.Int64)
extern "C" void XmlInputStream_set_Position_m10735 (XmlInputStream_t3185 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::Close()
extern "C" void XmlInputStream_Close_m10736 (XmlInputStream_t3185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::Flush()
extern "C" void XmlInputStream_Flush_m10737 (XmlInputStream_t3185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t XmlInputStream_Read_m10738 (XmlInputStream_t3185 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlInputStream::ReadByte()
extern "C" int32_t XmlInputStream_ReadByte_m10739 (XmlInputStream_t3185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Xml.XmlInputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t XmlInputStream_Seek_m10740 (XmlInputStream_t3185 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::SetLength(System.Int64)
extern "C" void XmlInputStream_SetLength_m10741 (XmlInputStream_t3185 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void XmlInputStream_Write_m10742 (XmlInputStream_t3185 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
