#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlDeclaration
struct XmlDeclaration_t2044;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t527;
// System.Xml.XmlNode
struct XmlNode_t562;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlDeclaration::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C" void XmlDeclaration__ctor_m9623 (XmlDeclaration_t2044 * __this, String_t* ___version, String_t* ___encoding, String_t* ___standalone, XmlDocument_t527 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Encoding()
extern "C" String_t* XmlDeclaration_get_Encoding_m9624 (XmlDeclaration_t2044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::set_Encoding(System.String)
extern "C" void XmlDeclaration_set_Encoding_m9625 (XmlDeclaration_t2044 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_InnerText()
extern "C" String_t* XmlDeclaration_get_InnerText_m9626 (XmlDeclaration_t2044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_LocalName()
extern "C" String_t* XmlDeclaration_get_LocalName_m9627 (XmlDeclaration_t2044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Name()
extern "C" String_t* XmlDeclaration_get_Name_m9628 (XmlDeclaration_t2044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDeclaration::get_NodeType()
extern "C" int32_t XmlDeclaration_get_NodeType_m9629 (XmlDeclaration_t2044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Standalone()
extern "C" String_t* XmlDeclaration_get_Standalone_m9630 (XmlDeclaration_t2044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::set_Standalone(System.String)
extern "C" void XmlDeclaration_set_Standalone_m9631 (XmlDeclaration_t2044 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Value()
extern "C" String_t* XmlDeclaration_get_Value_m9632 (XmlDeclaration_t2044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::set_Value(System.String)
extern "C" void XmlDeclaration_set_Value_m9633 (XmlDeclaration_t2044 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Version()
extern "C" String_t* XmlDeclaration_get_Version_m9634 (XmlDeclaration_t2044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDeclaration::CloneNode(System.Boolean)
extern "C" XmlNode_t562 * XmlDeclaration_CloneNode_m9635 (XmlDeclaration_t2044 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlDeclaration::SkipWhitespace(System.String,System.Int32)
extern "C" int32_t XmlDeclaration_SkipWhitespace_m9636 (XmlDeclaration_t2044 * __this, String_t* ___input, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::ParseInput(System.String)
extern "C" void XmlDeclaration_ParseInput_m9637 (XmlDeclaration_t2044 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
