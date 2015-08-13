#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_t4397;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3779;
// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t4396;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.DSAManaged::.ctor(System.Int32)
extern "C" void DSAManaged__ctor_m16513 (DSAManaged_t4397 * __this, int32_t ___dwKeySize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::add_KeyGenerated(Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler)
extern "C" void DSAManaged_add_KeyGenerated_m16514 (DSAManaged_t4397 * __this, KeyGeneratedEventHandler_t4396 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::remove_KeyGenerated(Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler)
extern "C" void DSAManaged_remove_KeyGenerated_m16515 (DSAManaged_t4397 * __this, KeyGeneratedEventHandler_t4396 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Finalize()
extern "C" void DSAManaged_Finalize_m16516 (DSAManaged_t4397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Generate()
extern "C" void DSAManaged_Generate_m16517 (DSAManaged_t4397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::GenerateKeyPair()
extern "C" void DSAManaged_GenerateKeyPair_m16518 (DSAManaged_t4397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::add(System.Byte[],System.Byte[],System.Int32)
extern "C" void DSAManaged_add_m16519 (DSAManaged_t4397 * __this, ByteU5BU5D_t66* ___a, ByteU5BU5D_t66* ___b, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::GenerateParams(System.Int32)
extern "C" void DSAManaged_GenerateParams_m16520 (DSAManaged_t4397 * __this, int32_t ___keyLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.DSAManaged::get_Random()
extern "C" RandomNumberGenerator_t3779 * DSAManaged_get_Random_m16521 (DSAManaged_t4397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.DSAManaged::get_KeySize()
extern "C" int32_t DSAManaged_get_KeySize_m16522 (DSAManaged_t4397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.DSAManaged::get_PublicOnly()
extern "C" bool DSAManaged_get_PublicOnly_m16523 (DSAManaged_t4397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.DSAManaged::NormalizeArray(System.Byte[])
extern "C" ByteU5BU5D_t66* DSAManaged_NormalizeArray_m16524 (DSAManaged_t4397 * __this, ByteU5BU5D_t66* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.Cryptography.DSAManaged::ExportParameters(System.Boolean)
extern "C" DSAParameters_t3912  DSAManaged_ExportParameters_m16525 (DSAManaged_t4397 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::ImportParameters(System.Security.Cryptography.DSAParameters)
extern "C" void DSAManaged_ImportParameters_m16526 (DSAManaged_t4397 * __this, DSAParameters_t3912  ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.DSAManaged::CreateSignature(System.Byte[])
extern "C" ByteU5BU5D_t66* DSAManaged_CreateSignature_m16527 (DSAManaged_t4397 * __this, ByteU5BU5D_t66* ___rgbHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.DSAManaged::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool DSAManaged_VerifySignature_m16528 (DSAManaged_t4397 * __this, ByteU5BU5D_t66* ___rgbHash, ByteU5BU5D_t66* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Dispose(System.Boolean)
extern "C" void DSAManaged_Dispose_m16529 (DSAManaged_t4397 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
