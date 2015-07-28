#pragma once
#include <stdint.h>
// System.Xml.XmlInputStream
struct XmlInputStream_t3174;
// System.Xml.XmlException
struct XmlException_t3172;
// System.Xml.NonBlockingStreamReader
#include "System_Xml_System_Xml_NonBlockingStreamReader.h"
// System.Xml.XmlStreamReader
struct  XmlStreamReader_t3175  : public NonBlockingStreamReader_t3176
{
	// System.Xml.XmlInputStream System.Xml.XmlStreamReader::input
	XmlInputStream_t3174 * ___input_12;
};
struct XmlStreamReader_t3175_StaticFields{
	// System.Xml.XmlException System.Xml.XmlStreamReader::invalidDataException
	XmlException_t3172 * ___invalidDataException_13;
};
