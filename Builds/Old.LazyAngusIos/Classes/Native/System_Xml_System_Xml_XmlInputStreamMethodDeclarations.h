#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlInputStream
struct XmlInputStream_t2055;
// System.Text.Encoding
struct Encoding_t576;
// System.IO.Stream
struct Stream_t24;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.Xml.XmlInputStream::.ctor(System.IO.Stream)
extern "C" void XmlInputStream__ctor_m9815 (XmlInputStream_t2055 * __this, Stream_t24 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::.cctor()
extern "C" void XmlInputStream__cctor_m9816 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlInputStream::GetStringFromBytes(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* XmlInputStream_GetStringFromBytes_m9817 (Object_t * __this /* static, unused */, ByteU5BU5D_t36* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::Initialize(System.IO.Stream)
extern "C" void XmlInputStream_Initialize_m9818 (XmlInputStream_t2055 * __this, Stream_t24 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlInputStream::ReadByteSpecial()
extern "C" int32_t XmlInputStream_ReadByteSpecial_m9819 (XmlInputStream_t2055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlInputStream::SkipWhitespace()
extern "C" int32_t XmlInputStream_SkipWhitespace_m9820 (XmlInputStream_t2055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Xml.XmlInputStream::get_ActualEncoding()
extern "C" Encoding_t576 * XmlInputStream_get_ActualEncoding_m9821 (XmlInputStream_t2055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlInputStream::get_CanRead()
extern "C" bool XmlInputStream_get_CanRead_m9822 (XmlInputStream_t2055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlInputStream::get_CanSeek()
extern "C" bool XmlInputStream_get_CanSeek_m9823 (XmlInputStream_t2055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlInputStream::get_CanWrite()
extern "C" bool XmlInputStream_get_CanWrite_m9824 (XmlInputStream_t2055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Xml.XmlInputStream::get_Length()
extern "C" int64_t XmlInputStream_get_Length_m9825 (XmlInputStream_t2055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Xml.XmlInputStream::get_Position()
extern "C" int64_t XmlInputStream_get_Position_m9826 (XmlInputStream_t2055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::set_Position(System.Int64)
extern "C" void XmlInputStream_set_Position_m9827 (XmlInputStream_t2055 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::Close()
extern "C" void XmlInputStream_Close_m9828 (XmlInputStream_t2055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::Flush()
extern "C" void XmlInputStream_Flush_m9829 (XmlInputStream_t2055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t XmlInputStream_Read_m9830 (XmlInputStream_t2055 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlInputStream::ReadByte()
extern "C" int32_t XmlInputStream_ReadByte_m9831 (XmlInputStream_t2055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Xml.XmlInputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t XmlInputStream_Seek_m9832 (XmlInputStream_t2055 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::SetLength(System.Int64)
extern "C" void XmlInputStream_SetLength_m9833 (XmlInputStream_t2055 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlInputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void XmlInputStream_Write_m9834 (XmlInputStream_t2055 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
