#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/SignerInfo
struct SignerInfo_t4796;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Collections.ArrayList
struct ArrayList_t723;
// Mono.Security.ASN1
struct ASN1_t4790;

// System.Void Mono.Security.PKCS7/SignerInfo::.ctor()
extern "C" void SignerInfo__ctor_m19612 (SignerInfo_t4796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/SignerInfo::.ctor(Mono.Security.ASN1)
extern "C" void SignerInfo__ctor_m19613 (SignerInfo_t4796 * __this, ASN1_t4790 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/SignerInfo::get_IssuerName()
extern "C" String_t* SignerInfo_get_IssuerName_m19614 (SignerInfo_t4796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/SignerInfo::get_SerialNumber()
extern "C" ByteU5BU5D_t66* SignerInfo_get_SerialNumber_m19615 (SignerInfo_t4796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.PKCS7/SignerInfo::get_AuthenticatedAttributes()
extern "C" ArrayList_t723 * SignerInfo_get_AuthenticatedAttributes_m19616 (SignerInfo_t4796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/SignerInfo::get_HashName()
extern "C" String_t* SignerInfo_get_HashName_m19617 (SignerInfo_t4796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/SignerInfo::set_HashName(System.String)
extern "C" void SignerInfo_set_HashName_m19618 (SignerInfo_t4796 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/SignerInfo::get_Signature()
extern "C" ByteU5BU5D_t66* SignerInfo_get_Signature_m19619 (SignerInfo_t4796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.PKCS7/SignerInfo::get_UnauthenticatedAttributes()
extern "C" ArrayList_t723 * SignerInfo_get_UnauthenticatedAttributes_m19620 (SignerInfo_t4796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.PKCS7/SignerInfo::get_Version()
extern "C" uint8_t SignerInfo_get_Version_m19621 (SignerInfo_t4796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
