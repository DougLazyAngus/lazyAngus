#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl
struct X509Crl_t1718;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1747;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t1720;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1599;
// System.Security.Cryptography.DSA
struct DSA_t1714;
// System.Security.Cryptography.RSA
struct RSA_t1715;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1588;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C" void X509Crl__ctor_m10639 (X509Crl_t1718 * __this, ByteU5BU5D_t36* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C" void X509Crl_Parse_m10640 (X509Crl_t1718 * __this, ByteU5BU5D_t36* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C" X509ExtensionCollection_t1747 * X509Crl_get_Extensions_m8879 (X509Crl_t1718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C" ByteU5BU5D_t36* X509Crl_get_Hash_m10641 (X509Crl_t1718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C" String_t* X509Crl_get_IssuerName_m8887 (X509Crl_t1718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C" DateTime_t219  X509Crl_get_NextUpdate_m8885 (X509Crl_t1718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C" bool X509Crl_Compare_m10642 (X509Crl_t1718 * __this, ByteU5BU5D_t36* ___array1, ByteU5BU5D_t36* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C" X509CrlEntry_t1720 * X509Crl_GetCrlEntry_m8883 (X509Crl_t1718 * __this, X509Certificate_t1599 * ___x509, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C" X509CrlEntry_t1720 * X509Crl_GetCrlEntry_m10643 (X509Crl_t1718 * __this, ByteU5BU5D_t36* ___serialNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C" String_t* X509Crl_GetHashName_m10644 (X509Crl_t1718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Crl_VerifySignature_m10645 (X509Crl_t1718 * __this, DSA_t1714 * ___dsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Crl_VerifySignature_m10646 (X509Crl_t1718 * __this, RSA_t1715 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Crl_VerifySignature_m8882 (X509Crl_t1718 * __this, AsymmetricAlgorithm_t1588 * ___aa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
