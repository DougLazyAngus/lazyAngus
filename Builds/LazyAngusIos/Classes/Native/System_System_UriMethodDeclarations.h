#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Uri
struct Uri_t757;
// System.String
struct String_t;
// System.UriParser
struct UriParser_t4174;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t697;
// System.IO.MemoryStream
struct MemoryStream_t65;
// System.Text.Encoding
struct Encoding_t739;
// System.UriHostNameType
#include "System_System_UriHostNameType.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.UriKind
#include "System_System_UriKind.h"
// System.UriPartial
#include "System_System_UriPartial.h"

// System.Void System.Uri::.ctor(System.String)
extern "C" void Uri__ctor_m7464 (Uri_t757 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Uri__ctor_m14967 (Uri_t757 * __this, SerializationInfo_t2919 * ___serializationInfo, StreamingContext_t2920  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.String,System.UriKind)
extern "C" void Uri__ctor_m7327 (Uri_t757 * __this, String_t* ___uriString, int32_t ___uriKind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Uri,System.Uri)
extern "C" void Uri__ctor_m7471 (Uri_t757 * __this, Uri_t757 * ___baseUri, Uri_t757 * ___relativeUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.String,System.Boolean)
extern "C" void Uri__ctor_m14968 (Uri_t757 * __this, String_t* ___uriString, bool ___dontEscape, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Uri,System.String)
extern "C" void Uri__ctor_m7307 (Uri_t757 * __this, Uri_t757 * ___baseUri, String_t* ___relativeUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.cctor()
extern "C" void Uri__cctor_m14969 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m14970 (Uri_t757 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::Merge(System.Uri,System.String)
extern "C" void Uri_Merge_m14971 (Uri_t757 * __this, Uri_t757 * ___baseUri, String_t* ___relativeUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_AbsolutePath()
extern "C" String_t* Uri_get_AbsolutePath_m11498 (Uri_t757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_AbsoluteUri()
extern "C" String_t* Uri_get_AbsoluteUri_m7320 (Uri_t757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Authority()
extern "C" String_t* Uri_get_Authority_m14972 (Uri_t757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Fragment()
extern "C" String_t* Uri_get_Fragment_m7321 (Uri_t757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Host()
extern "C" String_t* Uri_get_Host_m13191 (Uri_t757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriHostNameType System.Uri::get_HostNameType()
extern "C" int32_t Uri_get_HostNameType_m14973 (Uri_t757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsDefaultPort()
extern "C" bool Uri_get_IsDefaultPort_m14974 (Uri_t757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsFile()
extern "C" bool Uri_get_IsFile_m14975 (Uri_t757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsLoopback()
extern "C" bool Uri_get_IsLoopback_m14976 (Uri_t757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsUnc()
extern "C" bool Uri_get_IsUnc_m14977 (Uri_t757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_LocalPath()
extern "C" String_t* Uri_get_LocalPath_m11499 (Uri_t757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_PathAndQuery()
extern "C" String_t* Uri_get_PathAndQuery_m14978 (Uri_t757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::get_Port()
extern "C" int32_t Uri_get_Port_m14979 (Uri_t757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Query()
extern "C" String_t* Uri_get_Query_m7322 (Uri_t757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Scheme()
extern "C" String_t* Uri_get_Scheme_m11497 (Uri_t757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsAbsoluteUri()
extern "C" bool Uri_get_IsAbsoluteUri_m11496 (Uri_t757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_OriginalString()
extern "C" String_t* Uri_get_OriginalString_m14980 (Uri_t757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriHostNameType System.Uri::CheckHostName(System.String)
extern "C" int32_t Uri_CheckHostName_m14981 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsIPv4Address(System.String)
extern "C" bool Uri_IsIPv4Address_m14982 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsDomainAddress(System.String)
extern "C" bool Uri_IsDomainAddress_m14983 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::CheckSchemeName(System.String)
extern "C" bool Uri_CheckSchemeName_m14984 (Object_t * __this /* static, unused */, String_t* ___schemeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsAlpha(System.Char)
extern "C" bool Uri_IsAlpha_m14985 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::Equals(System.Object)
extern "C" bool Uri_Equals_m14986 (Uri_t757 * __this, Object_t * ___comparant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::InternalEquals(System.Uri)
extern "C" bool Uri_InternalEquals_m14987 (Uri_t757 * __this, Uri_t757 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetHashCode()
extern "C" int32_t Uri_GetHashCode_m14988 (Uri_t757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetLeftPart(System.UriPartial)
extern "C" String_t* Uri_GetLeftPart_m14989 (Uri_t757 * __this, int32_t ___part, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::FromHex(System.Char)
extern "C" int32_t Uri_FromHex_m14990 (Object_t * __this /* static, unused */, uint16_t ___digit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::HexEscape(System.Char)
extern "C" String_t* Uri_HexEscape_m14991 (Object_t * __this /* static, unused */, uint16_t ___character, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsHexDigit(System.Char)
extern "C" bool Uri_IsHexDigit_m14992 (Object_t * __this /* static, unused */, uint16_t ___digit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsHexEncoding(System.String,System.Int32)
extern "C" bool Uri_IsHexEncoding_m14993 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::AppendQueryAndFragment(System.String&)
extern "C" void Uri_AppendQueryAndFragment_m14994 (Uri_t757 * __this, String_t** ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ToString()
extern "C" String_t* Uri_ToString_m14995 (Uri_t757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeString(System.String)
extern "C" String_t* Uri_EscapeString_m14996 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C" String_t* Uri_EscapeString_m14997 (Object_t * __this /* static, unused */, String_t* ___str, bool ___escapeReserved, bool ___escapeHex, bool ___escapeBrackets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseUri(System.UriKind)
extern "C" void Uri_ParseUri_m14998 (Uri_t757 * __this, int32_t ___kind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Unescape(System.String)
extern "C" String_t* Uri_Unescape_m14999 (Uri_t757 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Unescape(System.String,System.Boolean)
extern "C" String_t* Uri_Unescape_m15000 (Object_t * __this /* static, unused */, String_t* ___str, bool ___excludeSpecial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseAsWindowsUNC(System.String)
extern "C" void Uri_ParseAsWindowsUNC_m15001 (Uri_t757 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
extern "C" String_t* Uri_ParseAsWindowsAbsoluteFilePath_m15002 (Uri_t757 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseAsUnixAbsoluteFilePath(System.String)
extern "C" void Uri_ParseAsUnixAbsoluteFilePath_m15003 (Uri_t757 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::Parse(System.UriKind,System.String)
extern "C" void Uri_Parse_m15004 (Uri_t757 * __this, int32_t ___kind, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ParseNoExceptions(System.UriKind,System.String)
extern "C" String_t* Uri_ParseNoExceptions_m15005 (Uri_t757 * __this, int32_t ___kind, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::CompactEscaped(System.String)
extern "C" bool Uri_CompactEscaped_m15006 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Reduce(System.String,System.Boolean)
extern "C" String_t* Uri_Reduce_m15007 (Object_t * __this /* static, unused */, String_t* ___path, bool ___compact_escaped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Uri::HexUnescapeMultiByte(System.String,System.Int32&,System.Char&)
extern "C" uint16_t Uri_HexUnescapeMultiByte_m15008 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t* ___index, uint16_t* ___surrogate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetSchemeDelimiter(System.String)
extern "C" String_t* Uri_GetSchemeDelimiter_m15009 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetDefaultPort(System.String)
extern "C" int32_t Uri_GetDefaultPort_m15010 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetOpaqueWiseSchemeDelimiter()
extern "C" String_t* Uri_GetOpaqueWiseSchemeDelimiter_m15011 (Uri_t757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsPredefinedScheme(System.String)
extern "C" bool Uri_IsPredefinedScheme_m15012 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriParser System.Uri::get_Parser()
extern "C" UriParser_t4174 * Uri_get_Parser_m15013 (Uri_t757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::NeedToEscapeDataChar(System.Char)
extern "C" bool Uri_NeedToEscapeDataChar_m15014 (Object_t * __this /* static, unused */, uint16_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeDataString(System.String)
extern "C" String_t* Uri_EscapeDataString_m3939 (Object_t * __this /* static, unused */, String_t* ___stringToEscape, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::NeedToEscapeUriChar(System.Char)
extern "C" bool Uri_NeedToEscapeUriChar_m15015 (Object_t * __this /* static, unused */, uint16_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeUriString(System.String)
extern "C" String_t* Uri_EscapeUriString_m15016 (Object_t * __this /* static, unused */, String_t* ___stringToEscape, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::UnescapeDataString(System.String)
extern "C" String_t* Uri_UnescapeDataString_m7477 (Object_t * __this /* static, unused */, String_t* ___stringToUnescape, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetInt(System.Byte)
extern "C" int32_t Uri_GetInt_m15017 (Object_t * __this /* static, unused */, uint8_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetChar(System.String,System.Int32,System.Int32)
extern "C" int32_t Uri_GetChar_m15018 (Object_t * __this /* static, unused */, String_t* ___str, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.Uri::GetChars(System.IO.MemoryStream,System.Text.Encoding)
extern "C" CharU5BU5D_t697* Uri_GetChars_m15019 (Object_t * __this /* static, unused */, MemoryStream_t65 * ___b, Encoding_t739 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::EnsureAbsoluteUri()
extern "C" void Uri_EnsureAbsoluteUri_m15020 (Uri_t757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
extern "C" bool Uri_op_Equality_m11486 (Object_t * __this /* static, unused */, Uri_t757 * ___u1, Uri_t757 * ___u2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::op_Inequality(System.Uri,System.Uri)
extern "C" bool Uri_op_Inequality_m11451 (Object_t * __this /* static, unused */, Uri_t757 * ___u1, Uri_t757 * ___u2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
