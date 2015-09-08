#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlConvert
struct XmlConvert_t3521;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t75;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Char[]
struct CharU5BU5D_t715;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Globalization.DateTimeStyles
#include "mscorlib_System_Globalization_DateTimeStyles.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Xml.XmlConvert::.cctor()
extern "C" void XmlConvert__cctor_m13035 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::EncodeLocalName(System.String)
extern "C" String_t* XmlConvert_EncodeLocalName_m13036 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlConvert::IsInvalid(System.Char,System.Boolean)
extern "C" bool XmlConvert_IsInvalid_m13037 (Object_t * __this /* static, unused */, uint16_t ___c, bool ___firstOnlyLetter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::EncodeName(System.String,System.Boolean)
extern "C" String_t* XmlConvert_EncodeName_m13038 (Object_t * __this /* static, unused */, String_t* ___name, bool ___nmtoken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::EncodeName(System.String)
extern "C" String_t* XmlConvert_EncodeName_m13039 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlConvert::ToBoolean(System.String)
extern "C" bool XmlConvert_ToBoolean_m13040 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Xml.XmlConvert::ToByte(System.String)
extern "C" uint8_t XmlConvert_ToByte_m13041 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Xml.XmlConvert::ToDateTime(System.String)
extern "C" DateTime_t287  XmlConvert_ToDateTime_m13042 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Xml.XmlConvert::ToDateTime(System.String,System.String[])
extern "C" DateTime_t287  XmlConvert_ToDateTime_m13043 (Object_t * __this /* static, unused */, String_t* ___s, StringU5BU5D_t75* ___formats, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Xml.XmlConvert::ToDateTime(System.String,System.String[],System.Globalization.DateTimeStyles)
extern "C" DateTime_t287  XmlConvert_ToDateTime_m13044 (Object_t * __this /* static, unused */, String_t* ___s, StringU5BU5D_t75* ___formats, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.XmlConvert::ToDecimal(System.String)
extern "C" Decimal_t763  XmlConvert_ToDecimal_m13045 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XmlConvert::ToDouble(System.String)
extern "C" double XmlConvert_ToDouble_m13046 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Xml.XmlConvert::TryParseStringFloatConstants(System.String)
extern "C" float XmlConvert_TryParseStringFloatConstants_m13047 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlConvert::TryParseStringConstant(System.String,System.String,System.Int32,System.Int32)
extern "C" bool XmlConvert_TryParseStringConstant_m13048 (Object_t * __this /* static, unused */, String_t* ___format, String_t* ___s, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Xml.XmlConvert::ToInt16(System.String)
extern "C" int16_t XmlConvert_ToInt16_m13049 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlConvert::ToInt32(System.String)
extern "C" int32_t XmlConvert_ToInt32_m13050 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Xml.XmlConvert::ToInt64(System.String)
extern "C" int64_t XmlConvert_ToInt64_m13051 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Xml.XmlConvert::ToSByte(System.String)
extern "C" int8_t XmlConvert_ToSByte_m13052 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Xml.XmlConvert::ToSingle(System.String)
extern "C" float XmlConvert_ToSingle_m13053 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Xml.XmlConvert::ToTimeSpan(System.String)
extern "C" TimeSpan_t334  XmlConvert_ToTimeSpan_m13054 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Xml.XmlConvert::ToUInt16(System.String)
extern "C" uint16_t XmlConvert_ToUInt16_m13055 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Xml.XmlConvert::ToUInt32(System.String)
extern "C" uint32_t XmlConvert_ToUInt32_m13056 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Xml.XmlConvert::ToUInt64(System.String)
extern "C" uint64_t XmlConvert_ToUInt64_m13057 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::VerifyName(System.String)
extern "C" String_t* XmlConvert_VerifyName_m13058 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::VerifyNCName(System.String)
extern "C" String_t* XmlConvert_VerifyNCName_m13059 (Object_t * __this /* static, unused */, String_t* ___ncname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Xml.XmlConvert::FromBinHexString(System.String)
extern "C" ByteU5BU5D_t66* XmlConvert_FromBinHexString_m13060 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlConvert::FromBinHexString(System.Char[],System.Int32,System.Int32,System.Byte[])
extern "C" int32_t XmlConvert_FromBinHexString_m13061 (Object_t * __this /* static, unused */, CharU5BU5D_t715* ___chars, int32_t ___offset, int32_t ___charLength, ByteU5BU5D_t66* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
