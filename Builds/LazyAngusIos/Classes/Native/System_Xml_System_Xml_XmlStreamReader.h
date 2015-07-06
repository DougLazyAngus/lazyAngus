#pragma once
#include <stdint.h>
// System.Xml.XmlInputStream
struct XmlInputStream_t2030;
// System.Xml.XmlException
struct XmlException_t2029;
// System.Xml.NonBlockingStreamReader
#include "System_Xml_System_Xml_NonBlockingStreamReader.h"
// System.Xml.XmlStreamReader
struct  XmlStreamReader_t2031  : public NonBlockingStreamReader_t2032
{
	// System.Xml.XmlInputStream System.Xml.XmlStreamReader::input
	XmlInputStream_t2030 * ___input_12;
};
struct XmlStreamReader_t2031_StaticFields{
	// System.Xml.XmlException System.Xml.XmlStreamReader::invalidDataException
	XmlException_t2029 * ___invalidDataException_13;
};
