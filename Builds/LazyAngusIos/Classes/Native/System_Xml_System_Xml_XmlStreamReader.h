#pragma once
#include <stdint.h>
// System.Xml.XmlInputStream
struct XmlInputStream_t3184;
// System.Xml.XmlException
struct XmlException_t3182;
// System.Xml.NonBlockingStreamReader
#include "System_Xml_System_Xml_NonBlockingStreamReader.h"
// System.Xml.XmlStreamReader
struct  XmlStreamReader_t3185  : public NonBlockingStreamReader_t3186
{
	// System.Xml.XmlInputStream System.Xml.XmlStreamReader::input
	XmlInputStream_t3184 * ___input_12;
};
struct XmlStreamReader_t3185_StaticFields{
	// System.Xml.XmlException System.Xml.XmlStreamReader::invalidDataException
	XmlException_t3182 * ___invalidDataException_13;
};
