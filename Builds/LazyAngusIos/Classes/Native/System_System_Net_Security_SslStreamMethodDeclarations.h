#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Security.SslStream
struct SslStream_t4401;
// System.IO.Stream
struct Stream_t51;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t3288;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t4403;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3232;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3231;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Security.Authentication.SslProtocols
#include "System_System_Security_Authentication_SslProtocols.h"
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.RemoteCertificateValidationCallback,System.Net.Security.LocalCertificateSelectionCallback)
extern "C" void SslStream__ctor_m16840 (SslStream_t4401 * __this, Stream_t51 * ___innerStream, bool ___leaveStreamOpen, RemoteCertificateValidationCallback_t3288 * ___certValidationCallback, LocalCertificateSelectionCallback_t4403 * ___certSelectionCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanRead()
extern "C" bool SslStream_get_CanRead_m16841 (SslStream_t4401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanSeek()
extern "C" bool SslStream_get_CanSeek_m16842 (SslStream_t4401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanWrite()
extern "C" bool SslStream_get_CanWrite_m16843 (SslStream_t4401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.SslStream::get_Length()
extern "C" int64_t SslStream_get_Length_m16844 (SslStream_t4401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.SslStream::get_Position()
extern "C" int64_t SslStream_get_Position_m16845 (SslStream_t4401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::set_Position(System.Int64)
extern "C" void SslStream_set_Position_m16846 (SslStream_t4401 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_IsAuthenticated()
extern "C" bool SslStream_get_IsAuthenticated_m16847 (SslStream_t4401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::get_ReadTimeout()
extern "C" int32_t SslStream_get_ReadTimeout_m16848 (SslStream_t4401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::get_WriteTimeout()
extern "C" int32_t SslStream_get_WriteTimeout_m16849 (SslStream_t4401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.SslStream::OnCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t3232 * SslStream_OnCertificateSelection_m16850 (SslStream_t4401 * __this, X509CertificateCollection_t3231 * ___clientCerts, X509Certificate_t3232 * ___serverCert, String_t* ___targetHost, X509CertificateCollection_t3231 * ___serverRequestedCerts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginAuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean,System.AsyncCallback,System.Object)
extern "C" Object_t * SslStream_BeginAuthenticateAsClient_m16851 (SslStream_t4401 * __this, String_t* ___targetHost, X509CertificateCollection_t3231 * ___clientCertificates, int32_t ___sslProtocolType, bool ___checkCertificateRevocation, AsyncCallback_t386 * ___asyncCallback, Object_t * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * SslStream_BeginRead_m16852 (SslStream_t4401 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t386 * ___asyncCallback, Object_t * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType System.Net.Security.SslStream::GetMonoSslProtocol(System.Security.Authentication.SslProtocols)
extern "C" int32_t SslStream_GetMonoSslProtocol_m16853 (SslStream_t4401 * __this, int32_t ___ms, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * SslStream_BeginWrite_m16854 (SslStream_t4401 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t386 * ___asyncCallback, Object_t * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::AuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean)
extern "C" void SslStream_AuthenticateAsClient_m16855 (SslStream_t4401 * __this, String_t* ___targetHost, X509CertificateCollection_t3231 * ___clientCertificates, int32_t ___sslProtocolType, bool ___checkCertificateRevocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Dispose(System.Boolean)
extern "C" void SslStream_Dispose_m16856 (SslStream_t4401 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::EndAuthenticateAsClient(System.IAsyncResult)
extern "C" void SslStream_EndAuthenticateAsClient_m16857 (SslStream_t4401 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::EndRead(System.IAsyncResult)
extern "C" int32_t SslStream_EndRead_m16858 (SslStream_t4401 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::EndWrite(System.IAsyncResult)
extern "C" void SslStream_EndWrite_m16859 (SslStream_t4401 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Flush()
extern "C" void SslStream_Flush_m16860 (SslStream_t4401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t SslStream_Read_m16861 (SslStream_t4401 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.SslStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t SslStream_Seek_m16862 (SslStream_t4401 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::SetLength(System.Int64)
extern "C" void SslStream_SetLength_m16863 (SslStream_t4401 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void SslStream_Write_m16864 (SslStream_t4401 * __this, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::CheckConnectionAuthenticated()
extern "C" void SslStream_CheckConnectionAuthenticated_m16865 (SslStream_t4401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
