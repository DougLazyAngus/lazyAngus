﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SslHandshakeHash
struct SslHandshakeHash_t3821;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Security.Cryptography.RSA
struct RSA_t3748;

// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::.ctor(System.Byte[])
extern "C" void SslHandshakeHash__ctor_m12587 (SslHandshakeHash_t3821 * __this, ByteU5BU5D_t66* ___secret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::Initialize()
extern "C" void SslHandshakeHash_Initialize_m12588 (SslHandshakeHash_t3821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::HashFinal()
extern "C" ByteU5BU5D_t66* SslHandshakeHash_HashFinal_m12589 (SslHandshakeHash_t3821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void SslHandshakeHash_HashCore_m12590 (SslHandshakeHash_t3821 * __this, ByteU5BU5D_t66* ___array, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::CreateSignature(System.Security.Cryptography.RSA)
extern "C" ByteU5BU5D_t66* SslHandshakeHash_CreateSignature_m12591 (SslHandshakeHash_t3821 * __this, RSA_t3748 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::initializePad()
extern "C" void SslHandshakeHash_initializePad_m12592 (SslHandshakeHash_t3821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
