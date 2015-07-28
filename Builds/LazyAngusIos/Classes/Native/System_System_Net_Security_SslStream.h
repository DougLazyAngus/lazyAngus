#pragma once
#include <stdint.h>
// Mono.Security.Protocol.Tls.SslStreamBase
struct SslStreamBase_t3819;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t3878;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t3930;
// System.Net.Security.AuthenticatedStream
#include "System_System_Net_Security_AuthenticatedStream.h"
// System.Net.Security.SslStream
struct  SslStream_t3928  : public AuthenticatedStream_t3925
{
	// Mono.Security.Protocol.Tls.SslStreamBase System.Net.Security.SslStream::ssl_stream
	SslStreamBase_t3819 * ___ssl_stream_3;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.Security.SslStream::validation_callback
	RemoteCertificateValidationCallback_t3878 * ___validation_callback_4;
	// System.Net.Security.LocalCertificateSelectionCallback System.Net.Security.SslStream::selection_callback
	LocalCertificateSelectionCallback_t3930 * ___selection_callback_5;
};
