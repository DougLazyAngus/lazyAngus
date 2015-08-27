﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.HttpsClientStream
struct HttpsClientStream_t3863;
// System.IO.Stream
struct Stream_t51;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3882;
// System.Net.HttpWebRequest
struct HttpWebRequest_t3860;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3883;
// System.Int32[]
struct Int32U5BU5D_t484;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t3901;

// System.Void Mono.Security.Protocol.Tls.HttpsClientStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.HttpWebRequest,System.Byte[])
extern "C" void HttpsClientStream__ctor_m12813 (HttpsClientStream_t3863 * __this, Stream_t51 * ___stream, X509CertificateCollection_t3882 * ___clientCertificates, HttpWebRequest_t3860 * ___request, ByteU5BU5D_t66* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::get_TrustFailure()
extern "C" bool HttpsClientStream_get_TrustFailure_m12814 (HttpsClientStream_t3863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool HttpsClientStream_RaiseServerCertificateValidation_m12815 (HttpsClientStream_t3863 * __this, X509Certificate_t3883 * ___certificate, Int32U5BU5D_t484* ___certificateErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__0(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t3883 * HttpsClientStream_U3CHttpsClientStreamU3Em__0_m12816 (Object_t * __this /* static, unused */, X509CertificateCollection_t3882 * ___clientCerts, X509Certificate_t3883 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t3882 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__1(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t3901 * HttpsClientStream_U3CHttpsClientStreamU3Em__1_m12817 (Object_t * __this /* static, unused */, X509Certificate_t3883 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
