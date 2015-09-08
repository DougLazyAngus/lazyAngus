#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNode
struct XmlNode_t735;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t741;
// System.String
struct String_t;
// System.Xml.XmlNodeList
struct XmlNodeList_t3527;
// System.Xml.XmlDocument
struct XmlDocument_t695;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t3506;
// System.Xml.XmlElement
struct XmlElement_t696;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Text.StringBuilder
struct StringBuilder_t261;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t3489;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlNode::.ctor(System.Xml.XmlDocument)
extern "C" void XmlNode__ctor_m13116 (XmlNode_t735 * __this, XmlDocument_t695 * ___ownerDocument, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::.cctor()
extern "C" void XmlNode__cctor_m13117 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XmlNode::System.ICloneable.Clone()
extern "C" Object_t * XmlNode_System_ICloneable_Clone_m13118 (XmlNode_t735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNode::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * XmlNode_System_Collections_IEnumerable_GetEnumerator_m13119 (XmlNode_t735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes()
extern "C" XmlAttributeCollection_t741 * XmlNode_get_Attributes_m13120 (XmlNode_t735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_BaseURI()
extern "C" String_t* XmlNode_get_BaseURI_m13121 (XmlNode_t735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_ChildrenBaseURI()
extern "C" String_t* XmlNode_get_ChildrenBaseURI_m13122 (XmlNode_t735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes()
extern "C" XmlNodeList_t3527 * XmlNode_get_ChildNodes_m13123 (XmlNode_t735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_FirstChild()
extern "C" XmlNode_t735 * XmlNode_get_FirstChild_m13124 (XmlNode_t735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNode::get_HasChildNodes()
extern "C" bool XmlNode_get_HasChildNodes_m13125 (XmlNode_t735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_InnerText()
extern "C" String_t* XmlNode_get_InnerText_m13126 (XmlNode_t735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::AppendChildValues(System.Text.StringBuilder&)
extern "C" void XmlNode_AppendChildValues_m13127 (XmlNode_t735 * __this, StringBuilder_t261 ** ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNode::get_IsReadOnly()
extern "C" bool XmlNode_get_IsReadOnly_m13128 (XmlNode_t735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_LastChild()
extern "C" XmlNode_t735 * XmlNode_get_LastChild_m13129 (XmlNode_t735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_LocalName()
// System.String System.Xml.XmlNode::get_Name()
// System.String System.Xml.XmlNode::get_NamespaceURI()
extern "C" String_t* XmlNode_get_NamespaceURI_m13130 (XmlNode_t735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_NextSibling()
extern "C" XmlNode_t735 * XmlNode_get_NextSibling_m13131 (XmlNode_t735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType()
// System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument()
extern "C" XmlDocument_t695 * XmlNode_get_OwnerDocument_m13132 (XmlNode_t735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode()
extern "C" XmlNode_t735 * XmlNode_get_ParentNode_m13133 (XmlNode_t735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_Prefix()
extern "C" String_t* XmlNode_get_Prefix_m13134 (XmlNode_t735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_PreviousSibling()
extern "C" XmlNode_t735 * XmlNode_get_PreviousSibling_m13135 (XmlNode_t735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_Value()
extern "C" String_t* XmlNode_get_Value_m13136 (XmlNode_t735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_Value(System.String)
extern "C" void XmlNode_set_Value_m13137 (XmlNode_t735 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_XmlLang()
extern "C" String_t* XmlNode_get_XmlLang_m13138 (XmlNode_t735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlNode::get_XmlSpace()
extern "C" int32_t XmlNode_get_XmlSpace_m13139 (XmlNode_t735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlNode::get_SchemaInfo()
extern "C" Object_t * XmlNode_get_SchemaInfo_m13140 (XmlNode_t735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C" void XmlNode_set_SchemaInfo_m13141 (XmlNode_t735 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode)
extern "C" XmlNode_t735 * XmlNode_AppendChild_m13142 (XmlNode_t735 * __this, XmlNode_t735 * ___newChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode,System.Boolean)
extern "C" XmlNode_t735 * XmlNode_AppendChild_m13143 (XmlNode_t735 * __this, XmlNode_t735 * ___newChild, bool ___checkNodeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::Clone()
extern "C" XmlNode_t735 * XmlNode_Clone_m13144 (XmlNode_t735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::CloneNode(System.Boolean)
// System.Collections.IEnumerator System.Xml.XmlNode::GetEnumerator()
extern "C" Object_t * XmlNode_GetEnumerator_m13145 (XmlNode_t735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" XmlNode_t735 * XmlNode_InsertBefore_m13146 (XmlNode_t735 * __this, XmlNode_t735 * ___newChild, XmlNode_t735 * ___refChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNode::IsAncestor(System.Xml.XmlNode)
extern "C" bool XmlNode_IsAncestor_m13147 (XmlNode_t735 * __this, XmlNode_t735 * ___newChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode,System.Boolean,System.Boolean)
extern "C" XmlNode_t735 * XmlNode_InsertBefore_m13148 (XmlNode_t735 * __this, XmlNode_t735 * ___newChild, XmlNode_t735 * ___refChild, bool ___checkNodeType, bool ___raiseEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::CheckNodeInsertion(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" void XmlNode_CheckNodeInsertion_m13149 (XmlNode_t735 * __this, XmlNode_t735 * ___newChild, XmlNode_t735 * ___refChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::RemoveAll()
extern "C" void XmlNode_RemoveAll_m13150 (XmlNode_t735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::RemoveChild(System.Xml.XmlNode)
extern "C" XmlNode_t735 * XmlNode_RemoveChild_m13151 (XmlNode_t735 * __this, XmlNode_t735 * ___oldChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::CheckNodeRemoval()
extern "C" void XmlNode_CheckNodeRemoval_m13152 (XmlNode_t735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::RemoveChild(System.Xml.XmlNode,System.Boolean)
extern "C" XmlNode_t735 * XmlNode_RemoveChild_m13153 (XmlNode_t735 * __this, XmlNode_t735 * ___oldChild, bool ___checkNodeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlNode::get_AttributeOwnerElement()
extern "C" XmlElement_t696 * XmlNode_get_AttributeOwnerElement_m13154 (XmlNode_t735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_AttributeOwnerElement(System.Xml.XmlElement)
extern "C" void XmlNode_set_AttributeOwnerElement_m13155 (XmlNode_t735 * __this, XmlElement_t696 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamespaceManager System.Xml.XmlNode::ConstructNamespaceManager()
extern "C" XmlNamespaceManager_t3489 * XmlNode_ConstructNamespaceManager_m13156 (XmlNode_t735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
