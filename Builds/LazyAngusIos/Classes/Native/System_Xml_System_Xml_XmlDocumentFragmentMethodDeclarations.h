#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlDocumentFragment
struct XmlDocumentFragment_t3179;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3166;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t633;
// System.Xml.XmlNode
struct XmlNode_t670;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlDocumentFragment::.ctor(System.Xml.XmlDocument)
extern "C" void XmlDocumentFragment__ctor_m10628 (XmlDocumentFragment_t3179 * __this, XmlDocument_t633 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlDocumentFragment::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C" XmlLinkedNode_t3166 * XmlDocumentFragment_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m10629 (XmlDocumentFragment_t3179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentFragment::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C" void XmlDocumentFragment_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m10630 (XmlDocumentFragment_t3179 * __this, XmlLinkedNode_t3166 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentFragment::get_LocalName()
extern "C" String_t* XmlDocumentFragment_get_LocalName_m10631 (XmlDocumentFragment_t3179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentFragment::get_Name()
extern "C" String_t* XmlDocumentFragment_get_Name_m10632 (XmlDocumentFragment_t3179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocumentFragment::get_NodeType()
extern "C" int32_t XmlDocumentFragment_get_NodeType_m10633 (XmlDocumentFragment_t3179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlDocumentFragment::get_OwnerDocument()
extern "C" XmlDocument_t633 * XmlDocumentFragment_get_OwnerDocument_m10634 (XmlDocumentFragment_t3179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentFragment::get_ParentNode()
extern "C" XmlNode_t670 * XmlDocumentFragment_get_ParentNode_m10635 (XmlDocumentFragment_t3179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentFragment::CloneNode(System.Boolean)
extern "C" XmlNode_t670 * XmlDocumentFragment_CloneNode_m10636 (XmlDocumentFragment_t3179 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
