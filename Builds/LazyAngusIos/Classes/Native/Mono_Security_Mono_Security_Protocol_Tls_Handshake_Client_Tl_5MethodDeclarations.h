#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
struct TlsServerCertificateRequest_t2195;
// Mono.Security.Protocol.Tls.Context
struct Context_t2154;
// System.Byte[]
struct ByteU5BU5D_t36;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerCertificateRequest__ctor_m11000 (TlsServerCertificateRequest_t2195 * __this, Context_t2154 * ___context, ByteU5BU5D_t36* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::Update()
extern "C" void TlsServerCertificateRequest_Update_m11001 (TlsServerCertificateRequest_t2195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsSsl3()
extern "C" void TlsServerCertificateRequest_ProcessAsSsl3_m11002 (TlsServerCertificateRequest_t2195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsTls1()
extern "C" void TlsServerCertificateRequest_ProcessAsTls1_m11003 (TlsServerCertificateRequest_t2195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
