﻿#pragma once
#include <stdint.h>
// System.Xml.XmlTextReader
struct XmlTextReader_t2095;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t2086;
// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_t2096;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Xml.XmlTextReader
struct  XmlTextReader_t2095  : public XmlReader_t2080
{
	// System.Xml.XmlTextReader System.Xml.XmlTextReader::entity
	XmlTextReader_t2095 * ___entity_2;
	// Mono.Xml2.XmlTextReader System.Xml.XmlTextReader::source
	XmlTextReader_t2086 * ___source_3;
	// System.Boolean System.Xml.XmlTextReader::entityInsideAttribute
	bool ___entityInsideAttribute_4;
	// System.Boolean System.Xml.XmlTextReader::insideAttribute
	bool ___insideAttribute_5;
	// System.Collections.Generic.Stack`1<System.String> System.Xml.XmlTextReader::entityNameStack
	Stack_1_t2096 * ___entityNameStack_6;
};
