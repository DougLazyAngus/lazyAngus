﻿#pragma once
#include <stdint.h>
// System.Threading.ManualResetEvent
struct ManualResetEvent_t1810;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.Exception
struct Exception_t27;
// System.Net.HttpWebResponse
struct HttpWebResponse_t2044;
// System.IO.Stream
struct Stream_t24;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.WebAsyncResult
struct  WebAsyncResult_t2045  : public Object_t
{
	// System.Threading.ManualResetEvent System.Net.WebAsyncResult::handle
	ManualResetEvent_t1810 * ___handle_0;
	// System.Boolean System.Net.WebAsyncResult::synch
	bool ___synch_1;
	// System.Boolean System.Net.WebAsyncResult::isCompleted
	bool ___isCompleted_2;
	// System.AsyncCallback System.Net.WebAsyncResult::cb
	AsyncCallback_t346 * ___cb_3;
	// System.Object System.Net.WebAsyncResult::state
	Object_t * ___state_4;
	// System.Int32 System.Net.WebAsyncResult::nbytes
	int32_t ___nbytes_5;
	// System.IAsyncResult System.Net.WebAsyncResult::innerAsyncResult
	Object_t * ___innerAsyncResult_6;
	// System.Boolean System.Net.WebAsyncResult::callbackDone
	bool ___callbackDone_7;
	// System.Exception System.Net.WebAsyncResult::exc
	Exception_t27 * ___exc_8;
	// System.Net.HttpWebResponse System.Net.WebAsyncResult::response
	HttpWebResponse_t2044 * ___response_9;
	// System.IO.Stream System.Net.WebAsyncResult::writeStream
	Stream_t24 * ___writeStream_10;
	// System.Byte[] System.Net.WebAsyncResult::buffer
	ByteU5BU5D_t36* ___buffer_11;
	// System.Int32 System.Net.WebAsyncResult::offset
	int32_t ___offset_12;
	// System.Int32 System.Net.WebAsyncResult::size
	int32_t ___size_13;
	// System.Object System.Net.WebAsyncResult::locker
	Object_t * ___locker_14;
	// System.Boolean System.Net.WebAsyncResult::EndCalled
	bool ___EndCalled_15;
	// System.Boolean System.Net.WebAsyncResult::AsyncWriteAll
	bool ___AsyncWriteAll_16;
};
