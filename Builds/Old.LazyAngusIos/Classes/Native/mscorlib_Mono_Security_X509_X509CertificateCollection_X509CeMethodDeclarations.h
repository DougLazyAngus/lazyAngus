﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t2332;
// System.Object
struct Object_t;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t2331;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t2327;

// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::.ctor(Mono.Security.X509.X509CertificateCollection)
extern "C" void X509CertificateEnumerator__ctor_m12476 (X509CertificateEnumerator_t2332 * __this, X509CertificateCollection_t2327 * ___mappings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_m12477 (X509CertificateEnumerator_t2332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.MoveNext()
extern "C" bool X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m12478 (X509CertificateEnumerator_t2332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::get_Current()
extern "C" X509Certificate_t2331 * X509CertificateEnumerator_get_Current_m12479 (X509CertificateEnumerator_t2332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
extern "C" bool X509CertificateEnumerator_MoveNext_m12480 (X509CertificateEnumerator_t2332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;