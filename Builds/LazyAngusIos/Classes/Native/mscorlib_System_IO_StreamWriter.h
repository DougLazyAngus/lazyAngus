#pragma once
#include <stdint.h>
// System.Text.Encoding
struct Encoding_t753;
// System.IO.Stream
struct Stream_t51;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Char[]
struct CharU5BU5D_t711;
// System.IO.StreamWriter
struct StreamWriter_t1564;
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
// System.IO.StreamWriter
struct  StreamWriter_t1564  : public TextWriter_t3558
{
	// System.Text.Encoding System.IO.StreamWriter::internalEncoding
	Encoding_t753 * ___internalEncoding_4;
	// System.IO.Stream System.IO.StreamWriter::internalStream
	Stream_t51 * ___internalStream_5;
	// System.Boolean System.IO.StreamWriter::iflush
	bool ___iflush_6;
	// System.Byte[] System.IO.StreamWriter::byte_buf
	ByteU5BU5D_t66* ___byte_buf_7;
	// System.Int32 System.IO.StreamWriter::byte_pos
	int32_t ___byte_pos_8;
	// System.Char[] System.IO.StreamWriter::decode_buf
	CharU5BU5D_t711* ___decode_buf_9;
	// System.Int32 System.IO.StreamWriter::decode_pos
	int32_t ___decode_pos_10;
	// System.Boolean System.IO.StreamWriter::DisposedAlready
	bool ___DisposedAlready_11;
	// System.Boolean System.IO.StreamWriter::preamble_done
	bool ___preamble_done_12;
};
struct StreamWriter_t1564_StaticFields{
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t1564 * ___Null_13;
};
