#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNotation
struct XmlNotation_t2048;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t505;
// System.Xml.XmlNode
struct XmlNode_t543;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlNotation::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C" void XmlNotation__ctor_m9754 (XmlNotation_t2048 * __this, String_t* ___localName, String_t* ___prefix, String_t* ___publicId, String_t* ___systemId, XmlDocument_t505 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNotation::get_IsReadOnly()
extern "C" bool XmlNotation_get_IsReadOnly_m9755 (XmlNotation_t2048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNotation::get_LocalName()
extern "C" String_t* XmlNotation_get_LocalName_m9756 (XmlNotation_t2048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNotation::get_Name()
extern "C" String_t* XmlNotation_get_Name_m9757 (XmlNotation_t2048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlNotation::get_NodeType()
extern "C" int32_t XmlNotation_get_NodeType_m9758 (XmlNotation_t2048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNotation::CloneNode(System.Boolean)
extern "C" XmlNode_t543 * XmlNotation_CloneNode_m9759 (XmlNotation_t2048 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
