#pragma once
#include <stdint.h>
// System.Threading.ManualResetEvent
struct ManualResetEvent_t3201;
// System.IO.Stream
struct Stream_t51;
// System.IO.MemoryStream
struct MemoryStream_t65;
// Mono.Security.Protocol.Tls.Context
struct Context_t3178;
// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t3186;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// Mono.Security.Protocol.Tls.SslStreamBase
struct  SslStreamBase_t3215  : public Stream_t51
{
	// System.IO.Stream Mono.Security.Protocol.Tls.SslStreamBase::innerStream
	Stream_t51 * ___innerStream_4;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.SslStreamBase::inputBuffer
	MemoryStream_t65 * ___inputBuffer_5;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.SslStreamBase::context
	Context_t3178 * ___context_6;
	// Mono.Security.Protocol.Tls.RecordProtocol Mono.Security.Protocol.Tls.SslStreamBase::protocol
	RecordProtocol_t3186 * ___protocol_7;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::ownsStream
	bool ___ownsStream_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Mono.Security.Protocol.Tls.SslStreamBase::disposed
	bool ___disposed_9;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::checkCertRevocationStatus
	bool ___checkCertRevocationStatus_10;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::negotiate
	Object_t * ___negotiate_11;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::read
	Object_t * ___read_12;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::write
	Object_t * ___write_13;
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.SslStreamBase::negotiationComplete
	ManualResetEvent_t3201 * ___negotiationComplete_14;
	// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase::recbuf
	ByteU5BU5D_t66* ___recbuf_15;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.SslStreamBase::recordStream
	MemoryStream_t65 * ___recordStream_16;
};
struct SslStreamBase_t3215_StaticFields{
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.SslStreamBase::record_processing
	ManualResetEvent_t3201 * ___record_processing_3;
};
