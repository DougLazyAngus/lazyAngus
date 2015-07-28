#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t4027;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t4025;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t3842;
// System.Security.Cryptography.Oid
struct Oid_t4026;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t3755;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Security.Cryptography.DSA
struct DSA_t3753;
// System.Security.Cryptography.RSA
struct RSA_t3747;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m14030 (PublicKey_t4027 * __this, X509Certificate_t3755 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t4025 * PublicKey_get_EncodedKeyValue_m14031 (PublicKey_t4027 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t4025 * PublicKey_get_EncodedParameters_m14032 (PublicKey_t4027 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t3842 * PublicKey_get_Key_m14033 (PublicKey_t4027 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t4026 * PublicKey_get_Oid_m14034 (PublicKey_t4027 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t66* PublicKey_GetUnsignedBigInteger_m14035 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t3753 * PublicKey_DecodeDSA_m14036 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___rawPublicKey, ByteU5BU5D_t66* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t3747 * PublicKey_DecodeRSA_m14037 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
