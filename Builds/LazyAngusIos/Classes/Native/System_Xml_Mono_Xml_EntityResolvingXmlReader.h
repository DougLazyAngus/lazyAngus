#pragma once
#include <stdint.h>
// Mono.Xml.EntityResolvingXmlReader
struct EntityResolvingXmlReader_t3486;
// System.Xml.XmlReader
struct XmlReader_t3372;
// System.Xml.XmlParserContext
struct XmlParserContext_t3491;
// System.Xml.XmlResolver
struct XmlResolver_t3437;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Xml.EntityHandling
#include "System_Xml_System_Xml_EntityHandling.h"
// Mono.Xml.EntityResolvingXmlReader
struct  EntityResolvingXmlReader_t3486  : public XmlReader_t3372
{
	// Mono.Xml.EntityResolvingXmlReader Mono.Xml.EntityResolvingXmlReader::entity
	EntityResolvingXmlReader_t3486 * ___entity_2;
	// System.Xml.XmlReader Mono.Xml.EntityResolvingXmlReader::source
	XmlReader_t3372 * ___source_3;
	// System.Xml.XmlParserContext Mono.Xml.EntityResolvingXmlReader::context
	XmlParserContext_t3491 * ___context_4;
	// System.Xml.XmlResolver Mono.Xml.EntityResolvingXmlReader::resolver
	XmlResolver_t3437 * ___resolver_5;
	// System.Xml.EntityHandling Mono.Xml.EntityResolvingXmlReader::entity_handling
	int32_t ___entity_handling_6;
	// System.Boolean Mono.Xml.EntityResolvingXmlReader::entity_inside_attr
	bool ___entity_inside_attr_7;
	// System.Boolean Mono.Xml.EntityResolvingXmlReader::inside_attr
	bool ___inside_attr_8;
	// System.Boolean Mono.Xml.EntityResolvingXmlReader::do_resolve
	bool ___do_resolve_9;
};
