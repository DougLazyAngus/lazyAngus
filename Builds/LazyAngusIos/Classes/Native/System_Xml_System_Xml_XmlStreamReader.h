#pragma once
#include <stdint.h>
// System.Xml.XmlInputStream
struct XmlInputStream_t3561;
// System.Xml.XmlException
struct XmlException_t3517;
// System.Xml.NonBlockingStreamReader
#include "System_Xml_System_Xml_NonBlockingStreamReader.h"
// System.Xml.XmlStreamReader
struct  XmlStreamReader_t3562  : public NonBlockingStreamReader_t3563
{
	// System.Xml.XmlInputStream System.Xml.XmlStreamReader::input
	XmlInputStream_t3561 * ___input_13;
};
struct XmlStreamReader_t3562_StaticFields{
	// System.Xml.XmlException System.Xml.XmlStreamReader::invalidDataException
	XmlException_t3517 * ___invalidDataException_14;
};
