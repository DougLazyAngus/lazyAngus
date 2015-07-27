#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t2390;
// Mono.Security.ASN1
struct ASN1_t2378;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t36;

// System.Void Mono.Security.PKCS7/ContentInfo::.ctor()
extern "C" void ContentInfo__ctor_m13118 (ContentInfo_t2390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.String)
extern "C" void ContentInfo__ctor_m13119 (ContentInfo_t2390 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.Byte[])
extern "C" void ContentInfo__ctor_m13120 (ContentInfo_t2390 * __this, ByteU5BU5D_t36* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(Mono.Security.ASN1)
extern "C" void ContentInfo__ctor_m13121 (ContentInfo_t2390 * __this, ASN1_t2378 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::get_Content()
extern "C" ASN1_t2378 * ContentInfo_get_Content_m13122 (ContentInfo_t2390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::set_Content(Mono.Security.ASN1)
extern "C" void ContentInfo_set_Content_m13123 (ContentInfo_t2390 * __this, ASN1_t2378 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/ContentInfo::get_ContentType()
extern "C" String_t* ContentInfo_get_ContentType_m13124 (ContentInfo_t2390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
