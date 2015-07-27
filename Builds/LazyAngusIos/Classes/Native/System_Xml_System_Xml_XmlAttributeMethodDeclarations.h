#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlAttribute
struct XmlAttribute_t618;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t1609;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t576;
// System.Xml.XmlElement
struct XmlElement_t577;
// System.Xml.XmlNode
struct XmlNode_t614;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t1610;
// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t1589;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlAttribute::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument,System.Boolean,System.Boolean)
extern "C" void XmlAttribute__ctor_m7792 (XmlAttribute_t618 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, XmlDocument_t576 * ___doc, bool ___atomizedNames, bool ___checkNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlAttribute::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C" XmlLinkedNode_t1609 * XmlAttribute_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m7793 (XmlAttribute_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C" void XmlAttribute_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m7794 (XmlAttribute_t618 * __this, XmlLinkedNode_t1609 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_BaseURI()
extern "C" String_t* XmlAttribute_get_BaseURI_m7795 (XmlAttribute_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_LocalName()
extern "C" String_t* XmlAttribute_get_LocalName_m7796 (XmlAttribute_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_Name()
extern "C" String_t* XmlAttribute_get_Name_m7797 (XmlAttribute_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_NamespaceURI()
extern "C" String_t* XmlAttribute_get_NamespaceURI_m7798 (XmlAttribute_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlAttribute::get_NodeType()
extern "C" int32_t XmlAttribute_get_NodeType_m7799 (XmlAttribute_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlAttribute::get_OwnerDocument()
extern "C" XmlDocument_t576 * XmlAttribute_get_OwnerDocument_m7800 (XmlAttribute_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlAttribute::get_OwnerElement()
extern "C" XmlElement_t577 * XmlAttribute_get_OwnerElement_m7801 (XmlAttribute_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::get_ParentNode()
extern "C" XmlNode_t614 * XmlAttribute_get_ParentNode_m7802 (XmlAttribute_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_Prefix()
extern "C" String_t* XmlAttribute_get_Prefix_m7803 (XmlAttribute_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C" void XmlAttribute_set_SchemaInfo_m7804 (XmlAttribute_t618 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlAttribute::get_Specified()
extern "C" bool XmlAttribute_get_Specified_m7805 (XmlAttribute_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_Value()
extern "C" String_t* XmlAttribute_get_Value_m7806 (XmlAttribute_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::set_Value(System.String)
extern "C" void XmlAttribute_set_Value_m7807 (XmlAttribute_t618 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_XmlLang()
extern "C" String_t* XmlAttribute_get_XmlLang_m7808 (XmlAttribute_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlAttribute::get_XmlSpace()
extern "C" int32_t XmlAttribute_get_XmlSpace_m7809 (XmlAttribute_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::AppendChild(System.Xml.XmlNode)
extern "C" XmlNode_t614 * XmlAttribute_AppendChild_m7810 (XmlAttribute_t618 * __this, XmlNode_t614 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" XmlNode_t614 * XmlAttribute_InsertBefore_m7811 (XmlAttribute_t618 * __this, XmlNode_t614 * ___newChild, XmlNode_t614 * ___refChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::RemoveChild(System.Xml.XmlNode)
extern "C" XmlNode_t614 * XmlAttribute_RemoveChild_m7812 (XmlAttribute_t618 * __this, XmlNode_t614 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::CloneNode(System.Boolean)
extern "C" XmlNode_t614 * XmlAttribute_CloneNode_m7813 (XmlAttribute_t618 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::SetDefault()
extern "C" void XmlAttribute_SetDefault_m7814 (XmlAttribute_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition System.Xml.XmlAttribute::GetAttributeDefinition()
extern "C" DTDAttributeDefinition_t1589 * XmlAttribute_GetAttributeDefinition_m7815 (XmlAttribute_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
