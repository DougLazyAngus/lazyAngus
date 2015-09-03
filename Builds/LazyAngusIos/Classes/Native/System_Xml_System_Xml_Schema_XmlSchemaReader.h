#pragma once
#include <stdint.h>
// System.Xml.XmlReader
struct XmlReader_t3368;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3437;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Xml.Schema.XmlSchemaReader
struct  XmlSchemaReader_t3699  : public XmlReader_t3368
{
	// System.Xml.XmlReader System.Xml.Schema.XmlSchemaReader::reader
	XmlReader_t3368 * ___reader_2;
	// System.Xml.Schema.ValidationEventHandler System.Xml.Schema.XmlSchemaReader::handler
	ValidationEventHandler_t3437 * ___handler_3;
	// System.Boolean System.Xml.Schema.XmlSchemaReader::hasLineInfo
	bool ___hasLineInfo_4;
};
