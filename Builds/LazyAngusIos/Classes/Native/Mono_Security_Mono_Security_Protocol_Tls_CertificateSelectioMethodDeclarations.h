#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t1690;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1521;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1423;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t388;
// System.AsyncCallback
struct AsyncCallback_t389;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Protocol.Tls.CertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void CertificateSelectionCallback__ctor_m8405 (CertificateSelectionCallback_t1690 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t1521 * CertificateSelectionCallback_Invoke_m10884 (CertificateSelectionCallback_t1690 * __this, X509CertificateCollection_t1423 * ___clientCertificates, X509Certificate_t1521 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1423 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
extern "C" X509Certificate_t1521 * pinvoke_delegate_wrapper_CertificateSelectionCallback_t1690(Il2CppObject* delegate, X509CertificateCollection_t1423 * ___clientCertificates, X509Certificate_t1521 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1423 * ___serverRequestedCertificates);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateSelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.AsyncCallback,System.Object)
extern "C" Object_t * CertificateSelectionCallback_BeginInvoke_m10885 (CertificateSelectionCallback_t1690 * __this, X509CertificateCollection_t1423 * ___clientCertificates, X509Certificate_t1521 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1423 * ___serverRequestedCertificates, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern "C" X509Certificate_t1521 * CertificateSelectionCallback_EndInvoke_m10886 (CertificateSelectionCallback_t1690 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
