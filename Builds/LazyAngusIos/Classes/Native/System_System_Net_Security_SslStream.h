#pragma once
#include <stdint.h>
// Mono.Security.Protocol.Tls.SslStreamBase
struct SslStreamBase_t3826;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t3885;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t3937;
// System.Net.Security.AuthenticatedStream
#include "System_System_Net_Security_AuthenticatedStream.h"
// System.Net.Security.SslStream
struct  SslStream_t3935  : public AuthenticatedStream_t3932
{
	// Mono.Security.Protocol.Tls.SslStreamBase System.Net.Security.SslStream::ssl_stream
	SslStreamBase_t3826 * ___ssl_stream_3;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.Security.SslStream::validation_callback
	RemoteCertificateValidationCallback_t3885 * ___validation_callback_4;
	// System.Net.Security.LocalCertificateSelectionCallback System.Net.Security.SslStream::selection_callback
	LocalCertificateSelectionCallback_t3937 * ___selection_callback_5;
};
