#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t2391;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t2390;
// System.Byte[]
struct ByteU5BU5D_t36;
// Mono.Security.ASN1
struct ASN1_t2378;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m13125 (EncryptedData_t2391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m13126 (EncryptedData_t2391 * __this, ASN1_t2378 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t2390 * EncryptedData_get_EncryptionAlgorithm_m13127 (EncryptedData_t2391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t36* EncryptedData_get_EncryptedContent_m13128 (EncryptedData_t2391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
