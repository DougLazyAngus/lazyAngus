﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t2297;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t2296;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.String
struct String_t;
// Mono.Math.BigInteger
struct BigInteger_t2282;
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void Mono.Security.Cryptography.RSAManaged::.ctor(System.Int32)
extern "C" void RSAManaged__ctor_m12211 (RSAManaged_t2297 * __this, int32_t ___keySize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::add_KeyGenerated(Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler)
extern "C" void RSAManaged_add_KeyGenerated_m12212 (RSAManaged_t2297 * __this, KeyGeneratedEventHandler_t2296 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::remove_KeyGenerated(Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler)
extern "C" void RSAManaged_remove_KeyGenerated_m12213 (RSAManaged_t2297 * __this, KeyGeneratedEventHandler_t2296 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Finalize()
extern "C" void RSAManaged_Finalize_m12214 (RSAManaged_t2297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::GenerateKeyPair()
extern "C" void RSAManaged_GenerateKeyPair_m12215 (RSAManaged_t2297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.RSAManaged::get_KeySize()
extern "C" int32_t RSAManaged_get_KeySize_m12216 (RSAManaged_t2297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.RSAManaged::get_PublicOnly()
extern "C" bool RSAManaged_get_PublicOnly_m12217 (RSAManaged_t2297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::DecryptValue(System.Byte[])
extern "C" ByteU5BU5D_t36* RSAManaged_DecryptValue_m12218 (RSAManaged_t2297 * __this, ByteU5BU5D_t36* ___rgb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::EncryptValue(System.Byte[])
extern "C" ByteU5BU5D_t36* RSAManaged_EncryptValue_m12219 (RSAManaged_t2297 * __this, ByteU5BU5D_t36* ___rgb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters Mono.Security.Cryptography.RSAManaged::ExportParameters(System.Boolean)
extern "C" RSAParameters_t1731  RSAManaged_ExportParameters_m12220 (RSAManaged_t2297 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::ImportParameters(System.Security.Cryptography.RSAParameters)
extern "C" void RSAManaged_ImportParameters_m12221 (RSAManaged_t2297 * __this, RSAParameters_t1731  ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Dispose(System.Boolean)
extern "C" void RSAManaged_Dispose_m12222 (RSAManaged_t2297 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.RSAManaged::ToXmlString(System.Boolean)
extern "C" String_t* RSAManaged_ToXmlString_m12223 (RSAManaged_t2297 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.RSAManaged::get_IsCrtPossible()
extern "C" bool RSAManaged_get_IsCrtPossible_m12224 (RSAManaged_t2297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::GetPaddedValue(Mono.Math.BigInteger,System.Int32)
extern "C" ByteU5BU5D_t36* RSAManaged_GetPaddedValue_m12225 (RSAManaged_t2297 * __this, BigInteger_t2282 * ___value, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;