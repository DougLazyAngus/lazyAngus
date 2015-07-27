#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNotation
struct XmlNotation_t1647;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t576;
// System.Xml.XmlNode
struct XmlNode_t614;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlNotation::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C" void XmlNotation__ctor_m8146 (XmlNotation_t1647 * __this, String_t* ___localName, String_t* ___prefix, String_t* ___publicId, String_t* ___systemId, XmlDocument_t576 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNotation::get_IsReadOnly()
extern "C" bool XmlNotation_get_IsReadOnly_m8147 (XmlNotation_t1647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNotation::get_LocalName()
extern "C" String_t* XmlNotation_get_LocalName_m8148 (XmlNotation_t1647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNotation::get_Name()
extern "C" String_t* XmlNotation_get_Name_m8149 (XmlNotation_t1647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlNotation::get_NodeType()
extern "C" int32_t XmlNotation_get_NodeType_m8150 (XmlNotation_t1647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNotation::CloneNode(System.Boolean)
extern "C" XmlNode_t614 * XmlNotation_CloneNode_m8151 (XmlNotation_t1647 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
