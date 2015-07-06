#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.SafeBag
struct SafeBag_t2135;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t1693;

// System.Void Mono.Security.X509.SafeBag::.ctor(System.String,Mono.Security.ASN1)
extern "C" void SafeBag__ctor_m10402 (SafeBag_t2135 * __this, String_t* ___bagOID, ASN1_t1693 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.SafeBag::get_BagOID()
extern "C" String_t* SafeBag_get_BagOID_m10403 (SafeBag_t2135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.SafeBag::get_ASN1()
extern "C" ASN1_t1693 * SafeBag_get_ASN1_m10404 (SafeBag_t2135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
