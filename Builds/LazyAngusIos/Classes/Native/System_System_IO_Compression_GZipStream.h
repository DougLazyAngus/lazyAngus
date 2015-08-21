#pragma once
#include <stdint.h>
// System.IO.Compression.DeflateStream
struct DeflateStream_t3976;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.IO.Compression.GZipStream
struct  GZipStream_t3978  : public Stream_t51
{
	// System.IO.Compression.DeflateStream System.IO.Compression.GZipStream::deflateStream
	DeflateStream_t3976 * ___deflateStream_1;
};
