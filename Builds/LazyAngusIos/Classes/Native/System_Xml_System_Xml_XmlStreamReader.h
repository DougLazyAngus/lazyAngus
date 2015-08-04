#pragma once
#include <stdint.h>
// System.Xml.XmlInputStream
struct XmlInputStream_t3183;
// System.Xml.XmlException
struct XmlException_t3181;
// System.Xml.NonBlockingStreamReader
#include "System_Xml_System_Xml_NonBlockingStreamReader.h"
// System.Xml.XmlStreamReader
struct  XmlStreamReader_t3184  : public NonBlockingStreamReader_t3185
{
	// System.Xml.XmlInputStream System.Xml.XmlStreamReader::input
	XmlInputStream_t3183 * ___input_12;
};
struct XmlStreamReader_t3184_StaticFields{
	// System.Xml.XmlException System.Xml.XmlStreamReader::invalidDataException
	XmlException_t3181 * ___invalidDataException_13;
};
