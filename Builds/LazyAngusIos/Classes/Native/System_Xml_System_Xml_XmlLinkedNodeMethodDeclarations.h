#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3162;
// System.Xml.XmlNode
struct XmlNode_t667;
// System.Xml.XmlDocument
struct XmlDocument_t629;

// System.Void System.Xml.XmlLinkedNode::.ctor(System.Xml.XmlDocument)
extern "C" void XmlLinkedNode__ctor_m10712 (XmlLinkedNode_t3162 * __this, XmlDocument_t629 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlLinkedNode::get_IsRooted()
extern "C" bool XmlLinkedNode_get_IsRooted_m10713 (XmlLinkedNode_t3162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlLinkedNode::get_NextSibling()
extern "C" XmlNode_t667 * XmlLinkedNode_get_NextSibling_m10714 (XmlLinkedNode_t3162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::get_NextLinkedSibling()
extern "C" XmlLinkedNode_t3162 * XmlLinkedNode_get_NextLinkedSibling_m10715 (XmlLinkedNode_t3162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlLinkedNode::set_NextLinkedSibling(System.Xml.XmlLinkedNode)
extern "C" void XmlLinkedNode_set_NextLinkedSibling_m10716 (XmlLinkedNode_t3162 * __this, XmlLinkedNode_t3162 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlLinkedNode::get_PreviousSibling()
extern "C" XmlNode_t667 * XmlLinkedNode_get_PreviousSibling_m10717 (XmlLinkedNode_t3162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
