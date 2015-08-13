#pragma once
#include <stdint.h>
// System.Net.FtpWebRequest
struct FtpWebRequest_t4040;
// System.IO.Stream
struct Stream_t51;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Net.FtpDataStream
struct  FtpDataStream_t4041  : public Stream_t51
{
	// System.Net.FtpWebRequest System.Net.FtpDataStream::request
	FtpWebRequest_t4040 * ___request_1;
	// System.IO.Stream System.Net.FtpDataStream::networkStream
	Stream_t51 * ___networkStream_2;
	// System.Boolean System.Net.FtpDataStream::disposed
	bool ___disposed_3;
	// System.Boolean System.Net.FtpDataStream::isRead
	bool ___isRead_4;
	// System.Int32 System.Net.FtpDataStream::totalRead
	int32_t ___totalRead_5;
};
