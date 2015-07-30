#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlComment
struct XmlComment_t3169;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t629;
// System.Xml.XmlNode
struct XmlNode_t667;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlComment::.ctor(System.String,System.Xml.XmlDocument)
extern "C" void XmlComment__ctor_m10518 (XmlComment_t3169 * __this, String_t* ___comment, XmlDocument_t629 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlComment::get_LocalName()
extern "C" String_t* XmlComment_get_LocalName_m10519 (XmlComment_t3169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlComment::get_Name()
extern "C" String_t* XmlComment_get_Name_m10520 (XmlComment_t3169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlComment::get_NodeType()
extern "C" int32_t XmlComment_get_NodeType_m10521 (XmlComment_t3169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlComment::CloneNode(System.Boolean)
extern "C" XmlNode_t667 * XmlComment_CloneNode_m10522 (XmlComment_t3169 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
