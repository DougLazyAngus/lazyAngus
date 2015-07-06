#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t1450;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1543;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1445;
// System.String[]
struct StringU5BU5D_t45;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.Security.LocalCertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void LocalCertificateSelectionCallback__ctor_m8478 (LocalCertificateSelectionCallback_t1450 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::Invoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern "C" X509Certificate_t1543 * LocalCertificateSelectionCallback_Invoke_m8479 (LocalCertificateSelectionCallback_t1450 * __this, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t1445 * ___localCertificates, X509Certificate_t1543 * ___remoteCertificate, StringU5BU5D_t45* ___acceptableIssuers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
#include "mscorlib_ArrayTypes.h"
extern "C" X509Certificate_t1543 * pinvoke_delegate_wrapper_LocalCertificateSelectionCallback_t1450(Il2CppObject* delegate, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t1445 * ___localCertificates, X509Certificate_t1543 * ___remoteCertificate, StringU5BU5D_t45* ___acceptableIssuers);
// System.IAsyncResult System.Net.Security.LocalCertificateSelectionCallback::BeginInvoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[],System.AsyncCallback,System.Object)
extern "C" Object_t * LocalCertificateSelectionCallback_BeginInvoke_m8480 (LocalCertificateSelectionCallback_t1450 * __this, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t1445 * ___localCertificates, X509Certificate_t1543 * ___remoteCertificate, StringU5BU5D_t45* ___acceptableIssuers, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern "C" X509Certificate_t1543 * LocalCertificateSelectionCallback_EndInvoke_m8481 (LocalCertificateSelectionCallback_t1450 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
