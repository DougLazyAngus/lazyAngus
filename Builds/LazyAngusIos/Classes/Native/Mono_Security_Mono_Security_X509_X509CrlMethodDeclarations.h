#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl
struct X509Crl_t1695;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1724;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t1697;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1576;
// System.Security.Cryptography.DSA
struct DSA_t1691;
// System.Security.Cryptography.RSA
struct RSA_t1692;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1565;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C" void X509Crl__ctor_m10484 (X509Crl_t1695 * __this, ByteU5BU5D_t36* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C" void X509Crl_Parse_m10485 (X509Crl_t1695 * __this, ByteU5BU5D_t36* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C" X509ExtensionCollection_t1724 * X509Crl_get_Extensions_m8724 (X509Crl_t1695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C" ByteU5BU5D_t36* X509Crl_get_Hash_m10486 (X509Crl_t1695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C" String_t* X509Crl_get_IssuerName_m8732 (X509Crl_t1695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C" DateTime_t219  X509Crl_get_NextUpdate_m8730 (X509Crl_t1695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C" bool X509Crl_Compare_m10487 (X509Crl_t1695 * __this, ByteU5BU5D_t36* ___array1, ByteU5BU5D_t36* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C" X509CrlEntry_t1697 * X509Crl_GetCrlEntry_m8728 (X509Crl_t1695 * __this, X509Certificate_t1576 * ___x509, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C" X509CrlEntry_t1697 * X509Crl_GetCrlEntry_m10488 (X509Crl_t1695 * __this, ByteU5BU5D_t36* ___serialNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C" String_t* X509Crl_GetHashName_m10489 (X509Crl_t1695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Crl_VerifySignature_m10490 (X509Crl_t1695 * __this, DSA_t1691 * ___dsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Crl_VerifySignature_m10491 (X509Crl_t1695 * __this, RSA_t1692 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Crl_VerifySignature_m8727 (X509Crl_t1695 * __this, AsymmetricAlgorithm_t1565 * ___aa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
