#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t3125;
// Mono.Security.ASN1
struct ASN1_t3122;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t66;

// System.Void Mono.Security.PKCS7/ContentInfo::.ctor()
extern "C" void ContentInfo__ctor_m10673 (ContentInfo_t3125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.String)
extern "C" void ContentInfo__ctor_m10674 (ContentInfo_t3125 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.Byte[])
extern "C" void ContentInfo__ctor_m10675 (ContentInfo_t3125 * __this, ByteU5BU5D_t66* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(Mono.Security.ASN1)
extern "C" void ContentInfo__ctor_m10676 (ContentInfo_t3125 * __this, ASN1_t3122 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::get_ASN1()
extern "C" ASN1_t3122 * ContentInfo_get_ASN1_m10677 (ContentInfo_t3125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::get_Content()
extern "C" ASN1_t3122 * ContentInfo_get_Content_m10678 (ContentInfo_t3125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::set_Content(Mono.Security.ASN1)
extern "C" void ContentInfo_set_Content_m10679 (ContentInfo_t3125 * __this, ASN1_t3122 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/ContentInfo::get_ContentType()
extern "C" String_t* ContentInfo_get_ContentType_m10680 (ContentInfo_t3125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::set_ContentType(System.String)
extern "C" void ContentInfo_set_ContentType_m10681 (ContentInfo_t3125 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::GetASN1()
extern "C" ASN1_t3122 * ContentInfo_GetASN1_m10682 (ContentInfo_t3125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
