﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlEntityReference
struct XmlEntityReference_t2028;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t2012;
// System.String
struct String_t;
// System.Xml.XmlEntity
struct XmlEntity_t2027;
// System.Xml.XmlDocument
struct XmlDocument_t505;
// System.Xml.XmlNode
struct XmlNode_t543;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlEntityReference::.ctor(System.String,System.Xml.XmlDocument)
extern "C" void XmlEntityReference__ctor_m9590 (XmlEntityReference_t2028 * __this, String_t* ___name, XmlDocument_t505 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlEntityReference::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C" XmlLinkedNode_t2012 * XmlEntityReference_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m9591 (XmlEntityReference_t2028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C" void XmlEntityReference_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m9592 (XmlEntityReference_t2028 * __this, XmlLinkedNode_t2012 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_BaseURI()
extern "C" String_t* XmlEntityReference_get_BaseURI_m9593 (XmlEntityReference_t2028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlEntity System.Xml.XmlEntityReference::get_Entity()
extern "C" XmlEntity_t2027 * XmlEntityReference_get_Entity_m9594 (XmlEntityReference_t2028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_ChildrenBaseURI()
extern "C" String_t* XmlEntityReference_get_ChildrenBaseURI_m9595 (XmlEntityReference_t2028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlEntityReference::get_IsReadOnly()
extern "C" bool XmlEntityReference_get_IsReadOnly_m9596 (XmlEntityReference_t2028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_LocalName()
extern "C" String_t* XmlEntityReference_get_LocalName_m9597 (XmlEntityReference_t2028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_Name()
extern "C" String_t* XmlEntityReference_get_Name_m9598 (XmlEntityReference_t2028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlEntityReference::get_NodeType()
extern "C" int32_t XmlEntityReference_get_NodeType_m9599 (XmlEntityReference_t2028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_Value()
extern "C" String_t* XmlEntityReference_get_Value_m9600 (XmlEntityReference_t2028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::set_Value(System.String)
extern "C" void XmlEntityReference_set_Value_m9601 (XmlEntityReference_t2028 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlEntityReference::CloneNode(System.Boolean)
extern "C" XmlNode_t543 * XmlEntityReference_CloneNode_m9602 (XmlEntityReference_t2028 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::SetReferencedEntityContent()
extern "C" void XmlEntityReference_SetReferencedEntityContent_m9603 (XmlEntityReference_t2028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
