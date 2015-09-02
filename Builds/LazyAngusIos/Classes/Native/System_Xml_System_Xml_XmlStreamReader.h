#pragma once
#include <stdint.h>
// System.Xml.XmlInputStream
struct XmlInputStream_t3248;
// System.Xml.XmlException
struct XmlException_t3246;
// System.Xml.NonBlockingStreamReader
#include "System_Xml_System_Xml_NonBlockingStreamReader.h"
// System.Xml.XmlStreamReader
struct  XmlStreamReader_t3249  : public NonBlockingStreamReader_t3250
{
	// System.Xml.XmlInputStream System.Xml.XmlStreamReader::input
	XmlInputStream_t3248 * ___input_12;
};
struct XmlStreamReader_t3249_StaticFields{
	// System.Xml.XmlException System.Xml.XmlStreamReader::invalidDataException
	XmlException_t3246 * ___invalidDataException_13;
};
