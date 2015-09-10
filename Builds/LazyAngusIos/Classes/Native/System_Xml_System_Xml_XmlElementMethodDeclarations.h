#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlElement
struct XmlElement_t703;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3510;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t748;
// System.String
struct String_t;
// System.Xml.XmlNode
struct XmlNode_t742;
// System.Xml.XmlDocument
struct XmlDocument_t702;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t3513;
// System.Xml.XmlAttribute
struct XmlAttribute_t746;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlElement::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument,System.Boolean)
extern "C" void XmlElement__ctor_m13045 (XmlElement_t703 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, XmlDocument_t702 * ___doc, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlElement::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C" XmlLinkedNode_t3510 * XmlElement_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m13046 (XmlElement_t703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C" void XmlElement_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m13047 (XmlElement_t703 * __this, XmlLinkedNode_t3510 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes()
extern "C" XmlAttributeCollection_t748 * XmlElement_get_Attributes_m13048 (XmlElement_t703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_InnerText()
extern "C" String_t* XmlElement_get_InnerText_m13049 (XmlElement_t703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlElement::get_IsEmpty()
extern "C" bool XmlElement_get_IsEmpty_m13050 (XmlElement_t703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::set_IsEmpty(System.Boolean)
extern "C" void XmlElement_set_IsEmpty_m13051 (XmlElement_t703 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_LocalName()
extern "C" String_t* XmlElement_get_LocalName_m13052 (XmlElement_t703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_Name()
extern "C" String_t* XmlElement_get_Name_m13053 (XmlElement_t703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_NamespaceURI()
extern "C" String_t* XmlElement_get_NamespaceURI_m13054 (XmlElement_t703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::get_NextSibling()
extern "C" XmlNode_t742 * XmlElement_get_NextSibling_m13055 (XmlElement_t703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlElement::get_NodeType()
extern "C" int32_t XmlElement_get_NodeType_m13056 (XmlElement_t703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlElement::get_OwnerDocument()
extern "C" XmlDocument_t702 * XmlElement_get_OwnerDocument_m13057 (XmlElement_t703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_Prefix()
extern "C" String_t* XmlElement_get_Prefix_m13058 (XmlElement_t703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::get_ParentNode()
extern "C" XmlNode_t742 * XmlElement_get_ParentNode_m13059 (XmlElement_t703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlElement::get_SchemaInfo()
extern "C" Object_t * XmlElement_get_SchemaInfo_m13060 (XmlElement_t703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C" void XmlElement_set_SchemaInfo_m13061 (XmlElement_t703 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::CloneNode(System.Boolean)
extern "C" XmlNode_t742 * XmlElement_CloneNode_m13062 (XmlElement_t703 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::RemoveAll()
extern "C" void XmlElement_RemoveAll_m13063 (XmlElement_t703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String)
extern "C" void XmlElement_SetAttribute_m13064 (XmlElement_t703 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlElement::SetAttributeNode(System.Xml.XmlAttribute)
extern "C" XmlAttribute_t746 * XmlElement_SetAttributeNode_m13065 (XmlElement_t703 * __this, XmlAttribute_t746 * ___newAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
