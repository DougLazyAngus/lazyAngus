#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientFinished
struct TlsClientFinished_t3888;
// Mono.Security.Protocol.Tls.Context
struct Context_t3838;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientFinished::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsClientFinished__ctor_m13051 (TlsClientFinished_t3888 * __this, Context_t3838 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientFinished::.cctor()
extern "C" void TlsClientFinished__cctor_m13052 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientFinished::Update()
extern "C" void TlsClientFinished_Update_m13053 (TlsClientFinished_t3888 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientFinished::ProcessAsSsl3()
extern "C" void TlsClientFinished_ProcessAsSsl3_m13054 (TlsClientFinished_t3888 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientFinished::ProcessAsTls1()
extern "C" void TlsClientFinished_ProcessAsTls1_m13055 (TlsClientFinished_t3888 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
