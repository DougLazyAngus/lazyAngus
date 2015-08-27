#pragma once
#include <stdint.h>
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t724;
// System.Xml.XmlNameEntry
struct XmlNameEntry_t3212;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3213;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t3214;
// System.Xml.XmlLinkedNode
#include "System_Xml_System_Xml_XmlLinkedNode.h"
// System.Xml.XmlElement
struct  XmlElement_t679  : public XmlLinkedNode_t3213
{
	// System.Xml.XmlAttributeCollection System.Xml.XmlElement::attributes
	XmlAttributeCollection_t724 * ___attributes_6;
	// System.Xml.XmlNameEntry System.Xml.XmlElement::name
	XmlNameEntry_t3212 * ___name_7;
	// System.Xml.XmlLinkedNode System.Xml.XmlElement::lastLinkedChild
	XmlLinkedNode_t3213 * ___lastLinkedChild_8;
	// System.Boolean System.Xml.XmlElement::isNotEmpty
	bool ___isNotEmpty_9;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlElement::schemaInfo
	Object_t * ___schemaInfo_10;
};
