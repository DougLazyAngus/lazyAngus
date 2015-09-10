#pragma once
#include <stdint.h>
// System.Xml.XmlReader
struct XmlReader_t3379;
// System.Xml.XmlTextReader
struct XmlTextReader_t3355;
// System.Xml.XmlResolver
struct XmlResolver_t3444;
// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t3564;
// Mono.Xml.DTDValidatingReader
struct DTDValidatingReader_t3497;
// Mono.Xml.IHasXmlSchemaInfo
struct IHasXmlSchemaInfo_t3445;
// System.Text.StringBuilder
struct StringBuilder_t261;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3448;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Xml.EntityHandling
#include "System_Xml_System_Xml_EntityHandling.h"
// System.Xml.ValidationType
#include "System_Xml_System_Xml_ValidationType.h"
// System.Xml.XmlValidatingReader
struct  XmlValidatingReader_t3494  : public XmlReader_t3379
{
	// System.Xml.EntityHandling System.Xml.XmlValidatingReader::entityHandling
	int32_t ___entityHandling_2;
	// System.Xml.XmlReader System.Xml.XmlValidatingReader::sourceReader
	XmlReader_t3379 * ___sourceReader_3;
	// System.Xml.XmlTextReader System.Xml.XmlValidatingReader::xmlTextReader
	XmlTextReader_t3355 * ___xmlTextReader_4;
	// System.Xml.XmlReader System.Xml.XmlValidatingReader::validatingReader
	XmlReader_t3379 * ___validatingReader_5;
	// System.Xml.XmlResolver System.Xml.XmlValidatingReader::resolver
	XmlResolver_t3444 * ___resolver_6;
	// System.Boolean System.Xml.XmlValidatingReader::resolverSpecified
	bool ___resolverSpecified_7;
	// System.Xml.ValidationType System.Xml.XmlValidatingReader::validationType
	int32_t ___validationType_8;
	// System.Xml.Schema.XmlSchemaCollection System.Xml.XmlValidatingReader::schemas
	XmlSchemaCollection_t3564 * ___schemas_9;
	// Mono.Xml.DTDValidatingReader System.Xml.XmlValidatingReader::dtdReader
	DTDValidatingReader_t3497 * ___dtdReader_10;
	// Mono.Xml.IHasXmlSchemaInfo System.Xml.XmlValidatingReader::schemaInfo
	Object_t * ___schemaInfo_11;
	// System.Text.StringBuilder System.Xml.XmlValidatingReader::storedCharacters
	StringBuilder_t261 * ___storedCharacters_12;
	// System.Xml.Schema.ValidationEventHandler System.Xml.XmlValidatingReader::ValidationEventHandler
	ValidationEventHandler_t3448 * ___ValidationEventHandler_13;
};
