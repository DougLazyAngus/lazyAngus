#pragma once
#include <stdint.h>
// System.Xml.XmlTextReader
struct XmlTextReader_t2048;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t2039;
// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_t2049;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Xml.XmlTextReader
struct  XmlTextReader_t2048  : public XmlReader_t2033
{
	// System.Xml.XmlTextReader System.Xml.XmlTextReader::entity
	XmlTextReader_t2048 * ___entity_2;
	// Mono.Xml2.XmlTextReader System.Xml.XmlTextReader::source
	XmlTextReader_t2039 * ___source_3;
	// System.Boolean System.Xml.XmlTextReader::entityInsideAttribute
	bool ___entityInsideAttribute_4;
	// System.Boolean System.Xml.XmlTextReader::insideAttribute
	bool ___insideAttribute_5;
	// System.Collections.Generic.Stack`1<System.String> System.Xml.XmlTextReader::entityNameStack
	Stack_1_t2049 * ___entityNameStack_6;
};
