#pragma once
#include <stdint.h>
// System.Xml.XmlInputStream
struct XmlInputStream_t3185;
// System.Xml.XmlException
struct XmlException_t3183;
// System.Xml.NonBlockingStreamReader
#include "System_Xml_System_Xml_NonBlockingStreamReader.h"
// System.Xml.XmlStreamReader
struct  XmlStreamReader_t3186  : public NonBlockingStreamReader_t3187
{
	// System.Xml.XmlInputStream System.Xml.XmlStreamReader::input
	XmlInputStream_t3185 * ___input_12;
};
struct XmlStreamReader_t3186_StaticFields{
	// System.Xml.XmlException System.Xml.XmlStreamReader::invalidDataException
	XmlException_t3183 * ___invalidDataException_13;
};
