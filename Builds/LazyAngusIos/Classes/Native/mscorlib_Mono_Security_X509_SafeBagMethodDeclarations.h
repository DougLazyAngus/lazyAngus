#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.SafeBag
struct SafeBag_t4425;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t4424;

// System.Void Mono.Security.X509.SafeBag::.ctor(System.String,Mono.Security.ASN1)
extern "C" void SafeBag__ctor_m16781 (SafeBag_t4425 * __this, String_t* ___bagOID, ASN1_t4424 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.SafeBag::get_BagOID()
extern "C" String_t* SafeBag_get_BagOID_m16782 (SafeBag_t4425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.SafeBag::get_ASN1()
extern "C" ASN1_t4424 * SafeBag_get_ASN1_m16783 (SafeBag_t4425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
