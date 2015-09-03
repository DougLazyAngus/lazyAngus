﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/SignedData
struct SignedData_t4786;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t4784;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t4782;
// System.String
struct String_t;
// Mono.Security.PKCS7/SignerInfo
struct SignerInfo_t4785;
// Mono.Security.ASN1
struct ASN1_t4779;

// System.Void Mono.Security.PKCS7/SignedData::.ctor(Mono.Security.ASN1)
extern "C" void SignedData__ctor_m19536 (SignedData_t4786 * __this, ASN1_t4779 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.PKCS7/SignedData::get_Certificates()
extern "C" X509CertificateCollection_t4784 * SignedData_get_Certificates_m19537 (SignedData_t4786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/SignedData::get_ContentInfo()
extern "C" ContentInfo_t4782 * SignedData_get_ContentInfo_m19538 (SignedData_t4786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/SignedData::set_HashName(System.String)
extern "C" void SignedData_set_HashName_m19539 (SignedData_t4786 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/SignerInfo Mono.Security.PKCS7/SignedData::get_SignerInfo()
extern "C" SignerInfo_t4785 * SignedData_get_SignerInfo_m19540 (SignedData_t4786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/SignedData::OidToName(System.String)
extern "C" String_t* SignedData_OidToName_m19541 (SignedData_t4786 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;