#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate
struct TlsClientCertificate_t3838;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3832;
// Mono.Security.Protocol.Tls.Context
struct Context_t3790;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsClientCertificate__ctor_m12774 (TlsClientCertificate_t3838 * __this, Context_t3790 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::get_ClientCertificate()
extern "C" X509Certificate_t3832 * TlsClientCertificate_get_ClientCertificate_m12775 (TlsClientCertificate_t3838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::Update()
extern "C" void TlsClientCertificate_Update_m12776 (TlsClientCertificate_t3838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::GetClientCertificate()
extern "C" void TlsClientCertificate_GetClientCertificate_m12777 (TlsClientCertificate_t3838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::SendCertificates()
extern "C" void TlsClientCertificate_SendCertificates_m12778 (TlsClientCertificate_t3838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::ProcessAsSsl3()
extern "C" void TlsClientCertificate_ProcessAsSsl3_m12779 (TlsClientCertificate_t3838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::ProcessAsTls1()
extern "C" void TlsClientCertificate_ProcessAsTls1_m12780 (TlsClientCertificate_t3838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::FindParentCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" X509Certificate_t3832 * TlsClientCertificate_FindParentCertificate_m12781 (TlsClientCertificate_t3838 * __this, X509Certificate_t3832 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
