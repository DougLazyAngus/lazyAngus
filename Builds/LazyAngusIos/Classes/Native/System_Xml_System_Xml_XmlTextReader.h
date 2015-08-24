#pragma once
#include <stdint.h>
// System.Xml.XmlTextReader
struct XmlTextReader_t3272;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t3263;
// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_t3273;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Xml.XmlTextReader
struct  XmlTextReader_t3272  : public XmlReader_t3257
{
	// System.Xml.XmlTextReader System.Xml.XmlTextReader::entity
	XmlTextReader_t3272 * ___entity_2;
	// Mono.Xml2.XmlTextReader System.Xml.XmlTextReader::source
	XmlTextReader_t3263 * ___source_3;
	// System.Boolean System.Xml.XmlTextReader::entityInsideAttribute
	bool ___entityInsideAttribute_4;
	// System.Boolean System.Xml.XmlTextReader::insideAttribute
	bool ___insideAttribute_5;
	// System.Collections.Generic.Stack`1<System.String> System.Xml.XmlTextReader::entityNameStack
	Stack_1_t3273 * ___entityNameStack_6;
};
