﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlChar
struct XmlChar_t1616;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t608;

// System.Void System.Xml.XmlChar::.cctor()
extern "C" void XmlChar__cctor_m7837 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsWhitespace(System.Int32)
extern "C" bool XmlChar_IsWhitespace_m7838 (Object_t * __this /* static, unused */, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsWhitespace(System.String)
extern "C" bool XmlChar_IsWhitespace_m7839 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlChar::IndexOfNonWhitespace(System.String)
extern "C" int32_t XmlChar_IndexOfNonWhitespace_m7840 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsFirstNameChar(System.Int32)
extern "C" bool XmlChar_IsFirstNameChar_m7841 (Object_t * __this /* static, unused */, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsInvalid(System.Int32)
extern "C" bool XmlChar_IsInvalid_m7842 (Object_t * __this /* static, unused */, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlChar::IndexOfInvalid(System.String,System.Boolean)
extern "C" int32_t XmlChar_IndexOfInvalid_m7843 (Object_t * __this /* static, unused */, String_t* ___s, bool ___allowSurrogate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlChar::IndexOfInvalid(System.Char[],System.Int32,System.Int32,System.Boolean)
extern "C" int32_t XmlChar_IndexOfInvalid_m7844 (Object_t * __this /* static, unused */, CharU5BU5D_t608* ___s, int32_t ___start, int32_t ___length, bool ___allowSurrogate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsNameChar(System.Int32)
extern "C" bool XmlChar_IsNameChar_m7845 (Object_t * __this /* static, unused */, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsName(System.String)
extern "C" bool XmlChar_IsName_m7846 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsPubidChar(System.Int32)
extern "C" bool XmlChar_IsPubidChar_m7847 (Object_t * __this /* static, unused */, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsValidIANAEncoding(System.String)
extern "C" bool XmlChar_IsValidIANAEncoding_m7848 (Object_t * __this /* static, unused */, String_t* ___ianaEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlChar::GetPredefinedEntity(System.String)
extern "C" int32_t XmlChar_GetPredefinedEntity_m7849 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
