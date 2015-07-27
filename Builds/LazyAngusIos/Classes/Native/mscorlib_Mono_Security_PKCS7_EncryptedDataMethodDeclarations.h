#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t2390;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t2389;
// System.Byte[]
struct ByteU5BU5D_t36;
// Mono.Security.ASN1
struct ASN1_t2377;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m13118 (EncryptedData_t2390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m13119 (EncryptedData_t2390 * __this, ASN1_t2377 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t2389 * EncryptedData_get_EncryptionAlgorithm_m13120 (EncryptedData_t2390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t36* EncryptedData_get_EncryptedContent_m13121 (EncryptedData_t2390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
