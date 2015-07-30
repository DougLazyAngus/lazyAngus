#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t3738;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t3737;
// System.Byte[]
struct ByteU5BU5D_t66;
// Mono.Security.ASN1
struct ASN1_t3734;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m12088 (EncryptedData_t3738 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m12089 (EncryptedData_t3738 * __this, ASN1_t3734 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t3737 * EncryptedData_get_EncryptionAlgorithm_m12090 (EncryptedData_t3738 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t66* EncryptedData_get_EncryptedContent_m12091 (EncryptedData_t3738 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
