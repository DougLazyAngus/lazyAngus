﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify
struct TlsClientCertificateVerify_t3890;
// Mono.Security.Protocol.Tls.Context
struct Context_t3841;
// System.Security.Cryptography.RSA
struct RSA_t3806;
// System.Byte[]
struct ByteU5BU5D_t66;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsClientCertificateVerify__ctor_m13078 (TlsClientCertificateVerify_t3890 * __this, Context_t3841 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::Update()
extern "C" void TlsClientCertificateVerify_Update_m13079 (TlsClientCertificateVerify_t3890 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsSsl3()
extern "C" void TlsClientCertificateVerify_ProcessAsSsl3_m13080 (TlsClientCertificateVerify_t3890 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsTls1()
extern "C" void TlsClientCertificateVerify_ProcessAsTls1_m13081 (TlsClientCertificateVerify_t3890 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getClientCertRSA(System.Security.Cryptography.RSA)
extern "C" RSA_t3806 * TlsClientCertificateVerify_getClientCertRSA_m13082 (TlsClientCertificateVerify_t3890 * __this, RSA_t3806 * ___privKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t66* TlsClientCertificateVerify_getUnsignedBigInteger_m13083 (TlsClientCertificateVerify_t3890 * __this, ByteU5BU5D_t66* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
