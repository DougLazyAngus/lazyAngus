#pragma once
#include <stdint.h>
// System.Xml.XmlInputStream
struct XmlInputStream_t2008;
// System.Xml.XmlException
struct XmlException_t2007;
// System.Xml.NonBlockingStreamReader
#include "System_Xml_System_Xml_NonBlockingStreamReader.h"
// System.Xml.XmlStreamReader
struct  XmlStreamReader_t2009  : public NonBlockingStreamReader_t2010
{
	// System.Xml.XmlInputStream System.Xml.XmlStreamReader::input
	XmlInputStream_t2008 * ___input_12;
};
struct XmlStreamReader_t2009_StaticFields{
	// System.Xml.XmlException System.Xml.XmlStreamReader::invalidDataException
	XmlException_t2007 * ___invalidDataException_13;
};
