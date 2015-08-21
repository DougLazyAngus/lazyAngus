#pragma once
#include <stdint.h>
// System.Xml.XmlInputStream
struct XmlInputStream_t3229;
// System.Xml.XmlException
struct XmlException_t3227;
// System.Xml.NonBlockingStreamReader
#include "System_Xml_System_Xml_NonBlockingStreamReader.h"
// System.Xml.XmlStreamReader
struct  XmlStreamReader_t3230  : public NonBlockingStreamReader_t3231
{
	// System.Xml.XmlInputStream System.Xml.XmlStreamReader::input
	XmlInputStream_t3229 * ___input_12;
};
struct XmlStreamReader_t3230_StaticFields{
	// System.Xml.XmlException System.Xml.XmlStreamReader::invalidDataException
	XmlException_t3227 * ___invalidDataException_13;
};
