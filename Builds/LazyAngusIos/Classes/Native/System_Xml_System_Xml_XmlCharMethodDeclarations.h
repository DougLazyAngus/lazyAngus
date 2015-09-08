#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlChar
struct XmlChar_t3507;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t712;

// System.Void System.Xml.XmlChar::.cctor()
extern "C" void XmlChar__cctor_m12858 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsWhitespace(System.Int32)
extern "C" bool XmlChar_IsWhitespace_m12859 (Object_t * __this /* static, unused */, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsWhitespace(System.String)
extern "C" bool XmlChar_IsWhitespace_m12860 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlChar::IndexOfNonWhitespace(System.String)
extern "C" int32_t XmlChar_IndexOfNonWhitespace_m12861 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsFirstNameChar(System.Int32)
extern "C" bool XmlChar_IsFirstNameChar_m12862 (Object_t * __this /* static, unused */, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsInvalid(System.Int32)
extern "C" bool XmlChar_IsInvalid_m12863 (Object_t * __this /* static, unused */, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlChar::IndexOfInvalid(System.String,System.Boolean)
extern "C" int32_t XmlChar_IndexOfInvalid_m12864 (Object_t * __this /* static, unused */, String_t* ___s, bool ___allowSurrogate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlChar::IndexOfInvalid(System.Char[],System.Int32,System.Int32,System.Boolean)
extern "C" int32_t XmlChar_IndexOfInvalid_m12865 (Object_t * __this /* static, unused */, CharU5BU5D_t712* ___s, int32_t ___start, int32_t ___length, bool ___allowSurrogate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsNameChar(System.Int32)
extern "C" bool XmlChar_IsNameChar_m12866 (Object_t * __this /* static, unused */, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsNCNameChar(System.Int32)
extern "C" bool XmlChar_IsNCNameChar_m12867 (Object_t * __this /* static, unused */, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsName(System.String)
extern "C" bool XmlChar_IsName_m12868 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsNCName(System.String)
extern "C" bool XmlChar_IsNCName_m12869 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsNmToken(System.String)
extern "C" bool XmlChar_IsNmToken_m12870 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsPubidChar(System.Int32)
extern "C" bool XmlChar_IsPubidChar_m12871 (Object_t * __this /* static, unused */, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsValidIANAEncoding(System.String)
extern "C" bool XmlChar_IsValidIANAEncoding_m12872 (Object_t * __this /* static, unused */, String_t* ___ianaEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlChar::GetPredefinedEntity(System.String)
extern "C" int32_t XmlChar_GetPredefinedEntity_m12873 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
