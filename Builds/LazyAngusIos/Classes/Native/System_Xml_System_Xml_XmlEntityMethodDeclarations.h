#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlEntity
struct XmlEntity_t3170;
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

// System.Void System.Xml.XmlEntity::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C" void XmlEntity__ctor_m10588 (XmlEntity_t3170 * __this, String_t* ___name, String_t* ___NDATA, String_t* ___publicId, String_t* ___systemId, XmlDocument_t622 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlEntity::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C" XmlLinkedNode_t3155 * XmlEntity_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m10589 (XmlEntity_t3170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntity::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C" void XmlEntity_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m10590 (XmlEntity_t3170 * __this, XmlLinkedNode_t3155 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_BaseURI()
extern "C" String_t* XmlEntity_get_BaseURI_m10591 (XmlEntity_t3170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_InnerText()
extern "C" String_t* XmlEntity_get_InnerText_m10592 (XmlEntity_t3170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlEntity::get_IsReadOnly()
extern "C" bool XmlEntity_get_IsReadOnly_m10593 (XmlEntity_t3170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_LocalName()
extern "C" String_t* XmlEntity_get_LocalName_m10594 (XmlEntity_t3170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_Name()
extern "C" String_t* XmlEntity_get_Name_m10595 (XmlEntity_t3170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlEntity::get_NodeType()
extern "C" int32_t XmlEntity_get_NodeType_m10596 (XmlEntity_t3170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_SystemId()
extern "C" String_t* XmlEntity_get_SystemId_m10597 (XmlEntity_t3170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlEntity::CloneNode(System.Boolean)
extern "C" XmlNode_t660 * XmlEntity_CloneNode_m10598 (XmlEntity_t3170 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntity::SetEntityContent()
extern "C" void XmlEntity_SetEntityContent_m10599 (XmlEntity_t3170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
