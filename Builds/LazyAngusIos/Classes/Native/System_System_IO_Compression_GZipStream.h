#pragma once
#include <stdint.h>
// System.IO.Compression.DeflateStream
struct DeflateStream_t3933;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.IO.Compression.GZipStream
struct  GZipStream_t3935  : public Stream_t51
{
	// System.IO.Compression.DeflateStream System.IO.Compression.GZipStream::deflateStream
	DeflateStream_t3933 * ___deflateStream_1;
};
