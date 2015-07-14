#pragma once
#include <stdint.h>
// System.Xml.XmlInputStream
struct XmlInputStream_t2053;
// System.Xml.XmlException
struct XmlException_t2052;
// System.Xml.NonBlockingStreamReader
#include "System_Xml_System_Xml_NonBlockingStreamReader.h"
// System.Xml.XmlStreamReader
struct  XmlStreamReader_t2054  : public NonBlockingStreamReader_t2055
{
	// System.Xml.XmlInputStream System.Xml.XmlStreamReader::input
	XmlInputStream_t2053 * ___input_12;
};
struct XmlStreamReader_t2054_StaticFields{
	// System.Xml.XmlException System.Xml.XmlStreamReader::invalidDataException
	XmlException_t2052 * ___invalidDataException_13;
};
