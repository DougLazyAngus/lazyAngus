#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.TlsClientSettings
struct TlsClientSettings_t1800;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1829;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1830;

// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::.ctor()
extern "C" void TlsClientSettings__ctor_m9406 (TlsClientSettings_t1800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.TlsClientSettings::get_TargetHost()
extern "C" String_t* TlsClientSettings_get_TargetHost_m9407 (TlsClientSettings_t1800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_TargetHost(System.String)
extern "C" void TlsClientSettings_set_TargetHost_m9408 (TlsClientSettings_t1800 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Protocol.Tls.TlsClientSettings::get_Certificates()
extern "C" X509CertificateCollection_t1829 * TlsClientSettings_get_Certificates_m9409 (TlsClientSettings_t1800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_Certificates(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" void TlsClientSettings_set_Certificates_m9410 (TlsClientSettings_t1800 * __this, X509CertificateCollection_t1829 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.TlsClientSettings::get_ClientCertificate()
extern "C" X509Certificate_t1830 * TlsClientSettings_get_ClientCertificate_m9411 (TlsClientSettings_t1800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_ClientCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void TlsClientSettings_set_ClientCertificate_m9412 (TlsClientSettings_t1800 * __this, X509Certificate_t1830 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::UpdateCertificateRSA()
extern "C" void TlsClientSettings_UpdateCertificateRSA_m9413 (TlsClientSettings_t1800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
