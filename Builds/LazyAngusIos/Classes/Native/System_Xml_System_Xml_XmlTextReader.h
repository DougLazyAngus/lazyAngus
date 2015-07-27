#pragma once
#include <stdint.h>
// System.Xml.XmlTextReader
struct XmlTextReader_t1670;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t1661;
// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_t1671;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Xml.XmlTextReader
struct  XmlTextReader_t1670  : public XmlReader_t1655
{
	// System.Xml.XmlTextReader System.Xml.XmlTextReader::entity
	XmlTextReader_t1670 * ___entity_2;
	// Mono.Xml2.XmlTextReader System.Xml.XmlTextReader::source
	XmlTextReader_t1661 * ___source_3;
	// System.Boolean System.Xml.XmlTextReader::entityInsideAttribute
	bool ___entityInsideAttribute_4;
	// System.Boolean System.Xml.XmlTextReader::insideAttribute
	bool ___insideAttribute_5;
	// System.Collections.Generic.Stack`1<System.String> System.Xml.XmlTextReader::entityNameStack
	Stack_1_t1671 * ___entityNameStack_6;
};
