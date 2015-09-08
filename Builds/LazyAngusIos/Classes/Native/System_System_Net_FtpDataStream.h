#pragma once
#include <stdint.h>
// System.Net.FtpWebRequest
struct FtpWebRequest_t4366;
// System.IO.Stream
struct Stream_t51;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Net.FtpDataStream
struct  FtpDataStream_t4367  : public Stream_t51
{
	// System.Net.FtpWebRequest System.Net.FtpDataStream::request
	FtpWebRequest_t4366 * ___request_2;
	// System.IO.Stream System.Net.FtpDataStream::networkStream
	Stream_t51 * ___networkStream_3;
	// System.Boolean System.Net.FtpDataStream::disposed
	bool ___disposed_4;
	// System.Boolean System.Net.FtpDataStream::isRead
	bool ___isRead_5;
	// System.Int32 System.Net.FtpDataStream::totalRead
	int32_t ___totalRead_6;
};
