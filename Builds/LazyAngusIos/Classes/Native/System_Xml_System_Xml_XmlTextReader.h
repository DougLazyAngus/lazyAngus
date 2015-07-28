#pragma once
#include <stdint.h>
// System.Xml.XmlTextReader
struct XmlTextReader_t3214;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t3205;
// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_t3215;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Xml.XmlTextReader
struct  XmlTextReader_t3214  : public XmlReader_t3199
{
	// System.Xml.XmlTextReader System.Xml.XmlTextReader::entity
	XmlTextReader_t3214 * ___entity_2;
	// Mono.Xml2.XmlTextReader System.Xml.XmlTextReader::source
	XmlTextReader_t3205 * ___source_3;
	// System.Boolean System.Xml.XmlTextReader::entityInsideAttribute
	bool ___entityInsideAttribute_4;
	// System.Boolean System.Xml.XmlTextReader::insideAttribute
	bool ___insideAttribute_5;
	// System.Collections.Generic.Stack`1<System.String> System.Xml.XmlTextReader::entityNameStack
	Stack_1_t3215 * ___entityNameStack_6;
};
