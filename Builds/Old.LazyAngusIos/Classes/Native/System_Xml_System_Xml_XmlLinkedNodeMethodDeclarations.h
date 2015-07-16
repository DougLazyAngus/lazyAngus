#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t2037;
// System.Xml.XmlNode
struct XmlNode_t564;
// System.Xml.XmlDocument
struct XmlDocument_t529;

// System.Void System.Xml.XmlLinkedNode::.ctor(System.Xml.XmlDocument)
extern "C" void XmlLinkedNode__ctor_m9835 (XmlLinkedNode_t2037 * __this, XmlDocument_t529 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlLinkedNode::get_IsRooted()
extern "C" bool XmlLinkedNode_get_IsRooted_m9836 (XmlLinkedNode_t2037 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlLinkedNode::get_NextSibling()
extern "C" XmlNode_t564 * XmlLinkedNode_get_NextSibling_m9837 (XmlLinkedNode_t2037 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::get_NextLinkedSibling()
extern "C" XmlLinkedNode_t2037 * XmlLinkedNode_get_NextLinkedSibling_m9838 (XmlLinkedNode_t2037 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlLinkedNode::set_NextLinkedSibling(System.Xml.XmlLinkedNode)
extern "C" void XmlLinkedNode_set_NextLinkedSibling_m9839 (XmlLinkedNode_t2037 * __this, XmlLinkedNode_t2037 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlLinkedNode::get_PreviousSibling()
extern "C" XmlNode_t564 * XmlLinkedNode_get_PreviousSibling_m9840 (XmlLinkedNode_t2037 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
