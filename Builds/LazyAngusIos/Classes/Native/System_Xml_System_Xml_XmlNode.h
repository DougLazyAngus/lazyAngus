#pragma once
#include <stdint.h>
// System.Xml.XmlNode/EmptyNodeList
struct EmptyNodeList_t1639;
// System.Xml.XmlDocument
struct XmlDocument_t577;
// System.Xml.XmlNode
struct XmlNode_t615;
// System.Xml.XmlNodeListChildren
struct XmlNodeListChildren_t1641;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t183;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlNode
struct  XmlNode_t615  : public Object_t
{
	// System.Xml.XmlDocument System.Xml.XmlNode::ownerDocument
	XmlDocument_t577 * ___ownerDocument_1;
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t615 * ___parentNode_2;
	// System.Xml.XmlNodeListChildren System.Xml.XmlNode::childNodes
	XmlNodeListChildren_t1641 * ___childNodes_3;
};
struct XmlNode_t615_StaticFields{
	// System.Xml.XmlNode/EmptyNodeList System.Xml.XmlNode::emptyList
	EmptyNodeList_t1639 * ___emptyList_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNode::<>f__switch$map44
	Dictionary_2_t183 * ___U3CU3Ef__switchU24map44_4;
};
