﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlDocumentFragment
struct XmlDocumentFragment_t3168;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3155;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t622;
// System.Xml.XmlNode
struct XmlNode_t660;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlDocumentFragment::.ctor(System.Xml.XmlDocument)
extern "C" void XmlDocumentFragment__ctor_m10550 (XmlDocumentFragment_t3168 * __this, XmlDocument_t622 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlDocumentFragment::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C" XmlLinkedNode_t3155 * XmlDocumentFragment_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m10551 (XmlDocumentFragment_t3168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentFragment::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C" void XmlDocumentFragment_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m10552 (XmlDocumentFragment_t3168 * __this, XmlLinkedNode_t3155 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentFragment::get_LocalName()
extern "C" String_t* XmlDocumentFragment_get_LocalName_m10553 (XmlDocumentFragment_t3168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentFragment::get_Name()
extern "C" String_t* XmlDocumentFragment_get_Name_m10554 (XmlDocumentFragment_t3168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocumentFragment::get_NodeType()
extern "C" int32_t XmlDocumentFragment_get_NodeType_m10555 (XmlDocumentFragment_t3168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlDocumentFragment::get_OwnerDocument()
extern "C" XmlDocument_t622 * XmlDocumentFragment_get_OwnerDocument_m10556 (XmlDocumentFragment_t3168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentFragment::get_ParentNode()
extern "C" XmlNode_t660 * XmlDocumentFragment_get_ParentNode_m10557 (XmlDocumentFragment_t3168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentFragment::CloneNode(System.Boolean)
extern "C" XmlNode_t660 * XmlDocumentFragment_CloneNode_m10558 (XmlDocumentFragment_t3168 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
