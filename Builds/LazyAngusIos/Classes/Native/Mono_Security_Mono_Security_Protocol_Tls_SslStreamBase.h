﻿#pragma once
#include <stdint.h>
// System.Threading.ManualResetEvent
struct ManualResetEvent_t1509;
// System.IO.Stream
struct Stream_t24;
// System.IO.MemoryStream
struct MemoryStream_t35;
// Mono.Security.Protocol.Tls.Context
struct Context_t2154;
// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t2161;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// Mono.Security.Protocol.Tls.SslStreamBase
struct  SslStreamBase_t1448  : public Stream_t24
{
	// System.IO.Stream Mono.Security.Protocol.Tls.SslStreamBase::innerStream
	Stream_t24 * ___innerStream_3;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.SslStreamBase::inputBuffer
	MemoryStream_t35 * ___inputBuffer_4;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.SslStreamBase::context
	Context_t2154 * ___context_5;
	// Mono.Security.Protocol.Tls.RecordProtocol Mono.Security.Protocol.Tls.SslStreamBase::protocol
	RecordProtocol_t2161 * ___protocol_6;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::ownsStream
	bool ___ownsStream_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Mono.Security.Protocol.Tls.SslStreamBase::disposed
	bool ___disposed_8;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::checkCertRevocationStatus
	bool ___checkCertRevocationStatus_9;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::negotiate
	Object_t * ___negotiate_10;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::read
	Object_t * ___read_11;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::write
	Object_t * ___write_12;
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.SslStreamBase::negotiationComplete
	ManualResetEvent_t1509 * ___negotiationComplete_13;
	// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase::recbuf
	ByteU5BU5D_t36* ___recbuf_14;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.SslStreamBase::recordStream
	MemoryStream_t35 * ___recordStream_15;
};
struct SslStreamBase_t1448_StaticFields{
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.SslStreamBase::record_processing
	ManualResetEvent_t1509 * ___record_processing_2;
};