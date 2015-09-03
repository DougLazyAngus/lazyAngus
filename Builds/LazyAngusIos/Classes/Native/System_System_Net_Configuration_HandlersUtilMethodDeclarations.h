#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Configuration.HandlersUtil
struct HandlersUtil_t4317;
// System.String
struct String_t;
// System.Xml.XmlNode
struct XmlNode_t731;

// System.String System.Net.Configuration.HandlersUtil::ExtractAttributeValue(System.String,System.Xml.XmlNode)
extern "C" String_t* HandlersUtil_ExtractAttributeValue_m16238 (Object_t * __this /* static, unused */, String_t* ___attKey, XmlNode_t731 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Configuration.HandlersUtil::ExtractAttributeValue(System.String,System.Xml.XmlNode,System.Boolean)
extern "C" String_t* HandlersUtil_ExtractAttributeValue_m16239 (Object_t * __this /* static, unused */, String_t* ___attKey, XmlNode_t731 * ___node, bool ___optional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HandlersUtil::ThrowException(System.String,System.Xml.XmlNode)
extern "C" void HandlersUtil_ThrowException_m16240 (Object_t * __this /* static, unused */, String_t* ___msg, XmlNode_t731 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
