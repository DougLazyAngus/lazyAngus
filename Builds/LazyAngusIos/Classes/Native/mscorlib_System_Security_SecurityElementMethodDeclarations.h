#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityElement
struct SecurityElement_t2392;
// System.Collections.ArrayList
struct ArrayList_t1554;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t219;
// System.Security.SecurityElement/SecurityAttribute
struct SecurityAttribute_t2704;

// System.Void System.Security.SecurityElement::.ctor(System.String)
extern "C" void SecurityElement__ctor_m15295 (SecurityElement_t2392 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::.ctor(System.String,System.String)
extern "C" void SecurityElement__ctor_m15296 (SecurityElement_t2392 * __this, String_t* ___tag, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::.cctor()
extern "C" void SecurityElement__cctor_m15297 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityElement::get_Children()
extern "C" ArrayList_t1554 * SecurityElement_get_Children_m15298 (SecurityElement_t2392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::get_Tag()
extern "C" String_t* SecurityElement_get_Tag_m15299 (SecurityElement_t2392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::set_Text(System.String)
extern "C" void SecurityElement_set_Text_m15300 (SecurityElement_t2392 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::AddAttribute(System.String,System.String)
extern "C" void SecurityElement_AddAttribute_m15301 (SecurityElement_t2392 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::AddChild(System.Security.SecurityElement)
extern "C" void SecurityElement_AddChild_m15302 (SecurityElement_t2392 * __this, SecurityElement_t2392 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::Escape(System.String)
extern "C" String_t* SecurityElement_Escape_m15303 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::Unescape(System.String)
extern "C" String_t* SecurityElement_Unescape_m15304 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidAttributeName(System.String)
extern "C" bool SecurityElement_IsValidAttributeName_m15305 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidAttributeValue(System.String)
extern "C" bool SecurityElement_IsValidAttributeValue_m15306 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidTag(System.String)
extern "C" bool SecurityElement_IsValidTag_m15307 (Object_t * __this /* static, unused */, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidText(System.String)
extern "C" bool SecurityElement_IsValidText_m15308 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.SecurityElement::SearchForChildByTag(System.String)
extern "C" SecurityElement_t2392 * SecurityElement_SearchForChildByTag_m15309 (SecurityElement_t2392 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::ToString()
extern "C" String_t* SecurityElement_ToString_m15310 (SecurityElement_t2392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::ToXml(System.Text.StringBuilder&,System.Int32)
extern "C" void SecurityElement_ToXml_m15311 (SecurityElement_t2392 * __this, StringBuilder_t219 ** ___s, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement/SecurityAttribute System.Security.SecurityElement::GetAttribute(System.String)
extern "C" SecurityAttribute_t2704 * SecurityElement_GetAttribute_m15312 (SecurityElement_t2392 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
