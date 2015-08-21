#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlDeclaration
struct XmlDeclaration_t3219;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t675;
// System.Xml.XmlNode
struct XmlNode_t715;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlDeclaration::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C" void XmlDeclaration__ctor_m10789 (XmlDeclaration_t3219 * __this, String_t* ___version, String_t* ___encoding, String_t* ___standalone, XmlDocument_t675 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Encoding()
extern "C" String_t* XmlDeclaration_get_Encoding_m10790 (XmlDeclaration_t3219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::set_Encoding(System.String)
extern "C" void XmlDeclaration_set_Encoding_m10791 (XmlDeclaration_t3219 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_InnerText()
extern "C" String_t* XmlDeclaration_get_InnerText_m10792 (XmlDeclaration_t3219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_LocalName()
extern "C" String_t* XmlDeclaration_get_LocalName_m10793 (XmlDeclaration_t3219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Name()
extern "C" String_t* XmlDeclaration_get_Name_m10794 (XmlDeclaration_t3219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDeclaration::get_NodeType()
extern "C" int32_t XmlDeclaration_get_NodeType_m10795 (XmlDeclaration_t3219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Standalone()
extern "C" String_t* XmlDeclaration_get_Standalone_m10796 (XmlDeclaration_t3219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::set_Standalone(System.String)
extern "C" void XmlDeclaration_set_Standalone_m10797 (XmlDeclaration_t3219 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Value()
extern "C" String_t* XmlDeclaration_get_Value_m10798 (XmlDeclaration_t3219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::set_Value(System.String)
extern "C" void XmlDeclaration_set_Value_m10799 (XmlDeclaration_t3219 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Version()
extern "C" String_t* XmlDeclaration_get_Version_m10800 (XmlDeclaration_t3219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDeclaration::CloneNode(System.Boolean)
extern "C" XmlNode_t715 * XmlDeclaration_CloneNode_m10801 (XmlDeclaration_t3219 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlDeclaration::SkipWhitespace(System.String,System.Int32)
extern "C" int32_t XmlDeclaration_SkipWhitespace_m10802 (XmlDeclaration_t3219 * __this, String_t* ___input, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::ParseInput(System.String)
extern "C" void XmlDeclaration_ParseInput_m10803 (XmlDeclaration_t3219 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
