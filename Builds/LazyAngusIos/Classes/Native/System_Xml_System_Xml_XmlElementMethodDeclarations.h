#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlElement
struct XmlElement_t692;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3499;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t737;
// System.String
struct String_t;
// System.Xml.XmlNode
struct XmlNode_t731;
// System.Xml.XmlDocument
struct XmlDocument_t691;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t3502;
// System.Xml.XmlAttribute
struct XmlAttribute_t735;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlElement::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument,System.Boolean)
extern "C" void XmlElement__ctor_m12975 (XmlElement_t692 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, XmlDocument_t691 * ___doc, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlElement::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C" XmlLinkedNode_t3499 * XmlElement_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m12976 (XmlElement_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C" void XmlElement_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m12977 (XmlElement_t692 * __this, XmlLinkedNode_t3499 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes()
extern "C" XmlAttributeCollection_t737 * XmlElement_get_Attributes_m12978 (XmlElement_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_InnerText()
extern "C" String_t* XmlElement_get_InnerText_m12979 (XmlElement_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlElement::get_IsEmpty()
extern "C" bool XmlElement_get_IsEmpty_m12980 (XmlElement_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::set_IsEmpty(System.Boolean)
extern "C" void XmlElement_set_IsEmpty_m12981 (XmlElement_t692 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_LocalName()
extern "C" String_t* XmlElement_get_LocalName_m12982 (XmlElement_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_Name()
extern "C" String_t* XmlElement_get_Name_m12983 (XmlElement_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_NamespaceURI()
extern "C" String_t* XmlElement_get_NamespaceURI_m12984 (XmlElement_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::get_NextSibling()
extern "C" XmlNode_t731 * XmlElement_get_NextSibling_m12985 (XmlElement_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlElement::get_NodeType()
extern "C" int32_t XmlElement_get_NodeType_m12986 (XmlElement_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlElement::get_OwnerDocument()
extern "C" XmlDocument_t691 * XmlElement_get_OwnerDocument_m12987 (XmlElement_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_Prefix()
extern "C" String_t* XmlElement_get_Prefix_m12988 (XmlElement_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::get_ParentNode()
extern "C" XmlNode_t731 * XmlElement_get_ParentNode_m12989 (XmlElement_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlElement::get_SchemaInfo()
extern "C" Object_t * XmlElement_get_SchemaInfo_m12990 (XmlElement_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C" void XmlElement_set_SchemaInfo_m12991 (XmlElement_t692 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::CloneNode(System.Boolean)
extern "C" XmlNode_t731 * XmlElement_CloneNode_m12992 (XmlElement_t692 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::RemoveAll()
extern "C" void XmlElement_RemoveAll_m12993 (XmlElement_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String)
extern "C" void XmlElement_SetAttribute_m12994 (XmlElement_t692 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlElement::SetAttributeNode(System.Xml.XmlAttribute)
extern "C" XmlAttribute_t735 * XmlElement_SetAttributeNode_m12995 (XmlElement_t692 * __this, XmlAttribute_t735 * ___newAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
