#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify
struct TlsClientCertificateVerify_t3832;
// Mono.Security.Protocol.Tls.Context
struct Context_t3783;
// System.Security.Cryptography.RSA
struct RSA_t3748;
// System.Byte[]
struct ByteU5BU5D_t66;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsClientCertificateVerify__ctor_m12735 (TlsClientCertificateVerify_t3832 * __this, Context_t3783 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::Update()
extern "C" void TlsClientCertificateVerify_Update_m12736 (TlsClientCertificateVerify_t3832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsSsl3()
extern "C" void TlsClientCertificateVerify_ProcessAsSsl3_m12737 (TlsClientCertificateVerify_t3832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsTls1()
extern "C" void TlsClientCertificateVerify_ProcessAsTls1_m12738 (TlsClientCertificateVerify_t3832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getClientCertRSA(System.Security.Cryptography.RSA)
extern "C" RSA_t3748 * TlsClientCertificateVerify_getClientCertRSA_m12739 (TlsClientCertificateVerify_t3832 * __this, RSA_t3748 * ___privKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t66* TlsClientCertificateVerify_getUnsignedBigInteger_m12740 (TlsClientCertificateVerify_t3832 * __this, ByteU5BU5D_t66* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
