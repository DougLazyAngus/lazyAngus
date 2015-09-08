#pragma once
#include <stdint.h>
// System.Xml.XmlNameEntry
struct XmlNameEntry_t3505;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3503;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t3506;
// System.Xml.XmlNode
#include "System_Xml_System_Xml_XmlNode.h"
// System.Xml.XmlAttribute
struct  XmlAttribute_t739  : public XmlNode_t735
{
	// System.Xml.XmlNameEntry System.Xml.XmlAttribute::name
	XmlNameEntry_t3505 * ___name_5;
	// System.Boolean System.Xml.XmlAttribute::isDefault
	bool ___isDefault_6;
	// System.Xml.XmlLinkedNode System.Xml.XmlAttribute::lastLinkedChild
	XmlLinkedNode_t3503 * ___lastLinkedChild_7;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlAttribute::schemaInfo
	Object_t * ___schemaInfo_8;
};
