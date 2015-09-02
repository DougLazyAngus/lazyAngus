#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlDocumentFragment
struct XmlDocumentFragment_t3242;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3229;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t691;
// System.Xml.XmlNode
struct XmlNode_t731;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlDocumentFragment::.ctor(System.Xml.XmlDocument)
extern "C" void XmlDocumentFragment__ctor_m11022 (XmlDocumentFragment_t3242 * __this, XmlDocument_t691 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlDocumentFragment::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C" XmlLinkedNode_t3229 * XmlDocumentFragment_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m11023 (XmlDocumentFragment_t3242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentFragment::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C" void XmlDocumentFragment_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m11024 (XmlDocumentFragment_t3242 * __this, XmlLinkedNode_t3229 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentFragment::get_LocalName()
extern "C" String_t* XmlDocumentFragment_get_LocalName_m11025 (XmlDocumentFragment_t3242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentFragment::get_Name()
extern "C" String_t* XmlDocumentFragment_get_Name_m11026 (XmlDocumentFragment_t3242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocumentFragment::get_NodeType()
extern "C" int32_t XmlDocumentFragment_get_NodeType_m11027 (XmlDocumentFragment_t3242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlDocumentFragment::get_OwnerDocument()
extern "C" XmlDocument_t691 * XmlDocumentFragment_get_OwnerDocument_m11028 (XmlDocumentFragment_t3242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentFragment::get_ParentNode()
extern "C" XmlNode_t731 * XmlDocumentFragment_get_ParentNode_m11029 (XmlDocumentFragment_t3242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentFragment::CloneNode(System.Boolean)
extern "C" XmlNode_t731 * XmlDocumentFragment_CloneNode_m11030 (XmlDocumentFragment_t3242 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
