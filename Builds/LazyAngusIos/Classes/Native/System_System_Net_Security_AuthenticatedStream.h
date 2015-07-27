#pragma once
#include <stdint.h>
// System.IO.Stream
struct Stream_t24;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Net.Security.AuthenticatedStream
struct  AuthenticatedStream_t1965  : public Stream_t24
{
	// System.IO.Stream System.Net.Security.AuthenticatedStream::innerStream
	Stream_t24 * ___innerStream_1;
	// System.Boolean System.Net.Security.AuthenticatedStream::leaveStreamOpen
	bool ___leaveStreamOpen_2;
};
