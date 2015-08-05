#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3165;
// System.Xml.XmlNode
struct XmlNode_t668;
// System.Xml.XmlDocument
struct XmlDocument_t631;

// System.Void System.Xml.XmlLinkedNode::.ctor(System.Xml.XmlDocument)
extern "C" void XmlLinkedNode__ctor_m10735 (XmlLinkedNode_t3165 * __this, XmlDocument_t631 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlLinkedNode::get_IsRooted()
extern "C" bool XmlLinkedNode_get_IsRooted_m10736 (XmlLinkedNode_t3165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlLinkedNode::get_NextSibling()
extern "C" XmlNode_t668 * XmlLinkedNode_get_NextSibling_m10737 (XmlLinkedNode_t3165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::get_NextLinkedSibling()
extern "C" XmlLinkedNode_t3165 * XmlLinkedNode_get_NextLinkedSibling_m10738 (XmlLinkedNode_t3165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlLinkedNode::set_NextLinkedSibling(System.Xml.XmlLinkedNode)
extern "C" void XmlLinkedNode_set_NextLinkedSibling_m10739 (XmlLinkedNode_t3165 * __this, XmlLinkedNode_t3165 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlLinkedNode::get_PreviousSibling()
extern "C" XmlNode_t668 * XmlLinkedNode_get_PreviousSibling_m10740 (XmlLinkedNode_t3165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
