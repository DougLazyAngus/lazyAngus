﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpWebRequest
struct HttpWebRequest_t1568;
// System.Uri
struct Uri_t603;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1478;
// System.Net.ICredentials
struct ICredentials_t1535;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1515;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t1536;
// System.Net.ServicePoint
struct ServicePoint_t1552;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.Object
struct Object_t;
// System.Net.WebResponse
struct WebResponse_t1533;
// System.Net.WebAsyncResult
struct WebAsyncResult_t1565;
// System.Exception
struct Exception_t27;
// System.Net.WebConnectionStream
struct WebConnectionStream_t1563;
// System.Net.WebConnectionData
struct WebConnectionData_t1586;
// System.Net.DecompressionMethods
#include "System_System_Net_DecompressionMethods.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Net.HttpStatusCode
#include "System_System_Net_HttpStatusCode.h"
// System.Net.WebExceptionStatus
#include "System_System_Net_WebExceptionStatus.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C" void HttpWebRequest__ctor_m7600 (HttpWebRequest_t1568 * __this, Uri_t603 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest__ctor_m7601 (HttpWebRequest_t1568 * __this, SerializationInfo_t1255 * ___serializationInfo, StreamingContext_t1256  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C" void HttpWebRequest__cctor_m7602 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m7603 (HttpWebRequest_t1568 * __this, SerializationInfo_t1255 * ___serializationInfo, StreamingContext_t1256  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C" Uri_t603 * HttpWebRequest_get_Address_m7604 (HttpWebRequest_t1568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.DecompressionMethods System.Net.HttpWebRequest::get_AutomaticDecompression()
extern "C" int32_t HttpWebRequest_get_AutomaticDecompression_m7605 (HttpWebRequest_t1568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_InternalAllowBuffering()
extern "C" bool HttpWebRequest_get_InternalAllowBuffering_m7606 (HttpWebRequest_t1568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::get_ClientCertificates()
extern "C" X509CertificateCollection_t1478 * HttpWebRequest_get_ClientCertificates_m7607 (HttpWebRequest_t1568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.HttpWebRequest::get_ContentLength()
extern "C" int64_t HttpWebRequest_get_ContentLength_m7608 (HttpWebRequest_t1568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_InternalContentLength(System.Int64)
extern "C" void HttpWebRequest_set_InternalContentLength_m7609 (HttpWebRequest_t1568 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.HttpWebRequest::get_Credentials()
extern "C" Object_t * HttpWebRequest_get_Credentials_m7610 (HttpWebRequest_t1568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_Credentials(System.Net.ICredentials)
extern "C" void HttpWebRequest_set_Credentials_m7611 (HttpWebRequest_t1568 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.HttpWebRequest::get_Headers()
extern "C" WebHeaderCollection_t1515 * HttpWebRequest_get_Headers_m7612 (HttpWebRequest_t1568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_KeepAlive()
extern "C" bool HttpWebRequest_get_KeepAlive_m7613 (HttpWebRequest_t1568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.HttpWebRequest::get_ReadWriteTimeout()
extern "C" int32_t HttpWebRequest_get_ReadWriteTimeout_m7614 (HttpWebRequest_t1568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::get_Method()
extern "C" String_t* HttpWebRequest_get_Method_m7615 (HttpWebRequest_t1568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.HttpWebRequest::get_Proxy()
extern "C" Object_t * HttpWebRequest_get_Proxy_m7616 (HttpWebRequest_t1568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_RequestUri()
extern "C" Uri_t603 * HttpWebRequest_get_RequestUri_m7617 (HttpWebRequest_t1568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_SendChunked()
extern "C" bool HttpWebRequest_get_SendChunked_m7618 (HttpWebRequest_t1568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t1552 * HttpWebRequest_get_ServicePoint_m7619 (HttpWebRequest_t1568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::get_TransferEncoding()
extern "C" String_t* HttpWebRequest_get_TransferEncoding_m7620 (HttpWebRequest_t1568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_UnsafeAuthenticatedConnectionSharing()
extern "C" bool HttpWebRequest_get_UnsafeAuthenticatedConnectionSharing_m7621 (HttpWebRequest_t1568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_ExpectContinue()
extern "C" bool HttpWebRequest_get_ExpectContinue_m7622 (HttpWebRequest_t1568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_ExpectContinue(System.Boolean)
extern "C" void HttpWebRequest_set_ExpectContinue_m7623 (HttpWebRequest_t1568 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_AuthUri()
extern "C" Uri_t603 * HttpWebRequest_get_AuthUri_m7624 (HttpWebRequest_t1568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_ProxyQuery()
extern "C" bool HttpWebRequest_get_ProxyQuery_m7625 (HttpWebRequest_t1568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C" ServicePoint_t1552 * HttpWebRequest_GetServicePoint_m7626 (HttpWebRequest_t1568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::CheckIfForceWrite()
extern "C" void HttpWebRequest_CheckIfForceWrite_m7627 (HttpWebRequest_t1568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.HttpWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C" Object_t * HttpWebRequest_BeginGetResponse_m7628 (HttpWebRequest_t1568 * __this, AsyncCallback_t387 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.HttpWebRequest::EndGetResponse(System.IAsyncResult)
extern "C" WebResponse_t1533 * HttpWebRequest_EndGetResponse_m7629 (HttpWebRequest_t1568 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.HttpWebRequest::GetResponse()
extern "C" WebResponse_t1533 * HttpWebRequest_GetResponse_m7630 (HttpWebRequest_t1568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_FinishedReading()
extern "C" bool HttpWebRequest_get_FinishedReading_m7631 (HttpWebRequest_t1568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_FinishedReading(System.Boolean)
extern "C" void HttpWebRequest_set_FinishedReading_m7632 (HttpWebRequest_t1568 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_Aborted()
extern "C" bool HttpWebRequest_get_Aborted_m7633 (HttpWebRequest_t1568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::Abort()
extern "C" void HttpWebRequest_Abort_m7634 (HttpWebRequest_t1568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_GetObjectData_m7635 (HttpWebRequest_t1568 * __this, SerializationInfo_t1255 * ___serializationInfo, StreamingContext_t1256  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::DoContinueDelegate(System.Int32,System.Net.WebHeaderCollection)
extern "C" void HttpWebRequest_DoContinueDelegate_m7636 (HttpWebRequest_t1568 * __this, int32_t ___statusCode, WebHeaderCollection_t1515 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::Redirect(System.Net.WebAsyncResult,System.Net.HttpStatusCode)
extern "C" bool HttpWebRequest_Redirect_m7637 (HttpWebRequest_t1568 * __this, WebAsyncResult_t1565 * ___result, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::GetHeaders()
extern "C" String_t* HttpWebRequest_GetHeaders_m7638 (HttpWebRequest_t1568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::DoPreAuthenticate()
extern "C" void HttpWebRequest_DoPreAuthenticate_m7639 (HttpWebRequest_t1568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetWriteStreamError(System.Net.WebExceptionStatus,System.Exception)
extern "C" void HttpWebRequest_SetWriteStreamError_m7640 (HttpWebRequest_t1568 * __this, int32_t ___status, Exception_t27 * ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SendRequestHeaders(System.Boolean)
extern "C" void HttpWebRequest_SendRequestHeaders_m7641 (HttpWebRequest_t1568 * __this, bool ___propagate_error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetWriteStream(System.Net.WebConnectionStream)
extern "C" void HttpWebRequest_SetWriteStream_m7642 (HttpWebRequest_t1568 * __this, WebConnectionStream_t1563 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetResponseError(System.Net.WebExceptionStatus,System.Exception,System.String)
extern "C" void HttpWebRequest_SetResponseError_m7643 (HttpWebRequest_t1568 * __this, int32_t ___status, Exception_t27 * ___e, String_t* ___where, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::CheckSendError(System.Net.WebConnectionData)
extern "C" void HttpWebRequest_CheckSendError_m7644 (HttpWebRequest_t1568 * __this, WebConnectionData_t1586 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::HandleNtlmAuth(System.Net.WebAsyncResult)
extern "C" void HttpWebRequest_HandleNtlmAuth_m7645 (HttpWebRequest_t1568 * __this, WebAsyncResult_t1565 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetResponseData(System.Net.WebConnectionData)
extern "C" void HttpWebRequest_SetResponseData_m7646 (HttpWebRequest_t1568 * __this, WebConnectionData_t1586 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::CheckAuthorization(System.Net.WebResponse,System.Net.HttpStatusCode)
extern "C" bool HttpWebRequest_CheckAuthorization_m7647 (HttpWebRequest_t1568 * __this, WebResponse_t1533 * ___response, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::CheckFinalStatus(System.Net.WebAsyncResult)
extern "C" bool HttpWebRequest_CheckFinalStatus_m7648 (HttpWebRequest_t1568 * __this, WebAsyncResult_t1565 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
