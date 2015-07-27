#pragma once
#include <stdint.h>
// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t1611;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1569;
// System.Xml.XmlLinkedNode
#include "System_Xml_System_Xml_XmlLinkedNode.h"
// System.Xml.XmlDocumentType
struct  XmlDocumentType_t1623  : public XmlLinkedNode_t1609
{
	// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::entities
	XmlNamedNodeMap_t1611 * ___entities_6;
	// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::notations
	XmlNamedNodeMap_t1611 * ___notations_7;
	// Mono.Xml.DTDObjectModel System.Xml.XmlDocumentType::dtd
	DTDObjectModel_t1569 * ___dtd_8;
};
