#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.BasicConstraintsExtension
struct BasicConstraintsExtension_t2163;
// Mono.Security.X509.X509Extension
struct X509Extension_t1719;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.BasicConstraintsExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C" void BasicConstraintsExtension__ctor_m10671 (BasicConstraintsExtension_t2163 * __this, X509Extension_t1719 * ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.BasicConstraintsExtension::Decode()
extern "C" void BasicConstraintsExtension_Decode_m10672 (BasicConstraintsExtension_t2163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.BasicConstraintsExtension::Encode()
extern "C" void BasicConstraintsExtension_Encode_m10673 (BasicConstraintsExtension_t2163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.Extensions.BasicConstraintsExtension::get_CertificateAuthority()
extern "C" bool BasicConstraintsExtension_get_CertificateAuthority_m10674 (BasicConstraintsExtension_t2163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.BasicConstraintsExtension::ToString()
extern "C" String_t* BasicConstraintsExtension_ToString_m10675 (BasicConstraintsExtension_t2163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
