#pragma once
#include <stdint.h>
// System.Xml.XmlReader
struct XmlReader_t3369;
// System.Xml.XmlNodeReaderImpl
struct XmlNodeReaderImpl_t3530;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Xml.XmlNodeReader
struct  XmlNodeReader_t3381  : public XmlReader_t3369
{
	// System.Xml.XmlReader System.Xml.XmlNodeReader::entity
	XmlReader_t3369 * ___entity_2;
	// System.Xml.XmlNodeReaderImpl System.Xml.XmlNodeReader::source
	XmlNodeReaderImpl_t3530 * ___source_3;
	// System.Boolean System.Xml.XmlNodeReader::entityInsideAttribute
	bool ___entityInsideAttribute_4;
	// System.Boolean System.Xml.XmlNodeReader::insideAttribute
	bool ___insideAttribute_5;
};
