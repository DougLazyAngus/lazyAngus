#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlCDataSection
struct XmlCDataSection_t3158;
// System.String
struct String_t;
// System.Xml.XmlNode
struct XmlNode_t660;
// System.Xml.XmlDocument
struct XmlDocument_t622;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlCDataSection::.ctor(System.String,System.Xml.XmlDocument)
extern "C" void XmlCDataSection__ctor_m10446 (XmlCDataSection_t3158 * __this, String_t* ___data, XmlDocument_t622 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlCDataSection::get_LocalName()
extern "C" String_t* XmlCDataSection_get_LocalName_m10447 (XmlCDataSection_t3158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlCDataSection::get_Name()
extern "C" String_t* XmlCDataSection_get_Name_m10448 (XmlCDataSection_t3158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlCDataSection::get_NodeType()
extern "C" int32_t XmlCDataSection_get_NodeType_m10449 (XmlCDataSection_t3158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlCDataSection::get_ParentNode()
extern "C" XmlNode_t660 * XmlCDataSection_get_ParentNode_m10450 (XmlCDataSection_t3158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlCDataSection::CloneNode(System.Boolean)
extern "C" XmlNode_t660 * XmlCDataSection_CloneNode_m10451 (XmlCDataSection_t3158 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
