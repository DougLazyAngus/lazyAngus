#pragma once
#include <stdint.h>
// Mono.Xml.EntityResolvingXmlReader
struct EntityResolvingXmlReader_t3493;
// System.Xml.XmlReader
struct XmlReader_t3379;
// System.Xml.XmlParserContext
struct XmlParserContext_t3498;
// System.Xml.XmlResolver
struct XmlResolver_t3444;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Xml.EntityHandling
#include "System_Xml_System_Xml_EntityHandling.h"
// Mono.Xml.EntityResolvingXmlReader
struct  EntityResolvingXmlReader_t3493  : public XmlReader_t3379
{
	// Mono.Xml.EntityResolvingXmlReader Mono.Xml.EntityResolvingXmlReader::entity
	EntityResolvingXmlReader_t3493 * ___entity_2;
	// System.Xml.XmlReader Mono.Xml.EntityResolvingXmlReader::source
	XmlReader_t3379 * ___source_3;
	// System.Xml.XmlParserContext Mono.Xml.EntityResolvingXmlReader::context
	XmlParserContext_t3498 * ___context_4;
	// System.Xml.XmlResolver Mono.Xml.EntityResolvingXmlReader::resolver
	XmlResolver_t3444 * ___resolver_5;
	// System.Xml.EntityHandling Mono.Xml.EntityResolvingXmlReader::entity_handling
	int32_t ___entity_handling_6;
	// System.Boolean Mono.Xml.EntityResolvingXmlReader::entity_inside_attr
	bool ___entity_inside_attr_7;
	// System.Boolean Mono.Xml.EntityResolvingXmlReader::inside_attr
	bool ___inside_attr_8;
	// System.Boolean Mono.Xml.EntityResolvingXmlReader::do_resolve
	bool ___do_resolve_9;
};
