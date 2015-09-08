#pragma once
#include <stdint.h>
// System.Xml.XmlNode/EmptyNodeList
struct EmptyNodeList_t3526;
// System.Xml.XmlDocument
struct XmlDocument_t695;
// System.Xml.XmlNode
struct XmlNode_t735;
// System.Xml.XmlNodeListChildren
struct XmlNodeListChildren_t3528;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t223;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlNode
struct  XmlNode_t735  : public Object_t
{
	// System.Xml.XmlDocument System.Xml.XmlNode::ownerDocument
	XmlDocument_t695 * ___ownerDocument_1;
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t735 * ___parentNode_2;
	// System.Xml.XmlNodeListChildren System.Xml.XmlNode::childNodes
	XmlNodeListChildren_t3528 * ___childNodes_3;
};
struct XmlNode_t735_StaticFields{
	// System.Xml.XmlNode/EmptyNodeList System.Xml.XmlNode::emptyList
	EmptyNodeList_t3526 * ___emptyList_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNode::<>f__switch$map2B
	Dictionary_2_t223 * ___U3CU3Ef__switchU24map2B_4;
};
