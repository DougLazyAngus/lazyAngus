#pragma once
#include <stdint.h>
// System.Xml.XmlInputStream
struct XmlInputStream_t2055;
// System.Xml.XmlException
struct XmlException_t2054;
// System.Xml.NonBlockingStreamReader
#include "System_Xml_System_Xml_NonBlockingStreamReader.h"
// System.Xml.XmlStreamReader
struct  XmlStreamReader_t2056  : public NonBlockingStreamReader_t2057
{
	// System.Xml.XmlInputStream System.Xml.XmlStreamReader::input
	XmlInputStream_t2055 * ___input_12;
};
struct XmlStreamReader_t2056_StaticFields{
	// System.Xml.XmlException System.Xml.XmlStreamReader::invalidDataException
	XmlException_t2054 * ___invalidDataException_13;
};
