﻿#pragma once
#include <stdint.h>
// System.Xml.XmlNode/EmptyNodeList
struct EmptyNodeList_t3242;
// System.Xml.XmlDocument
struct XmlDocument_t678;
// System.Xml.XmlNode
struct XmlNode_t718;
// System.Xml.XmlNodeListChildren
struct XmlNodeListChildren_t3244;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t223;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlNode
struct  XmlNode_t718  : public Object_t
{
	// System.Xml.XmlDocument System.Xml.XmlNode::ownerDocument
	XmlDocument_t678 * ___ownerDocument_1;
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t718 * ___parentNode_2;
	// System.Xml.XmlNodeListChildren System.Xml.XmlNode::childNodes
	XmlNodeListChildren_t3244 * ___childNodes_3;
};
struct XmlNode_t718_StaticFields{
	// System.Xml.XmlNode/EmptyNodeList System.Xml.XmlNode::emptyList
	EmptyNodeList_t3242 * ___emptyList_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNode::<>f__switch$map44
	Dictionary_2_t223 * ___U3CU3Ef__switchU24map44_4;
};
