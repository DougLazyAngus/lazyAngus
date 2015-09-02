#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.BasicConstraintsExtension
struct BasicConstraintsExtension_t3842;
// Mono.Security.X509.X509Extension
struct X509Extension_t3837;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.BasicConstraintsExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C" void BasicConstraintsExtension__ctor_m12741 (BasicConstraintsExtension_t3842 * __this, X509Extension_t3837 * ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.BasicConstraintsExtension::Decode()
extern "C" void BasicConstraintsExtension_Decode_m12742 (BasicConstraintsExtension_t3842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.BasicConstraintsExtension::Encode()
extern "C" void BasicConstraintsExtension_Encode_m12743 (BasicConstraintsExtension_t3842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.Extensions.BasicConstraintsExtension::get_CertificateAuthority()
extern "C" bool BasicConstraintsExtension_get_CertificateAuthority_m12744 (BasicConstraintsExtension_t3842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.BasicConstraintsExtension::ToString()
extern "C" String_t* BasicConstraintsExtension_ToString_m12745 (BasicConstraintsExtension_t3842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
