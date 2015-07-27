#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlCDataSection
struct XmlCDataSection_t1612;
// System.String
struct String_t;
// System.Xml.XmlNode
struct XmlNode_t614;
// System.Xml.XmlDocument
struct XmlDocument_t576;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlCDataSection::.ctor(System.String,System.Xml.XmlDocument)
extern "C" void XmlCDataSection__ctor_m7828 (XmlCDataSection_t1612 * __this, String_t* ___data, XmlDocument_t576 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlCDataSection::get_LocalName()
extern "C" String_t* XmlCDataSection_get_LocalName_m7829 (XmlCDataSection_t1612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlCDataSection::get_Name()
extern "C" String_t* XmlCDataSection_get_Name_m7830 (XmlCDataSection_t1612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlCDataSection::get_NodeType()
extern "C" int32_t XmlCDataSection_get_NodeType_m7831 (XmlCDataSection_t1612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlCDataSection::get_ParentNode()
extern "C" XmlNode_t614 * XmlCDataSection_get_ParentNode_m7832 (XmlCDataSection_t1612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlCDataSection::CloneNode(System.Boolean)
extern "C" XmlNode_t614 * XmlCDataSection_CloneNode_m7833 (XmlCDataSection_t1612 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
