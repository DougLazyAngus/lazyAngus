#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t3278;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t4442;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t4437;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t3239;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t4434;
// System.String
struct String_t;
// System.Security.Cryptography.Oid
struct Oid_t4427;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t3151;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3221;
// Mono.Security.ASN1
struct ASN1_t3122;
// System.Text.StringBuilder
struct StringBuilder_t261;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Security.Cryptography.X509Certificates.X509NameType
#include "System_System_Security_Cryptography_X509Certificates_X509Nam.h"
// System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509K.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Byte[])
extern "C" void X509Certificate2__ctor_m11542 (X509Certificate2_t3278 * __this, ByteU5BU5D_t66* ___rawData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void X509Certificate2__ctor_m17252 (X509Certificate2_t3278 * __this, X509Certificate_t3221 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.cctor()
extern "C" void X509Certificate2__cctor_m17253 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection System.Security.Cryptography.X509Certificates.X509Certificate2::get_Extensions()
extern "C" X509ExtensionCollection_t4442 * X509Certificate2_get_Extensions_m17254 (X509Certificate2_t3278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::get_IssuerName()
extern "C" X500DistinguishedName_t4437 * X509Certificate2_get_IssuerName_m17255 (X509Certificate2_t3278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotAfter()
extern "C" DateTime_t287  X509Certificate2_get_NotAfter_m17256 (X509Certificate2_t3278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotBefore()
extern "C" DateTime_t287  X509Certificate2_get_NotBefore_m17257 (X509Certificate2_t3278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2::get_PrivateKey()
extern "C" AsymmetricAlgorithm_t3239 * X509Certificate2_get_PrivateKey_m11546 (X509Certificate2_t3278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2::get_PublicKey()
extern "C" PublicKey_t4434 * X509Certificate2_get_PublicKey_m17258 (X509Certificate2_t3278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_SerialNumber()
extern "C" String_t* X509Certificate2_get_SerialNumber_m17259 (X509Certificate2_t3278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2::get_SignatureAlgorithm()
extern "C" Oid_t4427 * X509Certificate2_get_SignatureAlgorithm_m17260 (X509Certificate2_t3278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::get_SubjectName()
extern "C" X500DistinguishedName_t4437 * X509Certificate2_get_SubjectName_m17261 (X509Certificate2_t3278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_Thumbprint()
extern "C" String_t* X509Certificate2_get_Thumbprint_m17262 (X509Certificate2_t3278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2::get_Version()
extern "C" int32_t X509Certificate2_get_Version_m17263 (X509Certificate2_t3278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::GetNameInfo(System.Security.Cryptography.X509Certificates.X509NameType,System.Boolean)
extern "C" String_t* X509Certificate2_GetNameInfo_m17264 (X509Certificate2_t3278 * __this, int32_t ___nameType, bool ___forIssuer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 System.Security.Cryptography.X509Certificates.X509Certificate2::Find(System.Byte[],Mono.Security.ASN1)
extern "C" ASN1_t3122 * X509Certificate2_Find_m17265 (X509Certificate2_t3278 * __this, ByteU5BU5D_t66* ___oid, ASN1_t3122 * ___dn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::GetValueAsString(Mono.Security.ASN1)
extern "C" String_t* X509Certificate2_GetValueAsString_m17266 (X509Certificate2_t3278 * __this, ASN1_t3122 * ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::ImportPkcs12(System.Byte[],System.String)
extern "C" void X509Certificate2_ImportPkcs12_m17267 (X509Certificate2_t3278 * __this, ByteU5BU5D_t66* ___rawData, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C" void X509Certificate2_Import_m17268 (X509Certificate2_t3278 * __this, ByteU5BU5D_t66* ___rawData, String_t* ___password, int32_t ___keyStorageFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Reset()
extern "C" void X509Certificate2_Reset_m17269 (X509Certificate2_t3278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString()
extern "C" String_t* X509Certificate2_ToString_m17270 (X509Certificate2_t3278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString(System.Boolean)
extern "C" String_t* X509Certificate2_ToString_m17271 (X509Certificate2_t3278 * __this, bool ___verbose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::AppendBuffer(System.Text.StringBuilder,System.Byte[])
extern "C" void X509Certificate2_AppendBuffer_m17272 (Object_t * __this /* static, unused */, StringBuilder_t261 * ___sb, ByteU5BU5D_t66* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2::Verify()
extern "C" bool X509Certificate2_Verify_m17273 (X509Certificate2_t3278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2::get_MonoCertificate()
extern "C" X509Certificate_t3151 * X509Certificate2_get_MonoCertificate_m17274 (X509Certificate2_t3278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
