#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlEntity
struct XmlEntity_t1623;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t1608;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t575;
// System.Xml.XmlNode
struct XmlNode_t613;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlEntity::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C" void XmlEntity__ctor_m7962 (XmlEntity_t1623 * __this, String_t* ___name, String_t* ___NDATA, String_t* ___publicId, String_t* ___systemId, XmlDocument_t575 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlEntity::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C" XmlLinkedNode_t1608 * XmlEntity_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m7963 (XmlEntity_t1623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntity::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C" void XmlEntity_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m7964 (XmlEntity_t1623 * __this, XmlLinkedNode_t1608 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_BaseURI()
extern "C" String_t* XmlEntity_get_BaseURI_m7965 (XmlEntity_t1623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_InnerText()
extern "C" String_t* XmlEntity_get_InnerText_m7966 (XmlEntity_t1623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlEntity::get_IsReadOnly()
extern "C" bool XmlEntity_get_IsReadOnly_m7967 (XmlEntity_t1623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_LocalName()
extern "C" String_t* XmlEntity_get_LocalName_m7968 (XmlEntity_t1623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_Name()
extern "C" String_t* XmlEntity_get_Name_m7969 (XmlEntity_t1623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlEntity::get_NodeType()
extern "C" int32_t XmlEntity_get_NodeType_m7970 (XmlEntity_t1623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_SystemId()
extern "C" String_t* XmlEntity_get_SystemId_m7971 (XmlEntity_t1623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlEntity::CloneNode(System.Boolean)
extern "C" XmlNode_t613 * XmlEntity_CloneNode_m7972 (XmlEntity_t1623 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntity::SetEntityContent()
extern "C" void XmlEntity_SetEntityContent_m7973 (XmlEntity_t1623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
