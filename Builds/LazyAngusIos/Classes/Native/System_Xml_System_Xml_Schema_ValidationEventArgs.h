#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t3624;
// System.String
struct String_t;
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
// System.Xml.Schema.XmlSeverityType
#include "System_Xml_System_Xml_Schema_XmlSeverityType.h"
// System.Xml.Schema.ValidationEventArgs
struct  ValidationEventArgs_t3625  : public EventArgs_t1318
{
	// System.Xml.Schema.XmlSchemaException System.Xml.Schema.ValidationEventArgs::exception
	XmlSchemaException_t3624 * ___exception_1;
	// System.String System.Xml.Schema.ValidationEventArgs::message
	String_t* ___message_2;
	// System.Xml.Schema.XmlSeverityType System.Xml.Schema.ValidationEventArgs::severity
	int32_t ___severity_3;
};
