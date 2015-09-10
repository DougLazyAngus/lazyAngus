#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityElement
struct SecurityElement_t4838;
// System.Collections.Hashtable
struct Hashtable_t721;
// System.Collections.ArrayList
struct ArrayList_t723;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t261;
// System.Security.SecurityElement/SecurityAttribute
struct SecurityAttribute_t5247;

// System.Void System.Security.SecurityElement::.ctor(System.String)
extern "C" void SecurityElement__ctor_m23270 (SecurityElement_t4838 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::.ctor(System.String,System.String)
extern "C" void SecurityElement__ctor_m23271 (SecurityElement_t4838 * __this, String_t* ___tag, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::.cctor()
extern "C" void SecurityElement__cctor_m23272 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Security.SecurityElement::get_Attributes()
extern "C" Hashtable_t721 * SecurityElement_get_Attributes_m23273 (SecurityElement_t4838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityElement::get_Children()
extern "C" ArrayList_t723 * SecurityElement_get_Children_m23274 (SecurityElement_t4838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::get_Tag()
extern "C" String_t* SecurityElement_get_Tag_m23275 (SecurityElement_t4838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::set_Text(System.String)
extern "C" void SecurityElement_set_Text_m23276 (SecurityElement_t4838 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::AddAttribute(System.String,System.String)
extern "C" void SecurityElement_AddAttribute_m23277 (SecurityElement_t4838 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::AddChild(System.Security.SecurityElement)
extern "C" void SecurityElement_AddChild_m23278 (SecurityElement_t4838 * __this, SecurityElement_t4838 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::Attribute(System.String)
extern "C" String_t* SecurityElement_Attribute_m23279 (SecurityElement_t4838 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::Escape(System.String)
extern "C" String_t* SecurityElement_Escape_m23280 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::Unescape(System.String)
extern "C" String_t* SecurityElement_Unescape_m23281 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.SecurityElement::FromString(System.String)
extern "C" SecurityElement_t4838 * SecurityElement_FromString_m23282 (Object_t * __this /* static, unused */, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidAttributeName(System.String)
extern "C" bool SecurityElement_IsValidAttributeName_m23283 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidAttributeValue(System.String)
extern "C" bool SecurityElement_IsValidAttributeValue_m23284 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidTag(System.String)
extern "C" bool SecurityElement_IsValidTag_m23285 (Object_t * __this /* static, unused */, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidText(System.String)
extern "C" bool SecurityElement_IsValidText_m23286 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.SecurityElement::SearchForChildByTag(System.String)
extern "C" SecurityElement_t4838 * SecurityElement_SearchForChildByTag_m23287 (SecurityElement_t4838 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::ToString()
extern "C" String_t* SecurityElement_ToString_m23288 (SecurityElement_t4838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::ToXml(System.Text.StringBuilder&,System.Int32)
extern "C" void SecurityElement_ToXml_m23289 (SecurityElement_t4838 * __this, StringBuilder_t261 ** ___s, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement/SecurityAttribute System.Security.SecurityElement::GetAttribute(System.String)
extern "C" SecurityAttribute_t5247 * SecurityElement_GetAttribute_m23290 (SecurityElement_t4838 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
