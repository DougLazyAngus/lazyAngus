﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello
struct TlsClientHello_t3834;
// Mono.Security.Protocol.Tls.Context
struct Context_t3783;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsClientHello__ctor_m12746 (TlsClientHello_t3834 * __this, Context_t3783 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello::Update()
extern "C" void TlsClientHello_Update_m12747 (TlsClientHello_t3834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello::ProcessAsSsl3()
extern "C" void TlsClientHello_ProcessAsSsl3_m12748 (TlsClientHello_t3834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello::ProcessAsTls1()
extern "C" void TlsClientHello_ProcessAsTls1_m12749 (TlsClientHello_t3834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
