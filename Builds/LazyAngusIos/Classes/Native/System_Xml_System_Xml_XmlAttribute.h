﻿#pragma once
#include <stdint.h>
// System.Xml.XmlNameEntry
struct XmlNameEntry_t2011;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t2012;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t2013;
// System.Xml.XmlNode
#include "System_Xml_System_Xml_XmlNode.h"
// System.Xml.XmlAttribute
struct  XmlAttribute_t547  : public XmlNode_t543
{
	// System.Xml.XmlNameEntry System.Xml.XmlAttribute::name
	XmlNameEntry_t2011 * ___name_5;
	// System.Boolean System.Xml.XmlAttribute::isDefault
	bool ___isDefault_6;
	// System.Xml.XmlLinkedNode System.Xml.XmlAttribute::lastLinkedChild
	XmlLinkedNode_t2012 * ___lastLinkedChild_7;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlAttribute::schemaInfo
	Object_t * ___schemaInfo_8;
};