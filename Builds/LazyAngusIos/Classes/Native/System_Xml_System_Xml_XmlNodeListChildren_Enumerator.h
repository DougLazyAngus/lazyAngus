#pragma once
#include <stdint.h>
// System.Xml.IHasXmlChildNode
struct IHasXmlChildNode_t3538;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3510;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlNodeListChildren/Enumerator
struct  Enumerator_t3539  : public Object_t
{
	// System.Xml.IHasXmlChildNode System.Xml.XmlNodeListChildren/Enumerator::parent
	Object_t * ___parent_0;
	// System.Xml.XmlLinkedNode System.Xml.XmlNodeListChildren/Enumerator::currentChild
	XmlLinkedNode_t3510 * ___currentChild_1;
	// System.Boolean System.Xml.XmlNodeListChildren/Enumerator::passedLastNode
	bool ___passedLastNode_2;
};
