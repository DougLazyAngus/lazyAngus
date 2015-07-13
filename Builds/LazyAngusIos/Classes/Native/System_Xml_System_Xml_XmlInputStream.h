﻿#pragma once
#include <stdint.h>
// System.Text.Encoding
struct Encoding_t555;
// System.IO.Stream
struct Stream_t24;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Xml.XmlException
struct XmlException_t2029;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Xml.XmlInputStream
struct  XmlInputStream_t2030  : public Stream_t24
{
	// System.Text.Encoding System.Xml.XmlInputStream::enc
	Encoding_t555 * ___enc_2;
	// System.IO.Stream System.Xml.XmlInputStream::stream
	Stream_t24 * ___stream_3;
	// System.Byte[] System.Xml.XmlInputStream::buffer
	ByteU5BU5D_t36* ___buffer_4;
	// System.Int32 System.Xml.XmlInputStream::bufLength
	int32_t ___bufLength_5;
	// System.Int32 System.Xml.XmlInputStream::bufPos
	int32_t ___bufPos_6;
};
struct XmlInputStream_t2030_StaticFields{
	// System.Text.Encoding System.Xml.XmlInputStream::StrictUTF8
	Encoding_t555 * ___StrictUTF8_1;
	// System.Xml.XmlException System.Xml.XmlInputStream::encodingException
	XmlException_t2029 * ___encodingException_7;
};