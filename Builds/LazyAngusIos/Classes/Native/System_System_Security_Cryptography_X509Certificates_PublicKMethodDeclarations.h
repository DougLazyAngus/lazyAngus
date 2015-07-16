#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1601;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1599;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1598;
// System.Security.Cryptography.Oid
struct Oid_t1600;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1609;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Security.Cryptography.DSA
struct DSA_t1724;
// System.Security.Cryptography.RSA
struct RSA_t1725;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m8000 (PublicKey_t1601 * __this, X509Certificate_t1609 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t1599 * PublicKey_get_EncodedKeyValue_m8001 (PublicKey_t1601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t1599 * PublicKey_get_EncodedParameters_m8002 (PublicKey_t1601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t1598 * PublicKey_get_Key_m8003 (PublicKey_t1601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t1600 * PublicKey_get_Oid_m8004 (PublicKey_t1601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t36* PublicKey_GetUnsignedBigInteger_m8005 (Object_t * __this /* static, unused */, ByteU5BU5D_t36* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t1724 * PublicKey_DecodeDSA_m8006 (Object_t * __this /* static, unused */, ByteU5BU5D_t36* ___rawPublicKey, ByteU5BU5D_t36* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t1725 * PublicKey_DecodeRSA_m8007 (Object_t * __this /* static, unused */, ByteU5BU5D_t36* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
