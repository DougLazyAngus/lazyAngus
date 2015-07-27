#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlCDataSection
struct XmlCDataSection_t1613;
// System.String
struct String_t;
// System.Xml.XmlNode
struct XmlNode_t615;
// System.Xml.XmlDocument
struct XmlDocument_t577;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlCDataSection::.ctor(System.String,System.Xml.XmlDocument)
extern "C" void XmlCDataSection__ctor_m7835 (XmlCDataSection_t1613 * __this, String_t* ___data, XmlDocument_t577 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlCDataSection::get_LocalName()
extern "C" String_t* XmlCDataSection_get_LocalName_m7836 (XmlCDataSection_t1613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlCDataSection::get_Name()
extern "C" String_t* XmlCDataSection_get_Name_m7837 (XmlCDataSection_t1613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlCDataSection::get_NodeType()
extern "C" int32_t XmlCDataSection_get_NodeType_m7838 (XmlCDataSection_t1613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlCDataSection::get_ParentNode()
extern "C" XmlNode_t615 * XmlCDataSection_get_ParentNode_m7839 (XmlCDataSection_t1613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlCDataSection::CloneNode(System.Boolean)
extern "C" XmlNode_t615 * XmlCDataSection_CloneNode_m7840 (XmlCDataSection_t1613 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
