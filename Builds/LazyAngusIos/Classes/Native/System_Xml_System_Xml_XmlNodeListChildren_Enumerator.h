#pragma once
#include <stdint.h>
// System.Xml.IHasXmlChildNode
struct IHasXmlChildNode_t2070;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t2037;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlNodeListChildren/Enumerator
struct  Enumerator_t2071  : public Object_t
{
	// System.Xml.IHasXmlChildNode System.Xml.XmlNodeListChildren/Enumerator::parent
	Object_t * ___parent_0;
	// System.Xml.XmlLinkedNode System.Xml.XmlNodeListChildren/Enumerator::currentChild
	XmlLinkedNode_t2037 * ___currentChild_1;
	// System.Boolean System.Xml.XmlNodeListChildren/Enumerator::passedLastNode
	bool ___passedLastNode_2;
};
