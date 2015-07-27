#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1829;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1830;
// System.Security.Cryptography.X509Certificates.X509Certificate[]
struct X509CertificateU5BU5D_t1888;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t1890;

// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor()
extern "C" void X509CertificateCollection__ctor_m9641 (X509CertificateCollection_t1829 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate[])
extern "C" void X509CertificateCollection__ctor_m9640 (X509CertificateCollection_t1829 * __this, X509CertificateU5BU5D_t1888* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateCollection::get_Item(System.Int32)
extern "C" X509Certificate_t1830 * X509CertificateCollection_get_Item_m9631 (X509CertificateCollection_t1829 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::AddRange(System.Security.Cryptography.X509Certificates.X509Certificate[])
extern "C" void X509CertificateCollection_AddRange_m10880 (X509CertificateCollection_t1829 * __this, X509CertificateU5BU5D_t1888* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetEnumerator()
extern "C" X509CertificateEnumerator_t1890 * X509CertificateCollection_GetEnumerator_m9645 (X509CertificateCollection_t1829 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetHashCode()
extern "C" int32_t X509CertificateCollection_GetHashCode_m10881 (X509CertificateCollection_t1829 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
