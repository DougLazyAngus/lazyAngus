#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Char[]
struct CharU5BU5D_t715;
// System.Text.Encoding
struct Encoding_t757;
// System.Text.Decoder
struct Decoder_t3567;
// System.IO.Stream
struct Stream_t51;
// System.Text.StringBuilder
struct StringBuilder_t261;
// System.IO.StreamReader
struct StreamReader_t1182;
// System.IO.TextReader
#include "mscorlib_System_IO_TextReader.h"
// System.IO.StreamReader
struct  StreamReader_t1182  : public TextReader_t3376
{
	// System.Byte[] System.IO.StreamReader::input_buffer
	ByteU5BU5D_t66* ___input_buffer_2;
	// System.Char[] System.IO.StreamReader::decoded_buffer
	CharU5BU5D_t715* ___decoded_buffer_3;
	// System.Int32 System.IO.StreamReader::decoded_count
	int32_t ___decoded_count_4;
	// System.Int32 System.IO.StreamReader::pos
	int32_t ___pos_5;
	// System.Int32 System.IO.StreamReader::buffer_size
	int32_t ___buffer_size_6;
	// System.Int32 System.IO.StreamReader::do_checks
	int32_t ___do_checks_7;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_t757 * ___encoding_8;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t3567 * ___decoder_9;
	// System.IO.Stream System.IO.StreamReader::base_stream
	Stream_t51 * ___base_stream_10;
	// System.Boolean System.IO.StreamReader::mayBlock
	bool ___mayBlock_11;
	// System.Text.StringBuilder System.IO.StreamReader::line_builder
	StringBuilder_t261 * ___line_builder_12;
	// System.Boolean System.IO.StreamReader::foundCR
	bool ___foundCR_14;
};
struct StreamReader_t1182_StaticFields{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t1182 * ___Null_13;
};
