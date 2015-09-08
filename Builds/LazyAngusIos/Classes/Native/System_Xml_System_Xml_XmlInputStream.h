#pragma once
#include <stdint.h>
// System.Text.Encoding
struct Encoding_t754;
// System.IO.Stream
struct Stream_t51;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Xml.XmlException
struct XmlException_t3517;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Xml.XmlInputStream
struct  XmlInputStream_t3561  : public Stream_t51
{
	// System.Text.Encoding System.Xml.XmlInputStream::enc
	Encoding_t754 * ___enc_3;
	// System.IO.Stream System.Xml.XmlInputStream::stream
	Stream_t51 * ___stream_4;
	// System.Byte[] System.Xml.XmlInputStream::buffer
	ByteU5BU5D_t66* ___buffer_5;
	// System.Int32 System.Xml.XmlInputStream::bufLength
	int32_t ___bufLength_6;
	// System.Int32 System.Xml.XmlInputStream::bufPos
	int32_t ___bufPos_7;
};
struct XmlInputStream_t3561_StaticFields{
	// System.Text.Encoding System.Xml.XmlInputStream::StrictUTF8
	Encoding_t754 * ___StrictUTF8_2;
	// System.Xml.XmlException System.Xml.XmlInputStream::encodingException
	XmlException_t3517 * ___encodingException_8;
};
