#pragma once
#include <stdint.h>
// Mono.Security.Protocol.Tls.SslClientStream
struct SslClientStream_t3799;
// Mono.Security.Protocol.Tls.Context
#include "Mono_Security_Mono_Security_Protocol_Tls_Context.h"
// Mono.Security.Protocol.Tls.ClientContext
struct  ClientContext_t3800  : public Context_t3794
{
	// Mono.Security.Protocol.Tls.SslClientStream Mono.Security.Protocol.Tls.ClientContext::sslStream
	SslClientStream_t3799 * ___sslStream_30;
	// System.Int16 Mono.Security.Protocol.Tls.ClientContext::clientHelloProtocol
	int16_t ___clientHelloProtocol_31;
};
