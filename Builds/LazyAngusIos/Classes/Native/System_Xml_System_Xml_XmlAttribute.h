﻿#pragma once
#include <stdint.h>
// System.Xml.XmlNameEntry
struct XmlNameEntry_t1609;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t1610;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t1611;
// System.Xml.XmlNode
#include "System_Xml_System_Xml_XmlNode.h"
// System.Xml.XmlAttribute
struct  XmlAttribute_t619  : public XmlNode_t615
{
	// System.Xml.XmlNameEntry System.Xml.XmlAttribute::name
	XmlNameEntry_t1609 * ___name_5;
	// System.Boolean System.Xml.XmlAttribute::isDefault
	bool ___isDefault_6;
	// System.Xml.XmlLinkedNode System.Xml.XmlAttribute::lastLinkedChild
	XmlLinkedNode_t1610 * ___lastLinkedChild_7;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlAttribute::schemaInfo
	Object_t * ___schemaInfo_8;
};
