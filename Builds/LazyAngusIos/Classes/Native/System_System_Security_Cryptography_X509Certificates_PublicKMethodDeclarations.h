#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t4039;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t4037;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t3854;
// System.Security.Cryptography.Oid
struct Oid_t4038;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t3767;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Security.Cryptography.DSA
struct DSA_t3765;
// System.Security.Cryptography.RSA
struct RSA_t3759;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m14105 (PublicKey_t4039 * __this, X509Certificate_t3767 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t4037 * PublicKey_get_EncodedKeyValue_m14106 (PublicKey_t4039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t4037 * PublicKey_get_EncodedParameters_m14107 (PublicKey_t4039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t3854 * PublicKey_get_Key_m14108 (PublicKey_t4039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t4038 * PublicKey_get_Oid_m14109 (PublicKey_t4039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t66* PublicKey_GetUnsignedBigInteger_m14110 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t3765 * PublicKey_DecodeDSA_m14111 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___rawPublicKey, ByteU5BU5D_t66* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t3759 * PublicKey_DecodeRSA_m14112 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
