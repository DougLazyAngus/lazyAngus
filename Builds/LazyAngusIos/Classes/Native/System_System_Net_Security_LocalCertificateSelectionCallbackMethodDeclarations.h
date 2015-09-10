#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t4403;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3232;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3231;
// System.String[]
struct StringU5BU5D_t75;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.Security.LocalCertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void LocalCertificateSelectionCallback__ctor_m18061 (LocalCertificateSelectionCallback_t4403 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::Invoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern "C" X509Certificate_t3232 * LocalCertificateSelectionCallback_Invoke_m18062 (LocalCertificateSelectionCallback_t4403 * __this, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t3231 * ___localCertificates, X509Certificate_t3232 * ___remoteCertificate, StringU5BU5D_t75* ___acceptableIssuers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
#include "mscorlib_ArrayTypes.h"
extern "C" X509Certificate_t3232 * pinvoke_delegate_wrapper_LocalCertificateSelectionCallback_t4403(Il2CppObject* delegate, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t3231 * ___localCertificates, X509Certificate_t3232 * ___remoteCertificate, StringU5BU5D_t75* ___acceptableIssuers);
// System.IAsyncResult System.Net.Security.LocalCertificateSelectionCallback::BeginInvoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[],System.AsyncCallback,System.Object)
extern "C" Object_t * LocalCertificateSelectionCallback_BeginInvoke_m18063 (LocalCertificateSelectionCallback_t4403 * __this, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t3231 * ___localCertificates, X509Certificate_t3232 * ___remoteCertificate, StringU5BU5D_t75* ___acceptableIssuers, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern "C" X509Certificate_t3232 * LocalCertificateSelectionCallback_EndInvoke_m18064 (LocalCertificateSelectionCallback_t4403 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
