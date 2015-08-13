#pragma once
#include <stdint.h>
// System.Threading.ManualResetEvent
struct ManualResetEvent_t3377;
// System.IO.Stream
struct Stream_t51;
// Mono.Security.Protocol.Tls.Context
struct Context_t3840;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.Protocol.Tls.RecordProtocol
struct  RecordProtocol_t3848  : public Object_t
{
	// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol::innerStream
	Stream_t51 * ___innerStream_1;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.RecordProtocol::context
	Context_t3840 * ___context_2;
};
struct RecordProtocol_t3848_StaticFields{
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol::record_processing
	ManualResetEvent_t3377 * ___record_processing_0;
};
