#pragma once
#include <stdint.h>
// System.Xml.XmlNode/EmptyNodeList
struct EmptyNodeList_t2040;
// System.Xml.XmlDocument
struct XmlDocument_t505;
// System.Xml.XmlNode
struct XmlNode_t543;
// System.Xml.XmlNodeListChildren
struct XmlNodeListChildren_t2042;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t154;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlNode
struct  XmlNode_t543  : public Object_t
{
	// System.Xml.XmlDocument System.Xml.XmlNode::ownerDocument
	XmlDocument_t505 * ___ownerDocument_1;
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t543 * ___parentNode_2;
	// System.Xml.XmlNodeListChildren System.Xml.XmlNode::childNodes
	XmlNodeListChildren_t2042 * ___childNodes_3;
};
struct XmlNode_t543_StaticFields{
	// System.Xml.XmlNode/EmptyNodeList System.Xml.XmlNode::emptyList
	EmptyNodeList_t2040 * ___emptyList_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNode::<>f__switch$map44
	Dictionary_2_t154 * ___U3CU3Ef__switchU24map44_4;
};
