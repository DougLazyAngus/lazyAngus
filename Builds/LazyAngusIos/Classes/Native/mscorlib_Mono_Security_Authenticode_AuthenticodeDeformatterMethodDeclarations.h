#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Authenticode.AuthenticodeDeformatter
struct AuthenticodeDeformatter_t4796;
// System.String
struct String_t;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t4794;
// System.Byte[]
struct ByteU5BU5D_t66;
// Mono.Security.PKCS7/SignedData
struct SignedData_t4786;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t3133;
// Mono.Security.PKCS7/SignerInfo
struct SignerInfo_t4785;

// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::.ctor()
extern "C" void AuthenticodeDeformatter__ctor_m19602 (AuthenticodeDeformatter_t4796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::.ctor(System.String)
extern "C" void AuthenticodeDeformatter__ctor_m19603 (AuthenticodeDeformatter_t4796 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::set_FileName(System.String)
extern "C" void AuthenticodeDeformatter_set_FileName_m19604 (AuthenticodeDeformatter_t4796 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.Authenticode.AuthenticodeDeformatter::get_SigningCertificate()
extern "C" X509Certificate_t4794 * AuthenticodeDeformatter_get_SigningCertificate_m19605 (AuthenticodeDeformatter_t4796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::CheckSignature(System.String)
extern "C" bool AuthenticodeDeformatter_CheckSignature_m19606 (AuthenticodeDeformatter_t4796 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::CompareIssuerSerial(System.String,System.Byte[],Mono.Security.X509.X509Certificate)
extern "C" bool AuthenticodeDeformatter_CompareIssuerSerial_m19607 (AuthenticodeDeformatter_t4796 * __this, String_t* ___issuer, ByteU5BU5D_t66* ___serial, X509Certificate_t4794 * ___x509, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::VerifySignature(Mono.Security.PKCS7/SignedData,System.Byte[],System.Security.Cryptography.HashAlgorithm)
extern "C" bool AuthenticodeDeformatter_VerifySignature_m19608 (AuthenticodeDeformatter_t4796 * __this, SignedData_t4786 * ___sd, ByteU5BU5D_t66* ___calculatedMessageDigest, HashAlgorithm_t3133 * ___ha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::VerifyCounterSignature(Mono.Security.PKCS7/SignerInfo,System.Byte[])
extern "C" bool AuthenticodeDeformatter_VerifyCounterSignature_m19609 (AuthenticodeDeformatter_t4796 * __this, SignerInfo_t4785 * ___cs, ByteU5BU5D_t66* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::Reset()
extern "C" void AuthenticodeDeformatter_Reset_m19610 (AuthenticodeDeformatter_t4796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
