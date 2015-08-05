#pragma once
#include <stdint.h>
// System.IO.Stream
struct Stream_t51;
// System.Text.Encoding
struct Encoding_t692;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Text.Decoder
struct Decoder_t3188;
// System.Char[]
struct CharU5BU5D_t663;
// System.Object
#include "mscorlib_System_Object.h"
// System.IO.BinaryReader
struct  BinaryReader_t52  : public Object_t
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_t51 * ___m_stream_0;
	// System.Text.Encoding System.IO.BinaryReader::m_encoding
	Encoding_t692 * ___m_encoding_1;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_t66* ___m_buffer_2;
	// System.Text.Decoder System.IO.BinaryReader::decoder
	Decoder_t3188 * ___decoder_3;
	// System.Char[] System.IO.BinaryReader::charBuffer
	CharU5BU5D_t663* ___charBuffer_4;
	// System.Boolean System.IO.BinaryReader::m_disposed
	bool ___m_disposed_5;
};
