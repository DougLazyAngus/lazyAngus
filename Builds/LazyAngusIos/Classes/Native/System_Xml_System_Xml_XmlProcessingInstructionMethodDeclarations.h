#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlProcessingInstruction
struct XmlProcessingInstruction_t1650;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t575;
// System.Xml.XmlNode
struct XmlNode_t613;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlProcessingInstruction::.ctor(System.String,System.String,System.Xml.XmlDocument)
extern "C" void XmlProcessingInstruction__ctor_m8184 (XmlProcessingInstruction_t1650 * __this, String_t* ___target, String_t* ___data, XmlDocument_t575 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlProcessingInstruction::get_Data()
extern "C" String_t* XmlProcessingInstruction_get_Data_m8185 (XmlProcessingInstruction_t1650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlProcessingInstruction::get_InnerText()
extern "C" String_t* XmlProcessingInstruction_get_InnerText_m8186 (XmlProcessingInstruction_t1650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlProcessingInstruction::get_LocalName()
extern "C" String_t* XmlProcessingInstruction_get_LocalName_m8187 (XmlProcessingInstruction_t1650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlProcessingInstruction::get_Name()
extern "C" String_t* XmlProcessingInstruction_get_Name_m8188 (XmlProcessingInstruction_t1650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlProcessingInstruction::get_NodeType()
extern "C" int32_t XmlProcessingInstruction_get_NodeType_m8189 (XmlProcessingInstruction_t1650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlProcessingInstruction::get_Target()
extern "C" String_t* XmlProcessingInstruction_get_Target_m8190 (XmlProcessingInstruction_t1650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlProcessingInstruction::get_Value()
extern "C" String_t* XmlProcessingInstruction_get_Value_m8191 (XmlProcessingInstruction_t1650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlProcessingInstruction::set_Value(System.String)
extern "C" void XmlProcessingInstruction_set_Value_m8192 (XmlProcessingInstruction_t1650 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlProcessingInstruction::CloneNode(System.Boolean)
extern "C" XmlNode_t613 * XmlProcessingInstruction_CloneNode_m8193 (XmlProcessingInstruction_t1650 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
