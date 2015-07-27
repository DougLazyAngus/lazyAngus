#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t1610;
// System.Xml.XmlNode
struct XmlNode_t615;
// System.Xml.XmlDocument
struct XmlDocument_t577;

// System.Void System.Xml.XmlLinkedNode::.ctor(System.Xml.XmlDocument)
extern "C" void XmlLinkedNode__ctor_m8054 (XmlLinkedNode_t1610 * __this, XmlDocument_t577 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlLinkedNode::get_IsRooted()
extern "C" bool XmlLinkedNode_get_IsRooted_m8055 (XmlLinkedNode_t1610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlLinkedNode::get_NextSibling()
extern "C" XmlNode_t615 * XmlLinkedNode_get_NextSibling_m8056 (XmlLinkedNode_t1610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::get_NextLinkedSibling()
extern "C" XmlLinkedNode_t1610 * XmlLinkedNode_get_NextLinkedSibling_m8057 (XmlLinkedNode_t1610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlLinkedNode::set_NextLinkedSibling(System.Xml.XmlLinkedNode)
extern "C" void XmlLinkedNode_set_NextLinkedSibling_m8058 (XmlLinkedNode_t1610 * __this, XmlLinkedNode_t1610 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlLinkedNode::get_PreviousSibling()
extern "C" XmlNode_t615 * XmlLinkedNode_get_PreviousSibling_m8059 (XmlLinkedNode_t1610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
