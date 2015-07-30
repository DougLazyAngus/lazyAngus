#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlEntityReference
struct XmlEntityReference_t3178;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3162;
// System.String
struct String_t;
// System.Xml.XmlEntity
struct XmlEntity_t3177;
// System.Xml.XmlDocument
struct XmlDocument_t629;
// System.Xml.XmlNode
struct XmlNode_t667;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlEntityReference::.ctor(System.String,System.Xml.XmlDocument)
extern "C" void XmlEntityReference__ctor_m10647 (XmlEntityReference_t3178 * __this, String_t* ___name, XmlDocument_t629 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlEntityReference::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C" XmlLinkedNode_t3162 * XmlEntityReference_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m10648 (XmlEntityReference_t3178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C" void XmlEntityReference_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m10649 (XmlEntityReference_t3178 * __this, XmlLinkedNode_t3162 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_BaseURI()
extern "C" String_t* XmlEntityReference_get_BaseURI_m10650 (XmlEntityReference_t3178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlEntity System.Xml.XmlEntityReference::get_Entity()
extern "C" XmlEntity_t3177 * XmlEntityReference_get_Entity_m10651 (XmlEntityReference_t3178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_ChildrenBaseURI()
extern "C" String_t* XmlEntityReference_get_ChildrenBaseURI_m10652 (XmlEntityReference_t3178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlEntityReference::get_IsReadOnly()
extern "C" bool XmlEntityReference_get_IsReadOnly_m10653 (XmlEntityReference_t3178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_LocalName()
extern "C" String_t* XmlEntityReference_get_LocalName_m10654 (XmlEntityReference_t3178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_Name()
extern "C" String_t* XmlEntityReference_get_Name_m10655 (XmlEntityReference_t3178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlEntityReference::get_NodeType()
extern "C" int32_t XmlEntityReference_get_NodeType_m10656 (XmlEntityReference_t3178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_Value()
extern "C" String_t* XmlEntityReference_get_Value_m10657 (XmlEntityReference_t3178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::set_Value(System.String)
extern "C" void XmlEntityReference_set_Value_m10658 (XmlEntityReference_t3178 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlEntityReference::CloneNode(System.Boolean)
extern "C" XmlNode_t667 * XmlEntityReference_CloneNode_m10659 (XmlEntityReference_t3178 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::SetReferencedEntityContent()
extern "C" void XmlEntityReference_SetReferencedEntityContent_m10660 (XmlEntityReference_t3178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
