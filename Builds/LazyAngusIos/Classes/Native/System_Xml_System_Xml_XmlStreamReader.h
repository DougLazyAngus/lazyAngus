#pragma once
#include <stdint.h>
// System.Xml.XmlInputStream
struct XmlInputStream_t1627;
// System.Xml.XmlException
struct XmlException_t1625;
// System.Xml.NonBlockingStreamReader
#include "System_Xml_System_Xml_NonBlockingStreamReader.h"
// System.Xml.XmlStreamReader
struct  XmlStreamReader_t1628  : public NonBlockingStreamReader_t1629
{
	// System.Xml.XmlInputStream System.Xml.XmlStreamReader::input
	XmlInputStream_t1627 * ___input_12;
};
struct XmlStreamReader_t1628_StaticFields{
	// System.Xml.XmlException System.Xml.XmlStreamReader::invalidDataException
	XmlException_t1625 * ___invalidDataException_13;
};
