#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t3152;
// System.Object
struct Object_t;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t3151;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3146;

// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::.ctor(Mono.Security.X509.X509CertificateCollection)
extern "C" void X509CertificateEnumerator__ctor_m10842 (X509CertificateEnumerator_t3152 * __this, X509CertificateCollection_t3146 * ___mappings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_m10843 (X509CertificateEnumerator_t3152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.MoveNext()
extern "C" bool X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m10844 (X509CertificateEnumerator_t3152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.Reset()
extern "C" void X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m10845 (X509CertificateEnumerator_t3152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::get_Current()
extern "C" X509Certificate_t3151 * X509CertificateEnumerator_get_Current_m10846 (X509CertificateEnumerator_t3152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
extern "C" bool X509CertificateEnumerator_MoveNext_m10847 (X509CertificateEnumerator_t3152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::Reset()
extern "C" void X509CertificateEnumerator_Reset_m10848 (X509CertificateEnumerator_t3152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
