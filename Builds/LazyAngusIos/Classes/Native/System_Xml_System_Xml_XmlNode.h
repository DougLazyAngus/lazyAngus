#pragma once
#include <stdint.h>
// System.Xml.XmlNode/EmptyNodeList
struct EmptyNodeList_t2065;
// System.Xml.XmlDocument
struct XmlDocument_t529;
// System.Xml.XmlNode
struct XmlNode_t564;
// System.Xml.XmlNodeListChildren
struct XmlNodeListChildren_t2067;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t154;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlNode
struct  XmlNode_t564  : public Object_t
{
	// System.Xml.XmlDocument System.Xml.XmlNode::ownerDocument
	XmlDocument_t529 * ___ownerDocument_1;
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t564 * ___parentNode_2;
	// System.Xml.XmlNodeListChildren System.Xml.XmlNode::childNodes
	XmlNodeListChildren_t2067 * ___childNodes_3;
};
struct XmlNode_t564_StaticFields{
	// System.Xml.XmlNode/EmptyNodeList System.Xml.XmlNode::emptyList
	EmptyNodeList_t2065 * ___emptyList_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNode::<>f__switch$map44
	Dictionary_2_t154 * ___U3CU3Ef__switchU24map44_4;
};
