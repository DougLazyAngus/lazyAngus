﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_t2368;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1726;
// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t2367;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.DSAManaged::.ctor(System.Int32)
extern "C" void DSAManaged__ctor_m12897 (DSAManaged_t2368 * __this, int32_t ___dwKeySize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::add_KeyGenerated(Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler)
extern "C" void DSAManaged_add_KeyGenerated_m12898 (DSAManaged_t2368 * __this, KeyGeneratedEventHandler_t2367 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::remove_KeyGenerated(Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler)
extern "C" void DSAManaged_remove_KeyGenerated_m12899 (DSAManaged_t2368 * __this, KeyGeneratedEventHandler_t2367 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Finalize()
extern "C" void DSAManaged_Finalize_m12900 (DSAManaged_t2368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Generate()
extern "C" void DSAManaged_Generate_m12901 (DSAManaged_t2368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::GenerateKeyPair()
extern "C" void DSAManaged_GenerateKeyPair_m12902 (DSAManaged_t2368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::add(System.Byte[],System.Byte[],System.Int32)
extern "C" void DSAManaged_add_m12903 (DSAManaged_t2368 * __this, ByteU5BU5D_t36* ___a, ByteU5BU5D_t36* ___b, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::GenerateParams(System.Int32)
extern "C" void DSAManaged_GenerateParams_m12904 (DSAManaged_t2368 * __this, int32_t ___keyLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.DSAManaged::get_Random()
extern "C" RandomNumberGenerator_t1726 * DSAManaged_get_Random_m12905 (DSAManaged_t2368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.DSAManaged::get_KeySize()
extern "C" int32_t DSAManaged_get_KeySize_m12906 (DSAManaged_t2368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.DSAManaged::get_PublicOnly()
extern "C" bool DSAManaged_get_PublicOnly_m12907 (DSAManaged_t2368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.DSAManaged::NormalizeArray(System.Byte[])
extern "C" ByteU5BU5D_t36* DSAManaged_NormalizeArray_m12908 (DSAManaged_t2368 * __this, ByteU5BU5D_t36* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.Cryptography.DSAManaged::ExportParameters(System.Boolean)
extern "C" DSAParameters_t1860  DSAManaged_ExportParameters_m12909 (DSAManaged_t2368 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::ImportParameters(System.Security.Cryptography.DSAParameters)
extern "C" void DSAManaged_ImportParameters_m12910 (DSAManaged_t2368 * __this, DSAParameters_t1860  ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.DSAManaged::CreateSignature(System.Byte[])
extern "C" ByteU5BU5D_t36* DSAManaged_CreateSignature_m12911 (DSAManaged_t2368 * __this, ByteU5BU5D_t36* ___rgbHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.DSAManaged::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool DSAManaged_VerifySignature_m12912 (DSAManaged_t2368 * __this, ByteU5BU5D_t36* ___rgbHash, ByteU5BU5D_t36* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Dispose(System.Boolean)
extern "C" void DSAManaged_Dispose_m12913 (DSAManaged_t2368 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
