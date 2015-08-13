#pragma once
#include <stdint.h>
// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t3214;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3173;
// System.Xml.XmlLinkedNode
#include "System_Xml_System_Xml_XmlLinkedNode.h"
// System.Xml.XmlDocumentType
struct  XmlDocumentType_t3226  : public XmlLinkedNode_t3212
{
	// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::entities
	XmlNamedNodeMap_t3214 * ___entities_6;
	// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::notations
	XmlNamedNodeMap_t3214 * ___notations_7;
	// Mono.Xml.DTDObjectModel System.Xml.XmlDocumentType::dtd
	DTDObjectModel_t3173 * ___dtd_8;
};
