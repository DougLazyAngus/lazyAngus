#pragma once
#include <stdint.h>
// System.IO.Compression.DeflateStream
struct DeflateStream_t4300;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.IO.Compression.GZipStream
struct  GZipStream_t4302  : public Stream_t51
{
	// System.IO.Compression.DeflateStream System.IO.Compression.GZipStream::deflateStream
	DeflateStream_t4300 * ___deflateStream_2;
};
