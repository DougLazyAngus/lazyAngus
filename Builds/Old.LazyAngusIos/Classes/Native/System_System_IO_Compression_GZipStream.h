#pragma once
#include <stdint.h>
// System.IO.Compression.DeflateStream
struct DeflateStream_t1464;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.IO.Compression.GZipStream
struct  GZipStream_t1466  : public Stream_t24
{
	// System.IO.Compression.DeflateStream System.IO.Compression.GZipStream::deflateStream
	DeflateStream_t1464 * ___deflateStream_1;
};
