#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3213;
// System.Xml.XmlNode
struct XmlNode_t718;
// System.Xml.XmlDocument
struct XmlDocument_t678;

// System.Void System.Xml.XmlLinkedNode::.ctor(System.Xml.XmlDocument)
extern "C" void XmlLinkedNode__ctor_m11008 (XmlLinkedNode_t3213 * __this, XmlDocument_t678 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlLinkedNode::get_IsRooted()
extern "C" bool XmlLinkedNode_get_IsRooted_m11009 (XmlLinkedNode_t3213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlLinkedNode::get_NextSibling()
extern "C" XmlNode_t718 * XmlLinkedNode_get_NextSibling_m11010 (XmlLinkedNode_t3213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::get_NextLinkedSibling()
extern "C" XmlLinkedNode_t3213 * XmlLinkedNode_get_NextLinkedSibling_m11011 (XmlLinkedNode_t3213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlLinkedNode::set_NextLinkedSibling(System.Xml.XmlLinkedNode)
extern "C" void XmlLinkedNode_set_NextLinkedSibling_m11012 (XmlLinkedNode_t3213 * __this, XmlLinkedNode_t3213 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlLinkedNode::get_PreviousSibling()
extern "C" XmlNode_t718 * XmlLinkedNode_get_PreviousSibling_m11013 (XmlLinkedNode_t3213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
