#pragma once
#include <stdint.h>
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Xml.XmlNode
struct XmlNode_t614;
// System.Collections.ArrayList
struct ArrayList_t1555;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlNamedNodeMap
struct  XmlNamedNodeMap_t1611  : public Object_t
{
	// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::parent
	XmlNode_t614 * ___parent_1;
	// System.Collections.ArrayList System.Xml.XmlNamedNodeMap::nodeList
	ArrayList_t1555 * ___nodeList_2;
	// System.Boolean System.Xml.XmlNamedNodeMap::readOnly
	bool ___readOnly_3;
};
struct XmlNamedNodeMap_t1611_StaticFields{
	// System.Collections.IEnumerator System.Xml.XmlNamedNodeMap::emptyEnumerator
	Object_t * ___emptyEnumerator_0;
};
