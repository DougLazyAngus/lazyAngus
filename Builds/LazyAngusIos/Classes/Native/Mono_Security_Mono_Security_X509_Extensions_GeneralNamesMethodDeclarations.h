﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t3770;
// System.String[]
struct StringU5BU5D_t75;
// Mono.Security.ASN1
struct ASN1_t3727;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.GeneralNames::.ctor(Mono.Security.ASN1)
extern "C" void GeneralNames__ctor_m12279 (GeneralNames_t3770 * __this, ASN1_t3727 * ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_DNSNames()
extern "C" StringU5BU5D_t75* GeneralNames_get_DNSNames_m12280 (GeneralNames_t3770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_IPAddresses()
extern "C" StringU5BU5D_t75* GeneralNames_get_IPAddresses_m12281 (GeneralNames_t3770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.GeneralNames::ToString()
extern "C" String_t* GeneralNames_ToString_m12282 (GeneralNames_t3770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
