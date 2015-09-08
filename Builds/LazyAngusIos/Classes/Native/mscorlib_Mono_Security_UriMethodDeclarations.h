#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Uri
struct Uri_t4796;
// System.String
struct String_t;
// System.Object
struct Object_t;
// Mono.Security.UriPartial
#include "mscorlib_Mono_Security_UriPartial.h"

// System.Void Mono.Security.Uri::.ctor(System.String)
extern "C" void Uri__ctor_m19574 (Uri_t4796 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::.ctor(System.String,System.Boolean)
extern "C" void Uri__ctor_m19575 (Uri_t4796 * __this, String_t* ___uriString, bool ___dontEscape, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::.ctor(System.String,System.Boolean,System.Boolean)
extern "C" void Uri__ctor_m19576 (Uri_t4796 * __this, String_t* ___uriString, bool ___dontEscape, bool ___reduce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::.cctor()
extern "C" void Uri__cctor_m19577 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::get_AbsolutePath()
extern "C" String_t* Uri_get_AbsolutePath_m19578 (Uri_t4796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::get_Host()
extern "C" String_t* Uri_get_Host_m19579 (Uri_t4796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::get_IsFile()
extern "C" bool Uri_get_IsFile_m19580 (Uri_t4796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::get_IsLoopback()
extern "C" bool Uri_get_IsLoopback_m19581 (Uri_t4796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::get_IsUnc()
extern "C" bool Uri_get_IsUnc_m19582 (Uri_t4796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::get_LocalPath()
extern "C" String_t* Uri_get_LocalPath_m19583 (Uri_t4796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::get_Scheme()
extern "C" String_t* Uri_get_Scheme_m19584 (Uri_t4796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::Equals(System.Object)
extern "C" bool Uri_Equals_m19585 (Uri_t4796 * __this, Object_t * ___comparant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Uri::GetHashCode()
extern "C" int32_t Uri_GetHashCode_m19586 (Uri_t4796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::GetLeftPart(Mono.Security.UriPartial)
extern "C" String_t* Uri_GetLeftPart_m19587 (Uri_t4796 * __this, int32_t ___part, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Uri::FromHex(System.Char)
extern "C" int32_t Uri_FromHex_m19588 (Object_t * __this /* static, unused */, uint16_t ___digit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::HexEscape(System.Char)
extern "C" String_t* Uri_HexEscape_m19589 (Object_t * __this /* static, unused */, uint16_t ___character, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Mono.Security.Uri::HexUnescape(System.String,System.Int32&)
extern "C" uint16_t Uri_HexUnescape_m19590 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::IsHexDigit(System.Char)
extern "C" bool Uri_IsHexDigit_m19591 (Object_t * __this /* static, unused */, uint16_t ___digit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::IsHexEncoding(System.String,System.Int32)
extern "C" bool Uri_IsHexEncoding_m19592 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::ToString()
extern "C" String_t* Uri_ToString_m19593 (Uri_t4796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::EscapeString(System.String)
extern "C" String_t* Uri_EscapeString_m19594 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C" String_t* Uri_EscapeString_m19595 (Object_t * __this /* static, unused */, String_t* ___str, bool ___escapeReserved, bool ___escapeHex, bool ___escapeBrackets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::Parse()
extern "C" void Uri_Parse_m19596 (Uri_t4796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::Unescape(System.String)
extern "C" String_t* Uri_Unescape_m19597 (Uri_t4796 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::Unescape(System.String,System.Boolean)
extern "C" String_t* Uri_Unescape_m19598 (Uri_t4796 * __this, String_t* ___str, bool ___excludeSharp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::ParseAsWindowsUNC(System.String)
extern "C" void Uri_ParseAsWindowsUNC_m19599 (Uri_t4796 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
extern "C" void Uri_ParseAsWindowsAbsoluteFilePath_m19600 (Uri_t4796 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::ParseAsUnixAbsoluteFilePath(System.String)
extern "C" void Uri_ParseAsUnixAbsoluteFilePath_m19601 (Uri_t4796 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::Parse(System.String)
extern "C" void Uri_Parse_m19602 (Uri_t4796 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::Reduce(System.String)
extern "C" String_t* Uri_Reduce_m19603 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::GetSchemeDelimiter(System.String)
extern "C" String_t* Uri_GetSchemeDelimiter_m19604 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Uri::GetDefaultPort(System.String)
extern "C" int32_t Uri_GetDefaultPort_m19605 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::GetOpaqueWiseSchemeDelimiter()
extern "C" String_t* Uri_GetOpaqueWiseSchemeDelimiter_m19606 (Uri_t4796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::IsPredefinedScheme(System.String)
extern "C" bool Uri_IsPredefinedScheme_m19607 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
