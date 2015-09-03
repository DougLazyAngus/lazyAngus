#pragma once
#include <stdint.h>
// System.Xml.XmlInputStream
struct XmlInputStream_t3560;
// System.Xml.XmlException
struct XmlException_t3516;
// System.Xml.NonBlockingStreamReader
#include "System_Xml_System_Xml_NonBlockingStreamReader.h"
// System.Xml.XmlStreamReader
struct  XmlStreamReader_t3561  : public NonBlockingStreamReader_t3562
{
	// System.Xml.XmlInputStream System.Xml.XmlStreamReader::input
	XmlInputStream_t3560 * ___input_13;
};
struct XmlStreamReader_t3561_StaticFields{
	// System.Xml.XmlException System.Xml.XmlStreamReader::invalidDataException
	XmlException_t3516 * ___invalidDataException_14;
};
