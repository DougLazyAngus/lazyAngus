#pragma once
#include <stdint.h>
// System.Xml.XmlTextReader
struct XmlTextReader_t2093;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t2084;
// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_t2094;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Xml.XmlTextReader
struct  XmlTextReader_t2093  : public XmlReader_t2078
{
	// System.Xml.XmlTextReader System.Xml.XmlTextReader::entity
	XmlTextReader_t2093 * ___entity_2;
	// Mono.Xml2.XmlTextReader System.Xml.XmlTextReader::source
	XmlTextReader_t2084 * ___source_3;
	// System.Boolean System.Xml.XmlTextReader::entityInsideAttribute
	bool ___entityInsideAttribute_4;
	// System.Boolean System.Xml.XmlTextReader::insideAttribute
	bool ___insideAttribute_5;
	// System.Collections.Generic.Stack`1<System.String> System.Xml.XmlTextReader::entityNameStack
	Stack_1_t2094 * ___entityNameStack_6;
};
