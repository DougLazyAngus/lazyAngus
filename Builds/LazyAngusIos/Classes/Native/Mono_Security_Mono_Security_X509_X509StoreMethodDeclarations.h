﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Store
struct X509Store_t1768;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1755;
// System.Collections.ArrayList
struct ArrayList_t1556;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t36;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1760;
// Mono.Security.X509.X509Crl
struct X509Crl_t1766;

// System.Void Mono.Security.X509.X509Store::.ctor(System.String,System.Boolean)
extern "C" void X509Store__ctor_m8994 (X509Store_t1768 * __this, String_t* ___path, bool ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::get_Certificates()
extern "C" X509CertificateCollection_t1755 * X509Store_get_Certificates_m8995 (X509Store_t1768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::get_Crls()
extern "C" ArrayList_t1556 * X509Store_get_Crls_m8996 (X509Store_t1768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Store::Load(System.String)
extern "C" ByteU5BU5D_t36* X509Store_Load_m8997 (X509Store_t1768 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Store::LoadCertificate(System.String)
extern "C" X509Certificate_t1760 * X509Store_LoadCertificate_m8998 (X509Store_t1768 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl Mono.Security.X509.X509Store::LoadCrl(System.String)
extern "C" X509Crl_t1766 * X509Store_LoadCrl_m8999 (X509Store_t1768 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Store::CheckStore(System.String,System.Boolean)
extern "C" bool X509Store_CheckStore_m9000 (X509Store_t1768 * __this, String_t* ___path, bool ___throwException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::BuildCertificatesCollection(System.String)
extern "C" X509CertificateCollection_t1755 * X509Store_BuildCertificatesCollection_m9001 (X509Store_t1768 * __this, String_t* ___storeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::BuildCrlsCollection(System.String)
extern "C" ArrayList_t1556 * X509Store_BuildCrlsCollection_m9002 (X509Store_t1768 * __this, String_t* ___storeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
