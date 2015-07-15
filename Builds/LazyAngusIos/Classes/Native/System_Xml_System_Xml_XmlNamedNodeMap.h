#pragma once
#include <stdint.h>
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Xml.XmlNode
struct XmlNode_t564;
// System.Collections.ArrayList
struct ArrayList_t1451;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlNamedNodeMap
struct  XmlNamedNodeMap_t2039  : public Object_t
{
	// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::parent
	XmlNode_t564 * ___parent_1;
	// System.Collections.ArrayList System.Xml.XmlNamedNodeMap::nodeList
	ArrayList_t1451 * ___nodeList_2;
	// System.Boolean System.Xml.XmlNamedNodeMap::readOnly
	bool ___readOnly_3;
};
struct XmlNamedNodeMap_t2039_StaticFields{
	// System.Collections.IEnumerator System.Xml.XmlNamedNodeMap::emptyEnumerator
	Object_t * ___emptyEnumerator_0;
};
