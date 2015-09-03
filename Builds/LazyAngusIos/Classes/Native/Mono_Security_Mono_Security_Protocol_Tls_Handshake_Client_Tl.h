#pragma once
#include <stdint.h>
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3221;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0.h"
// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate
struct  TlsClientCertificate_t3227  : public HandshakeMessage_t3203
{
	// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::clientCertSelected
	bool ___clientCertSelected_10;
	// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::clientCert
	X509Certificate_t3221 * ___clientCert_11;
};
