#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpWebRequest
struct FtpWebRequest_t3984;
// System.Net.ICredentials
struct ICredentials_t3226;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3960;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t3977;
// System.Uri
struct Uri_t700;
// System.Net.ServicePoint
struct ServicePoint_t3877;
// System.Exception
struct Exception_t57;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.Object
struct Object_t;
// System.Net.WebResponse
struct WebResponse_t3245;
// System.Net.FtpStatus
struct FtpStatus_t3987;
// System.Net.Sockets.Socket
struct Socket_t3934;
// System.String[]
struct StringU5BU5D_t75;
// System.IO.Stream
struct Stream_t51;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3825;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t3880;
// System.Net.FtpWebRequest/RequestState
#include "System_System_Net_FtpWebRequest_RequestState.h"
// System.Net.Security.SslPolicyErrors
#include "System_System_Net_Security_SslPolicyErrors.h"

// System.Void System.Net.FtpWebRequest::.ctor(System.Uri)
extern "C" void FtpWebRequest__ctor_m13565 (FtpWebRequest_t3984 * __this, Uri_t700 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::.cctor()
extern "C" void FtpWebRequest__cctor_m13566 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpWebRequest::GetMustImplement()
extern "C" Exception_t57 * FtpWebRequest_GetMustImplement_m13567 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FtpWebRequest::get_ContentLength()
extern "C" int64_t FtpWebRequest_get_ContentLength_m13568 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.FtpWebRequest::get_Credentials()
extern "C" Object_t * FtpWebRequest_get_Credentials_m13569 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_Credentials(System.Net.ICredentials)
extern "C" void FtpWebRequest_set_Credentials_m13570 (FtpWebRequest_t3984 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::get_EnableSsl()
extern "C" bool FtpWebRequest_get_EnableSsl_m13571 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FtpWebRequest::get_Headers()
extern "C" WebHeaderCollection_t3960 * FtpWebRequest_get_Headers_m13572 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::get_Method()
extern "C" String_t* FtpWebRequest_get_Method_m13573 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.FtpWebRequest::get_Proxy()
extern "C" Object_t * FtpWebRequest_get_Proxy_m13574 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpWebRequest::get_ReadWriteTimeout()
extern "C" int32_t FtpWebRequest_get_ReadWriteTimeout_m13575 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.FtpWebRequest::get_RequestUri()
extern "C" Uri_t700 * FtpWebRequest_get_RequestUri_m13576 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.FtpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t3877 * FtpWebRequest_get_ServicePoint_m13577 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::get_DataType()
extern "C" String_t* FtpWebRequest_get_DataType_m13578 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpWebRequest/RequestState System.Net.FtpWebRequest::get_State()
extern "C" int32_t FtpWebRequest_get_State_m13579 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_State(System.Net.FtpWebRequest/RequestState)
extern "C" void FtpWebRequest_set_State_m13580 (FtpWebRequest_t3984 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::Abort()
extern "C" void FtpWebRequest_Abort_m13581 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FtpWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C" Object_t * FtpWebRequest_BeginGetResponse_m13582 (FtpWebRequest_t3984 * __this, AsyncCallback_t386 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FtpWebRequest::EndGetResponse(System.IAsyncResult)
extern "C" WebResponse_t3245 * FtpWebRequest_EndGetResponse_m13583 (FtpWebRequest_t3984 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FtpWebRequest::GetResponse()
extern "C" WebResponse_t3245 * FtpWebRequest_GetResponse_m13584 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.FtpWebRequest::GetServicePoint()
extern "C" ServicePoint_t3877 * FtpWebRequest_GetServicePoint_m13585 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ResolveHost()
extern "C" void FtpWebRequest_ResolveHost_m13586 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ProcessRequest()
extern "C" void FtpWebRequest_ProcessRequest_m13587 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::SetType()
extern "C" void FtpWebRequest_SetType_m13588 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::GetRemoteFolderPath(System.Uri)
extern "C" String_t* FtpWebRequest_GetRemoteFolderPath_m13589 (FtpWebRequest_t3984 * __this, Uri_t700 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CWDAndSetFileName(System.Uri)
extern "C" void FtpWebRequest_CWDAndSetFileName_m13590 (FtpWebRequest_t3984 * __this, Uri_t700 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ProcessMethod()
extern "C" void FtpWebRequest_ProcessMethod_m13591 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CloseControlConnection()
extern "C" void FtpWebRequest_CloseControlConnection_m13592 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CloseDataConnection()
extern "C" void FtpWebRequest_CloseDataConnection_m13593 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CloseConnection()
extern "C" void FtpWebRequest_CloseConnection_m13594 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ProcessSimpleMethod()
extern "C" void FtpWebRequest_ProcessSimpleMethod_m13595 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::UploadData()
extern "C" void FtpWebRequest_UploadData_m13596 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::DownloadData()
extern "C" void FtpWebRequest_DownloadData_m13597 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CheckRequestStarted()
extern "C" void FtpWebRequest_CheckRequestStarted_m13598 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::OpenControlConnection()
extern "C" void FtpWebRequest_OpenControlConnection_m13599 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::GetInitialPath(System.Net.FtpStatus)
extern "C" String_t* FtpWebRequest_GetInitialPath_m13600 (Object_t * __this /* static, unused */, FtpStatus_t3987 * ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.FtpWebRequest::SetupPassiveConnection(System.String)
extern "C" Socket_t3934 * FtpWebRequest_SetupPassiveConnection_m13601 (FtpWebRequest_t3984 * __this, String_t* ___statusDescription, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpWebRequest::CreateExceptionFromResponse(System.Net.FtpStatus)
extern "C" Exception_t57 * FtpWebRequest_CreateExceptionFromResponse_m13602 (FtpWebRequest_t3984 * __this, FtpStatus_t3987 * ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::SetTransferCompleted()
extern "C" void FtpWebRequest_SetTransferCompleted_m13603 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::OperationCompleted()
extern "C" void FtpWebRequest_OperationCompleted_m13604 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::SetCompleteWithError(System.Exception)
extern "C" void FtpWebRequest_SetCompleteWithError_m13605 (FtpWebRequest_t3984 * __this, Exception_t57 * ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.FtpWebRequest::InitDataConnection()
extern "C" Socket_t3934 * FtpWebRequest_InitDataConnection_m13606 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::OpenDataConnection()
extern "C" void FtpWebRequest_OpenDataConnection_m13607 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::Authenticate()
extern "C" void FtpWebRequest_Authenticate_m13608 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::SendCommand(System.String,System.String[])
extern "C" FtpStatus_t3987 * FtpWebRequest_SendCommand_m13609 (FtpWebRequest_t3984 * __this, String_t* ___command, StringU5BU5D_t75* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::SendCommand(System.Boolean,System.String,System.String[])
extern "C" FtpStatus_t3987 * FtpWebRequest_SendCommand_m13610 (FtpWebRequest_t3984 * __this, bool ___waitResponse, String_t* ___command, StringU5BU5D_t75* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::ServiceNotAvailable()
extern "C" FtpStatus_t3987 * FtpWebRequest_ServiceNotAvailable_m13611 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::GetResponseStatus()
extern "C" FtpStatus_t3987 * FtpWebRequest_GetResponseStatus_m13612 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::InitiateSecureConnection(System.IO.Stream&)
extern "C" void FtpWebRequest_InitiateSecureConnection_m13613 (FtpWebRequest_t3984 * __this, Stream_t51 ** ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::ChangeToSSLSocket(System.IO.Stream&)
extern "C" bool FtpWebRequest_ChangeToSSLSocket_m13614 (FtpWebRequest_t3984 * __this, Stream_t51 ** ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::InFinalState()
extern "C" bool FtpWebRequest_InFinalState_m13615 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::InProgress()
extern "C" bool FtpWebRequest_InProgress_m13616 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CheckIfAborted()
extern "C" void FtpWebRequest_CheckIfAborted_m13617 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CheckFinalState()
extern "C" void FtpWebRequest_CheckFinalState_m13618 (FtpWebRequest_t3984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::<callback>m__B(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C" bool FtpWebRequest_U3CcallbackU3Em__B_m13619 (Object_t * __this /* static, unused */, Object_t * ___sender, X509Certificate_t3825 * ___certificate, X509Chain_t3880 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
