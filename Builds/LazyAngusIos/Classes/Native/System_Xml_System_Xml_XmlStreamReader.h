#pragma once
#include <stdint.h>
// System.Xml.XmlInputStream
struct XmlInputStream_t3173;
// System.Xml.XmlException
struct XmlException_t3171;
// System.Xml.NonBlockingStreamReader
#include "System_Xml_System_Xml_NonBlockingStreamReader.h"
// System.Xml.XmlStreamReader
struct  XmlStreamReader_t3174  : public NonBlockingStreamReader_t3175
{
	// System.Xml.XmlInputStream System.Xml.XmlStreamReader::input
	XmlInputStream_t3173 * ___input_12;
};
struct XmlStreamReader_t3174_StaticFields{
	// System.Xml.XmlException System.Xml.XmlStreamReader::invalidDataException
	XmlException_t3171 * ___invalidDataException_13;
};
