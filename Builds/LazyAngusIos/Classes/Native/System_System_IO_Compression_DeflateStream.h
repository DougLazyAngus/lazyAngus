#pragma once
#include <stdint.h>
// System.IO.Stream
struct Stream_t51;
// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t4297;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.IO.Compression.CompressionMode
#include "System_System_IO_Compression_CompressionMode.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.InteropServices.GCHandle
#include "mscorlib_System_Runtime_InteropServices_GCHandle.h"
// System.IO.Compression.DeflateStream
struct  DeflateStream_t4300  : public Stream_t51
{
	// System.IO.Stream System.IO.Compression.DeflateStream::base_stream
	Stream_t51 * ___base_stream_2;
	// System.IO.Compression.CompressionMode System.IO.Compression.DeflateStream::mode
	int32_t ___mode_3;
	// System.Boolean System.IO.Compression.DeflateStream::leaveOpen
	bool ___leaveOpen_4;
	// System.Boolean System.IO.Compression.DeflateStream::disposed
	bool ___disposed_5;
	// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite System.IO.Compression.DeflateStream::feeder
	UnmanagedReadOrWrite_t4297 * ___feeder_6;
	// System.IntPtr System.IO.Compression.DeflateStream::z_stream
	IntPtr_t ___z_stream_7;
	// System.Byte[] System.IO.Compression.DeflateStream::io_buffer
	ByteU5BU5D_t66* ___io_buffer_8;
	// System.Runtime.InteropServices.GCHandle System.IO.Compression.DeflateStream::data
	GCHandle_t4301  ___data_9;
};
