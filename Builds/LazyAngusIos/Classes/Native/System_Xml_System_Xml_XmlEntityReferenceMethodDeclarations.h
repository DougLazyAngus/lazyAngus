#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlEntityReference
struct XmlEntityReference_t1625;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t1609;
// System.String
struct String_t;
// System.Xml.XmlEntity
struct XmlEntity_t1624;
// System.Xml.XmlDocument
struct XmlDocument_t576;
// System.Xml.XmlNode
struct XmlNode_t614;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlEntityReference::.ctor(System.String,System.Xml.XmlDocument)
extern "C" void XmlEntityReference__ctor_m7982 (XmlEntityReference_t1625 * __this, String_t* ___name, XmlDocument_t576 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlEntityReference::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C" XmlLinkedNode_t1609 * XmlEntityReference_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m7983 (XmlEntityReference_t1625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C" void XmlEntityReference_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m7984 (XmlEntityReference_t1625 * __this, XmlLinkedNode_t1609 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_BaseURI()
extern "C" String_t* XmlEntityReference_get_BaseURI_m7985 (XmlEntityReference_t1625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlEntity System.Xml.XmlEntityReference::get_Entity()
extern "C" XmlEntity_t1624 * XmlEntityReference_get_Entity_m7986 (XmlEntityReference_t1625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_ChildrenBaseURI()
extern "C" String_t* XmlEntityReference_get_ChildrenBaseURI_m7987 (XmlEntityReference_t1625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlEntityReference::get_IsReadOnly()
extern "C" bool XmlEntityReference_get_IsReadOnly_m7988 (XmlEntityReference_t1625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_LocalName()
extern "C" String_t* XmlEntityReference_get_LocalName_m7989 (XmlEntityReference_t1625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_Name()
extern "C" String_t* XmlEntityReference_get_Name_m7990 (XmlEntityReference_t1625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlEntityReference::get_NodeType()
extern "C" int32_t XmlEntityReference_get_NodeType_m7991 (XmlEntityReference_t1625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_Value()
extern "C" String_t* XmlEntityReference_get_Value_m7992 (XmlEntityReference_t1625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::set_Value(System.String)
extern "C" void XmlEntityReference_set_Value_m7993 (XmlEntityReference_t1625 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlEntityReference::CloneNode(System.Boolean)
extern "C" XmlNode_t614 * XmlEntityReference_CloneNode_m7994 (XmlEntityReference_t1625 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::SetReferencedEntityContent()
extern "C" void XmlEntityReference_SetReferencedEntityContent_m7995 (XmlEntityReference_t1625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
