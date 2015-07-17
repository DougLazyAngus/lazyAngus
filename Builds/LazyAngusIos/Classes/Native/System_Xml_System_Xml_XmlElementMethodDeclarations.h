#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlElement
struct XmlElement_t576;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t1608;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t619;
// System.String
struct String_t;
// System.Xml.XmlNode
struct XmlNode_t613;
// System.Xml.XmlDocument
struct XmlDocument_t575;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t1609;
// System.Xml.XmlAttribute
struct XmlAttribute_t617;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlElement::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument,System.Boolean)
extern "C" void XmlElement__ctor_m7943 (XmlElement_t576 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, XmlDocument_t575 * ___doc, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlElement::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C" XmlLinkedNode_t1608 * XmlElement_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m7944 (XmlElement_t576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C" void XmlElement_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m7945 (XmlElement_t576 * __this, XmlLinkedNode_t1608 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes()
extern "C" XmlAttributeCollection_t619 * XmlElement_get_Attributes_m7946 (XmlElement_t576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_InnerText()
extern "C" String_t* XmlElement_get_InnerText_m7947 (XmlElement_t576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::set_IsEmpty(System.Boolean)
extern "C" void XmlElement_set_IsEmpty_m7948 (XmlElement_t576 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_LocalName()
extern "C" String_t* XmlElement_get_LocalName_m7949 (XmlElement_t576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_Name()
extern "C" String_t* XmlElement_get_Name_m7950 (XmlElement_t576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_NamespaceURI()
extern "C" String_t* XmlElement_get_NamespaceURI_m7951 (XmlElement_t576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::get_NextSibling()
extern "C" XmlNode_t613 * XmlElement_get_NextSibling_m7952 (XmlElement_t576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlElement::get_NodeType()
extern "C" int32_t XmlElement_get_NodeType_m7953 (XmlElement_t576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlElement::get_OwnerDocument()
extern "C" XmlDocument_t575 * XmlElement_get_OwnerDocument_m7954 (XmlElement_t576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_Prefix()
extern "C" String_t* XmlElement_get_Prefix_m7955 (XmlElement_t576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::get_ParentNode()
extern "C" XmlNode_t613 * XmlElement_get_ParentNode_m7956 (XmlElement_t576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C" void XmlElement_set_SchemaInfo_m7957 (XmlElement_t576 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::CloneNode(System.Boolean)
extern "C" XmlNode_t613 * XmlElement_CloneNode_m7958 (XmlElement_t576 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::RemoveAll()
extern "C" void XmlElement_RemoveAll_m7959 (XmlElement_t576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String)
extern "C" void XmlElement_SetAttribute_m7960 (XmlElement_t576 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlElement::SetAttributeNode(System.Xml.XmlAttribute)
extern "C" XmlAttribute_t617 * XmlElement_SetAttributeNode_m7961 (XmlElement_t576 * __this, XmlAttribute_t617 * ___newAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
