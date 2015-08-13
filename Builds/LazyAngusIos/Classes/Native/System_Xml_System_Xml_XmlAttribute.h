#pragma once
#include <stdint.h>
// System.Xml.XmlNameEntry
struct XmlNameEntry_t3211;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3212;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t3213;
// System.Xml.XmlNode
#include "System_Xml_System_Xml_XmlNode.h"
// System.Xml.XmlAttribute
struct  XmlAttribute_t721  : public XmlNode_t717
{
	// System.Xml.XmlNameEntry System.Xml.XmlAttribute::name
	XmlNameEntry_t3211 * ___name_5;
	// System.Boolean System.Xml.XmlAttribute::isDefault
	bool ___isDefault_6;
	// System.Xml.XmlLinkedNode System.Xml.XmlAttribute::lastLinkedChild
	XmlLinkedNode_t3212 * ___lastLinkedChild_7;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlAttribute::schemaInfo
	Object_t * ___schemaInfo_8;
};
