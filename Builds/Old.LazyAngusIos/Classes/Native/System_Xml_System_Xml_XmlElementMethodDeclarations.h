﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlElement
struct XmlElement_t530;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t2037;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t570;
// System.String
struct String_t;
// System.Xml.XmlNode
struct XmlNode_t564;
// System.Xml.XmlDocument
struct XmlDocument_t529;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t2038;
// System.Xml.XmlAttribute
struct XmlAttribute_t568;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlElement::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument,System.Boolean)
extern "C" void XmlElement__ctor_m9739 (XmlElement_t530 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, XmlDocument_t529 * ___doc, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlElement::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C" XmlLinkedNode_t2037 * XmlElement_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m9740 (XmlElement_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C" void XmlElement_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m9741 (XmlElement_t530 * __this, XmlLinkedNode_t2037 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes()
extern "C" XmlAttributeCollection_t570 * XmlElement_get_Attributes_m9742 (XmlElement_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_InnerText()
extern "C" String_t* XmlElement_get_InnerText_m9743 (XmlElement_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::set_IsEmpty(System.Boolean)
extern "C" void XmlElement_set_IsEmpty_m9744 (XmlElement_t530 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_LocalName()
extern "C" String_t* XmlElement_get_LocalName_m9745 (XmlElement_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_Name()
extern "C" String_t* XmlElement_get_Name_m9746 (XmlElement_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_NamespaceURI()
extern "C" String_t* XmlElement_get_NamespaceURI_m9747 (XmlElement_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::get_NextSibling()
extern "C" XmlNode_t564 * XmlElement_get_NextSibling_m9748 (XmlElement_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlElement::get_NodeType()
extern "C" int32_t XmlElement_get_NodeType_m9749 (XmlElement_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlElement::get_OwnerDocument()
extern "C" XmlDocument_t529 * XmlElement_get_OwnerDocument_m9750 (XmlElement_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_Prefix()
extern "C" String_t* XmlElement_get_Prefix_m9751 (XmlElement_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::get_ParentNode()
extern "C" XmlNode_t564 * XmlElement_get_ParentNode_m9752 (XmlElement_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C" void XmlElement_set_SchemaInfo_m9753 (XmlElement_t530 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::CloneNode(System.Boolean)
extern "C" XmlNode_t564 * XmlElement_CloneNode_m9754 (XmlElement_t530 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::RemoveAll()
extern "C" void XmlElement_RemoveAll_m9755 (XmlElement_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String)
extern "C" void XmlElement_SetAttribute_m9756 (XmlElement_t530 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlElement::SetAttributeNode(System.Xml.XmlAttribute)
extern "C" XmlAttribute_t568 * XmlElement_SetAttributeNode_m9757 (XmlElement_t530 * __this, XmlAttribute_t568 * ___newAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;