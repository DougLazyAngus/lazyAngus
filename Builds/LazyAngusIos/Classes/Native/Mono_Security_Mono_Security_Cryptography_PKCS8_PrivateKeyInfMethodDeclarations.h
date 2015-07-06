#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t2129;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Security.Cryptography.RSA
struct RSA_t1692;
// System.Security.Cryptography.DSA
struct DSA_t1691;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C" void PrivateKeyInfo__ctor_m10367 (PrivateKeyInfo_t2129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C" void PrivateKeyInfo__ctor_m10368 (PrivateKeyInfo_t2129 * __this, ByteU5BU5D_t36* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C" ByteU5BU5D_t36* PrivateKeyInfo_get_PrivateKey_m10369 (PrivateKeyInfo_t2129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C" void PrivateKeyInfo_Decode_m10370 (PrivateKeyInfo_t2129 * __this, ByteU5BU5D_t36* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C" ByteU5BU5D_t36* PrivateKeyInfo_RemoveLeadingZero_m10371 (Object_t * __this /* static, unused */, ByteU5BU5D_t36* ___bigInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t36* PrivateKeyInfo_Normalize_m10372 (Object_t * __this /* static, unused */, ByteU5BU5D_t36* ___bigInt, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C" RSA_t1692 * PrivateKeyInfo_DecodeRSA_m10373 (Object_t * __this /* static, unused */, ByteU5BU5D_t36* ___keypair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C" DSA_t1691 * PrivateKeyInfo_DecodeDSA_m10374 (Object_t * __this /* static, unused */, ByteU5BU5D_t36* ___privateKey, DSAParameters_t1733  ___dsaParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
