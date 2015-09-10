#pragma once
#include <stdint.h>
// System.Xml.XmlInputStream
struct XmlInputStream_t3571;
// System.Xml.XmlException
struct XmlException_t3527;
// System.Xml.NonBlockingStreamReader
#include "System_Xml_System_Xml_NonBlockingStreamReader.h"
// System.Xml.XmlStreamReader
struct  XmlStreamReader_t3572  : public NonBlockingStreamReader_t3573
{
	// System.Xml.XmlInputStream System.Xml.XmlStreamReader::input
	XmlInputStream_t3571 * ___input_13;
};
struct XmlStreamReader_t3572_StaticFields{
	// System.Xml.XmlException System.Xml.XmlStreamReader::invalidDataException
	XmlException_t3527 * ___invalidDataException_14;
};
