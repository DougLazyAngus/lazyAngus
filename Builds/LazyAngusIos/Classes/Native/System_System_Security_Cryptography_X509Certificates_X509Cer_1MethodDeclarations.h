#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t1889;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1829;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1828;

// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" void X509CertificateEnumerator__ctor_m10869 (X509CertificateEnumerator_t1889 * __this, X509CertificateCollection_t1828 * ___mappings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_m10870 (X509CertificateEnumerator_t1889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.MoveNext()
extern "C" bool X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m10871 (X509CertificateEnumerator_t1889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::get_Current()
extern "C" X509Certificate_t1829 * X509CertificateEnumerator_get_Current_m9639 (X509CertificateEnumerator_t1889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
extern "C" bool X509CertificateEnumerator_MoveNext_m10872 (X509CertificateEnumerator_t1889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
