#pragma once
#include <stdint.h>
// System.IO.Stream
struct Stream_t51;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Net.Security.AuthenticatedStream
struct  AuthenticatedStream_t3936  : public Stream_t51
{
	// System.IO.Stream System.Net.Security.AuthenticatedStream::innerStream
	Stream_t51 * ___innerStream_1;
	// System.Boolean System.Net.Security.AuthenticatedStream::leaveStreamOpen
	bool ___leaveStreamOpen_2;
};
