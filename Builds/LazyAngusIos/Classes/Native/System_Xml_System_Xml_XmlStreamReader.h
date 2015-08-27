#pragma once
#include <stdint.h>
// System.Xml.XmlInputStream
struct XmlInputStream_t3232;
// System.Xml.XmlException
struct XmlException_t3230;
// System.Xml.NonBlockingStreamReader
#include "System_Xml_System_Xml_NonBlockingStreamReader.h"
// System.Xml.XmlStreamReader
struct  XmlStreamReader_t3233  : public NonBlockingStreamReader_t3234
{
	// System.Xml.XmlInputStream System.Xml.XmlStreamReader::input
	XmlInputStream_t3232 * ___input_12;
};
struct XmlStreamReader_t3233_StaticFields{
	// System.Xml.XmlException System.Xml.XmlStreamReader::invalidDataException
	XmlException_t3230 * ___invalidDataException_13;
};
