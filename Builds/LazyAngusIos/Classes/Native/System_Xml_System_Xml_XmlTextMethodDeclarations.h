#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlText
struct XmlText_t3211;
// System.String
struct String_t;
// System.Xml.XmlNode
struct XmlNode_t667;
// System.Xml.XmlDocument
struct XmlDocument_t629;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlText::.ctor(System.String,System.Xml.XmlDocument)
extern "C" void XmlText__ctor_m10910 (XmlText_t3211 * __this, String_t* ___strData, XmlDocument_t629 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlText::get_LocalName()
extern "C" String_t* XmlText_get_LocalName_m10911 (XmlText_t3211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlText::get_Name()
extern "C" String_t* XmlText_get_Name_m10912 (XmlText_t3211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlText::get_NodeType()
extern "C" int32_t XmlText_get_NodeType_m10913 (XmlText_t3211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlText::get_Value()
extern "C" String_t* XmlText_get_Value_m10914 (XmlText_t3211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlText::set_Value(System.String)
extern "C" void XmlText_set_Value_m10915 (XmlText_t3211 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlText::get_ParentNode()
extern "C" XmlNode_t667 * XmlText_get_ParentNode_m10916 (XmlText_t3211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlText::CloneNode(System.Boolean)
extern "C" XmlNode_t667 * XmlText_CloneNode_m10917 (XmlText_t3211 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
