﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SslCipherSuite
struct SslCipherSuite_t1825;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t36;
// Mono.Security.Protocol.Tls.CipherAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlgorithmType.h"
// Mono.Security.Protocol.Tls.HashAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgorithmType.h"
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"
// Mono.Security.Protocol.Tls.ContentType
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentType.h"

// System.Void Mono.Security.Protocol.Tls.SslCipherSuite::.ctor(System.Int16,System.String,Mono.Security.Protocol.Tls.CipherAlgorithmType,Mono.Security.Protocol.Tls.HashAlgorithmType,Mono.Security.Protocol.Tls.ExchangeAlgorithmType,System.Boolean,System.Boolean,System.Byte,System.Byte,System.Int16,System.Byte,System.Byte)
extern "C" void SslCipherSuite__ctor_m9325 (SslCipherSuite_t1825 * __this, int16_t ___code, String_t* ___name, int32_t ___cipherAlgorithmType, int32_t ___hashAlgorithmType, int32_t ___exchangeAlgorithmType, bool ___exportable, bool ___blockMode, uint8_t ___keyMaterialSize, uint8_t ___expandedKeyMaterialSize, int16_t ___effectiveKeyBytes, uint8_t ___ivSize, uint8_t ___blockSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslCipherSuite::ComputeServerRecordMAC(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C" ByteU5BU5D_t36* SslCipherSuite_ComputeServerRecordMAC_m9326 (SslCipherSuite_t1825 * __this, uint8_t ___contentType, ByteU5BU5D_t36* ___fragment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslCipherSuite::ComputeClientRecordMAC(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C" ByteU5BU5D_t36* SslCipherSuite_ComputeClientRecordMAC_m9327 (SslCipherSuite_t1825 * __this, uint8_t ___contentType, ByteU5BU5D_t36* ___fragment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslCipherSuite::ComputeMasterSecret(System.Byte[])
extern "C" void SslCipherSuite_ComputeMasterSecret_m9328 (SslCipherSuite_t1825 * __this, ByteU5BU5D_t36* ___preMasterSecret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslCipherSuite::ComputeKeys()
extern "C" void SslCipherSuite_ComputeKeys_m9329 (SslCipherSuite_t1825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslCipherSuite::prf(System.Byte[],System.String,System.Byte[])
extern "C" ByteU5BU5D_t36* SslCipherSuite_prf_m9330 (SslCipherSuite_t1825 * __this, ByteU5BU5D_t36* ___secret, String_t* ___label, ByteU5BU5D_t36* ___random, const MethodInfo* method) IL2CPP_METHOD_ATTR;
