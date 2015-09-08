#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Chain
struct X509Chain_t4799;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t4788;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t4798;

// System.Void Mono.Security.X509.X509Chain::.ctor()
extern "C" void X509Chain__ctor_m19858 (X509Chain_t4799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::get_TrustAnchors()
extern "C" X509CertificateCollection_t4788 * X509Chain_get_TrustAnchors_m19859 (X509Chain_t4799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Chain::LoadCertificates(Mono.Security.X509.X509CertificateCollection)
extern "C" void X509Chain_LoadCertificates_m19860 (X509Chain_t4799 * __this, X509CertificateCollection_t4788 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::Build(Mono.Security.X509.X509Certificate)
extern "C" bool X509Chain_Build_m19861 (X509Chain_t4799 * __this, X509Certificate_t4798 * ___leaf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Chain::Reset()
extern "C" void X509Chain_Reset_m19862 (X509Chain_t4799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsValid(Mono.Security.X509.X509Certificate)
extern "C" bool X509Chain_IsValid_m19863 (X509Chain_t4799 * __this, X509Certificate_t4798 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateParent(Mono.Security.X509.X509Certificate)
extern "C" X509Certificate_t4798 * X509Chain_FindCertificateParent_m19864 (X509Chain_t4799 * __this, X509Certificate_t4798 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateRoot(Mono.Security.X509.X509Certificate)
extern "C" X509Certificate_t4798 * X509Chain_FindCertificateRoot_m19865 (X509Chain_t4799 * __this, X509Certificate_t4798 * ___potentialRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsTrusted(Mono.Security.X509.X509Certificate)
extern "C" bool X509Chain_IsTrusted_m19866 (X509Chain_t4799 * __this, X509Certificate_t4798 * ___potentialTrusted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsParent(Mono.Security.X509.X509Certificate,Mono.Security.X509.X509Certificate)
extern "C" bool X509Chain_IsParent_m19867 (X509Chain_t4799 * __this, X509Certificate_t4798 * ___child, X509Certificate_t4798 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
