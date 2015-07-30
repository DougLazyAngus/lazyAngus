#pragma once
#include <stdint.h>
// System.Xml.XmlNameEntry
struct XmlNameEntry_t3161;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3162;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t3163;
// System.Xml.XmlNode
#include "System_Xml_System_Xml_XmlNode.h"
// System.Xml.XmlAttribute
struct  XmlAttribute_t671  : public XmlNode_t667
{
	// System.Xml.XmlNameEntry System.Xml.XmlAttribute::name
	XmlNameEntry_t3161 * ___name_5;
	// System.Boolean System.Xml.XmlAttribute::isDefault
	bool ___isDefault_6;
	// System.Xml.XmlLinkedNode System.Xml.XmlAttribute::lastLinkedChild
	XmlLinkedNode_t3162 * ___lastLinkedChild_7;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlAttribute::schemaInfo
	Object_t * ___schemaInfo_8;
};
