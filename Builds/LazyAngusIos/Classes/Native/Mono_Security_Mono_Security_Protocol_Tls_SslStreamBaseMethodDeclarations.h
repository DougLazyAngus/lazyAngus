﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SslStreamBase
struct SslStreamBase_t3819;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3825;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3751;
// System.IO.Stream
struct Stream_t51;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3824;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t540;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t3816;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t3843;
// Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult
struct InternalAsyncResult_t3822;
// System.Byte[]
struct ByteU5BU5D_t66;
// Mono.Security.Protocol.Tls.CipherAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlgorithmType.h"
// Mono.Security.Protocol.Tls.HashAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgorithmType.h"
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void Mono.Security.Protocol.Tls.SslStreamBase::.ctor(System.IO.Stream,System.Boolean)
extern "C" void SslStreamBase__ctor_m12609 (SslStreamBase_t3819 * __this, Stream_t51 * ___stream, bool ___ownsStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::.cctor()
extern "C" void SslStreamBase__cctor_m12610 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::AsyncHandshakeCallback(System.IAsyncResult)
extern "C" void SslStreamBase_AsyncHandshakeCallback_m12611 (SslStreamBase_t3819 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_MightNeedHandshake()
extern "C" bool SslStreamBase_get_MightNeedHandshake_m12612 (SslStreamBase_t3819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::NegotiateHandshake()
extern "C" void SslStreamBase_NegotiateHandshake_m12613 (SslStreamBase_t3819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslStreamBase::OnBeginNegotiateHandshake(System.AsyncCallback,System.Object)
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::OnNegotiateHandshakeCallback(System.IAsyncResult)
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslStreamBase::OnLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::OnRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslStreamBase::OnRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_HaveRemoteValidation2Callback()
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslStreamBase::OnLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslStreamBase::RaiseLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t3825 * SslStreamBase_RaiseLocalCertificateSelection_m12614 (SslStreamBase_t3819 * __this, X509CertificateCollection_t3824 * ___certificates, X509Certificate_t3825 * ___remoteCertificate, String_t* ___targetHost, X509CertificateCollection_t3824 * ___requestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::RaiseRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool SslStreamBase_RaiseRemoteCertificateValidation_m12615 (SslStreamBase_t3819 * __this, X509Certificate_t3825 * ___certificate, Int32U5BU5D_t540* ___errors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslStreamBase::RaiseRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t3816 * SslStreamBase_RaiseRemoteCertificateValidation2_m12616 (SslStreamBase_t3819 * __this, X509CertificateCollection_t3751 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslStreamBase::RaiseLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t3843 * SslStreamBase_RaiseLocalPrivateKeySelection_m12617 (SslStreamBase_t3819 * __this, X509Certificate_t3825 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CheckCertRevocationStatus()
extern "C" bool SslStreamBase_get_CheckCertRevocationStatus_m12618 (SslStreamBase_t3819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::set_CheckCertRevocationStatus(System.Boolean)
extern "C" void SslStreamBase_set_CheckCertRevocationStatus_m12619 (SslStreamBase_t3819 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherAlgorithmType Mono.Security.Protocol.Tls.SslStreamBase::get_CipherAlgorithm()
extern "C" int32_t SslStreamBase_get_CipherAlgorithm_m12620 (SslStreamBase_t3819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::get_CipherStrength()
extern "C" int32_t SslStreamBase_get_CipherStrength_m12621 (SslStreamBase_t3819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.HashAlgorithmType Mono.Security.Protocol.Tls.SslStreamBase::get_HashAlgorithm()
extern "C" int32_t SslStreamBase_get_HashAlgorithm_m12622 (SslStreamBase_t3819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::get_HashStrength()
extern "C" int32_t SslStreamBase_get_HashStrength_m12623 (SslStreamBase_t3819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::get_KeyExchangeStrength()
extern "C" int32_t SslStreamBase_get_KeyExchangeStrength_m12624 (SslStreamBase_t3819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType Mono.Security.Protocol.Tls.SslStreamBase::get_KeyExchangeAlgorithm()
extern "C" int32_t SslStreamBase_get_KeyExchangeAlgorithm_m12625 (SslStreamBase_t3819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.SslStreamBase::get_SecurityProtocol()
extern "C" int32_t SslStreamBase_get_SecurityProtocol_m12626 (SslStreamBase_t3819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslStreamBase::get_ServerCertificate()
extern "C" X509Certificate_t3825 * SslStreamBase_get_ServerCertificate_m12627 (SslStreamBase_t3819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.SslStreamBase::get_ServerCertificates()
extern "C" X509CertificateCollection_t3751 * SslStreamBase_get_ServerCertificates_m12628 (SslStreamBase_t3819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::BeginNegotiateHandshake(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
extern "C" bool SslStreamBase_BeginNegotiateHandshake_m12629 (SslStreamBase_t3819 * __this, InternalAsyncResult_t3822 * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::EndNegotiateHandshake(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
extern "C" void SslStreamBase_EndNegotiateHandshake_m12630 (SslStreamBase_t3819 * __this, InternalAsyncResult_t3822 * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslStreamBase::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * SslStreamBase_BeginRead_m12631 (SslStreamBase_t3819 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t386 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalBeginRead(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
extern "C" void SslStreamBase_InternalBeginRead_m12632 (SslStreamBase_t3819 * __this, InternalAsyncResult_t3822 * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalReadCallback(System.IAsyncResult)
extern "C" void SslStreamBase_InternalReadCallback_m12633 (SslStreamBase_t3819 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalBeginWrite(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
extern "C" void SslStreamBase_InternalBeginWrite_m12634 (SslStreamBase_t3819 * __this, InternalAsyncResult_t3822 * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalWriteCallback(System.IAsyncResult)
extern "C" void SslStreamBase_InternalWriteCallback_m12635 (SslStreamBase_t3819 * __this, Object_t * ___ar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslStreamBase::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * SslStreamBase_BeginWrite_m12636 (SslStreamBase_t3819 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t386 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::EndRead(System.IAsyncResult)
extern "C" int32_t SslStreamBase_EndRead_m12637 (SslStreamBase_t3819 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::EndWrite(System.IAsyncResult)
extern "C" void SslStreamBase_EndWrite_m12638 (SslStreamBase_t3819 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Close()
extern "C" void SslStreamBase_Close_m12639 (SslStreamBase_t3819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Flush()
extern "C" void SslStreamBase_Flush_m12640 (SslStreamBase_t3819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::Read(System.Byte[])
extern "C" int32_t SslStreamBase_Read_m12641 (SslStreamBase_t3819 * __this, ByteU5BU5D_t66* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t SslStreamBase_Read_m12642 (SslStreamBase_t3819 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.SslStreamBase::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t SslStreamBase_Seek_m12643 (SslStreamBase_t3819 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::SetLength(System.Int64)
extern "C" void SslStreamBase_SetLength_m12644 (SslStreamBase_t3819 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Write(System.Byte[])
extern "C" void SslStreamBase_Write_m12645 (SslStreamBase_t3819 * __this, ByteU5BU5D_t66* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void SslStreamBase_Write_m12646 (SslStreamBase_t3819 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CanRead()
extern "C" bool SslStreamBase_get_CanRead_m12647 (SslStreamBase_t3819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CanSeek()
extern "C" bool SslStreamBase_get_CanSeek_m12648 (SslStreamBase_t3819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CanWrite()
extern "C" bool SslStreamBase_get_CanWrite_m12649 (SslStreamBase_t3819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.SslStreamBase::get_Length()
extern "C" int64_t SslStreamBase_get_Length_m12650 (SslStreamBase_t3819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.SslStreamBase::get_Position()
extern "C" int64_t SslStreamBase_get_Position_m12651 (SslStreamBase_t3819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::set_Position(System.Int64)
extern "C" void SslStreamBase_set_Position_m12652 (SslStreamBase_t3819 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Finalize()
extern "C" void SslStreamBase_Finalize_m12653 (SslStreamBase_t3819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Dispose(System.Boolean)
extern "C" void SslStreamBase_Dispose_m12654 (SslStreamBase_t3819 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::resetBuffer()
extern "C" void SslStreamBase_resetBuffer_m12655 (SslStreamBase_t3819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::checkDisposed()
extern "C" void SslStreamBase_checkDisposed_m12656 (SslStreamBase_t3819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
