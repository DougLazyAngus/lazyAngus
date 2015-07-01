#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t1990;
// System.Xml.XmlLinkedNode
#include "System_Xml_System_Xml_XmlLinkedNode.h"
// System.Xml.XmlEntityReference
struct  XmlEntityReference_t2006  : public XmlLinkedNode_t1990
{
	// System.String System.Xml.XmlEntityReference::entityName
	String_t* ___entityName_6;
	// System.Xml.XmlLinkedNode System.Xml.XmlEntityReference::lastLinkedChild
	XmlLinkedNode_t1990 * ___lastLinkedChild_7;
};
