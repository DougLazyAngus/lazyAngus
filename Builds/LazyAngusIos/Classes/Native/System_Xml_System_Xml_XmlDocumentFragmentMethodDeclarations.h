﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlDocumentFragment
struct XmlDocumentFragment_t1623;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t1610;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t577;
// System.Xml.XmlNode
struct XmlNode_t615;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlDocumentFragment::.ctor(System.Xml.XmlDocument)
extern "C" void XmlDocumentFragment__ctor_m7935 (XmlDocumentFragment_t1623 * __this, XmlDocument_t577 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlDocumentFragment::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C" XmlLinkedNode_t1610 * XmlDocumentFragment_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m7936 (XmlDocumentFragment_t1623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentFragment::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C" void XmlDocumentFragment_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m7937 (XmlDocumentFragment_t1623 * __this, XmlLinkedNode_t1610 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentFragment::get_LocalName()
extern "C" String_t* XmlDocumentFragment_get_LocalName_m7938 (XmlDocumentFragment_t1623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentFragment::get_Name()
extern "C" String_t* XmlDocumentFragment_get_Name_m7939 (XmlDocumentFragment_t1623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocumentFragment::get_NodeType()
extern "C" int32_t XmlDocumentFragment_get_NodeType_m7940 (XmlDocumentFragment_t1623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlDocumentFragment::get_OwnerDocument()
extern "C" XmlDocument_t577 * XmlDocumentFragment_get_OwnerDocument_m7941 (XmlDocumentFragment_t1623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentFragment::get_ParentNode()
extern "C" XmlNode_t615 * XmlDocumentFragment_get_ParentNode_m7942 (XmlDocumentFragment_t1623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentFragment::CloneNode(System.Boolean)
extern "C" XmlNode_t615 * XmlDocumentFragment_CloneNode_m7943 (XmlDocumentFragment_t1623 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
