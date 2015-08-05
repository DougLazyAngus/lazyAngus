#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange
struct TlsClientKeyExchange_t3845;
// Mono.Security.Protocol.Tls.Context
struct Context_t3793;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsClientKeyExchange__ctor_m12820 (TlsClientKeyExchange_t3845 * __this, Context_t3793 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange::ProcessAsSsl3()
extern "C" void TlsClientKeyExchange_ProcessAsSsl3_m12821 (TlsClientKeyExchange_t3845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange::ProcessAsTls1()
extern "C" void TlsClientKeyExchange_ProcessAsTls1_m12822 (TlsClientKeyExchange_t3845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange::ProcessCommon(System.Boolean)
extern "C" void TlsClientKeyExchange_ProcessCommon_m12823 (TlsClientKeyExchange_t3845 * __this, bool ___sendLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
