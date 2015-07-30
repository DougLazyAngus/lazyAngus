#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl
struct X509Crl_t3769;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t3762;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t3768;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t3763;
// System.Security.Cryptography.DSA
struct DSA_t3761;
// System.Security.Cryptography.RSA
struct RSA_t3755;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t3850;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C" void X509Crl__ctor_m12268 (X509Crl_t3769 * __this, ByteU5BU5D_t66* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C" void X509Crl_Parse_m12269 (X509Crl_t3769 * __this, ByteU5BU5D_t66* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C" X509ExtensionCollection_t3762 * X509Crl_get_Extensions_m12270 (X509Crl_t3769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C" ByteU5BU5D_t66* X509Crl_get_Hash_m12271 (X509Crl_t3769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C" String_t* X509Crl_get_IssuerName_m12272 (X509Crl_t3769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C" DateTime_t287  X509Crl_get_NextUpdate_m12273 (X509Crl_t3769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C" bool X509Crl_Compare_m12274 (X509Crl_t3769 * __this, ByteU5BU5D_t66* ___array1, ByteU5BU5D_t66* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C" X509CrlEntry_t3768 * X509Crl_GetCrlEntry_m12275 (X509Crl_t3769 * __this, X509Certificate_t3763 * ___x509, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C" X509CrlEntry_t3768 * X509Crl_GetCrlEntry_m12276 (X509Crl_t3769 * __this, ByteU5BU5D_t66* ___serialNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C" String_t* X509Crl_GetHashName_m12277 (X509Crl_t3769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Crl_VerifySignature_m12278 (X509Crl_t3769 * __this, DSA_t3761 * ___dsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Crl_VerifySignature_m12279 (X509Crl_t3769 * __this, RSA_t3755 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Crl_VerifySignature_m12280 (X509Crl_t3769 * __this, AsymmetricAlgorithm_t3850 * ___aa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
