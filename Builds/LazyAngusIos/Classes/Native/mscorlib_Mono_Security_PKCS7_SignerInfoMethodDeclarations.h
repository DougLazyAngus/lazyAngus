﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/SignerInfo
struct SignerInfo_t4785;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Collections.ArrayList
struct ArrayList_t712;
// Mono.Security.ASN1
struct ASN1_t4779;

// System.Void Mono.Security.PKCS7/SignerInfo::.ctor()
extern "C" void SignerInfo__ctor_m19542 (SignerInfo_t4785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/SignerInfo::.ctor(Mono.Security.ASN1)
extern "C" void SignerInfo__ctor_m19543 (SignerInfo_t4785 * __this, ASN1_t4779 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/SignerInfo::get_IssuerName()
extern "C" String_t* SignerInfo_get_IssuerName_m19544 (SignerInfo_t4785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/SignerInfo::get_SerialNumber()
extern "C" ByteU5BU5D_t66* SignerInfo_get_SerialNumber_m19545 (SignerInfo_t4785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.PKCS7/SignerInfo::get_AuthenticatedAttributes()
extern "C" ArrayList_t712 * SignerInfo_get_AuthenticatedAttributes_m19546 (SignerInfo_t4785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/SignerInfo::get_HashName()
extern "C" String_t* SignerInfo_get_HashName_m19547 (SignerInfo_t4785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/SignerInfo::set_HashName(System.String)
extern "C" void SignerInfo_set_HashName_m19548 (SignerInfo_t4785 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/SignerInfo::get_Signature()
extern "C" ByteU5BU5D_t66* SignerInfo_get_Signature_m19549 (SignerInfo_t4785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.PKCS7/SignerInfo::get_UnauthenticatedAttributes()
extern "C" ArrayList_t712 * SignerInfo_get_UnauthenticatedAttributes_m19550 (SignerInfo_t4785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.PKCS7/SignerInfo::get_Version()
extern "C" uint8_t SignerInfo_get_Version_m19551 (SignerInfo_t4785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;