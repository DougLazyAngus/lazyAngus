#pragma once
#include <stdint.h>
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Xml.XmlNode
struct XmlNode_t669;
// System.Collections.ArrayList
struct ArrayList_t3113;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlNamedNodeMap
struct  XmlNamedNodeMap_t3168  : public Object_t
{
	// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::parent
	XmlNode_t669 * ___parent_1;
	// System.Collections.ArrayList System.Xml.XmlNamedNodeMap::nodeList
	ArrayList_t3113 * ___nodeList_2;
	// System.Boolean System.Xml.XmlNamedNodeMap::readOnly
	bool ___readOnly_3;
};
struct XmlNamedNodeMap_t3168_StaticFields{
	// System.Collections.IEnumerator System.Xml.XmlNamedNodeMap::emptyEnumerator
	Object_t * ___emptyEnumerator_0;
};
