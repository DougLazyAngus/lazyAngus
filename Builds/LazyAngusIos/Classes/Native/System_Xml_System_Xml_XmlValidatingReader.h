#pragma once
#include <stdint.h>
// System.Xml.XmlReader
struct XmlReader_t3372;
// System.Xml.XmlTextReader
struct XmlTextReader_t3348;
// System.Xml.XmlResolver
struct XmlResolver_t3437;
// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t3557;
// Mono.Xml.DTDValidatingReader
struct DTDValidatingReader_t3490;
// Mono.Xml.IHasXmlSchemaInfo
struct IHasXmlSchemaInfo_t3438;
// System.Text.StringBuilder
struct StringBuilder_t261;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3441;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Xml.EntityHandling
#include "System_Xml_System_Xml_EntityHandling.h"
// System.Xml.ValidationType
#include "System_Xml_System_Xml_ValidationType.h"
// System.Xml.XmlValidatingReader
struct  XmlValidatingReader_t3487  : public XmlReader_t3372
{
	// System.Xml.EntityHandling System.Xml.XmlValidatingReader::entityHandling
	int32_t ___entityHandling_2;
	// System.Xml.XmlReader System.Xml.XmlValidatingReader::sourceReader
	XmlReader_t3372 * ___sourceReader_3;
	// System.Xml.XmlTextReader System.Xml.XmlValidatingReader::xmlTextReader
	XmlTextReader_t3348 * ___xmlTextReader_4;
	// System.Xml.XmlReader System.Xml.XmlValidatingReader::validatingReader
	XmlReader_t3372 * ___validatingReader_5;
	// System.Xml.XmlResolver System.Xml.XmlValidatingReader::resolver
	XmlResolver_t3437 * ___resolver_6;
	// System.Boolean System.Xml.XmlValidatingReader::resolverSpecified
	bool ___resolverSpecified_7;
	// System.Xml.ValidationType System.Xml.XmlValidatingReader::validationType
	int32_t ___validationType_8;
	// System.Xml.Schema.XmlSchemaCollection System.Xml.XmlValidatingReader::schemas
	XmlSchemaCollection_t3557 * ___schemas_9;
	// Mono.Xml.DTDValidatingReader System.Xml.XmlValidatingReader::dtdReader
	DTDValidatingReader_t3490 * ___dtdReader_10;
	// Mono.Xml.IHasXmlSchemaInfo System.Xml.XmlValidatingReader::schemaInfo
	Object_t * ___schemaInfo_11;
	// System.Text.StringBuilder System.Xml.XmlValidatingReader::storedCharacters
	StringBuilder_t261 * ___storedCharacters_12;
	// System.Xml.Schema.ValidationEventHandler System.Xml.XmlValidatingReader::ValidationEventHandler
	ValidationEventHandler_t3441 * ___ValidationEventHandler_13;
};
