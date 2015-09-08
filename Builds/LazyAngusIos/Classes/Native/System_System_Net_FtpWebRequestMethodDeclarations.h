#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpWebRequest
struct FtpWebRequest_t4366;
// System.Net.ICredentials
struct ICredentials_t3555;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t4311;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t4360;
// System.Uri
struct Uri_t775;
// System.Net.ServicePoint
struct ServicePoint_t3280;
// System.Exception
struct Exception_t57;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.Object
struct Object_t;
// System.Net.WebResponse
struct WebResponse_t3732;
// System.Net.FtpStatus
struct FtpStatus_t4374;
// System.Net.Sockets.Socket
struct Socket_t4405;
// System.String[]
struct StringU5BU5D_t75;
// System.IO.Stream
struct Stream_t51;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3225;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t3283;
// System.Net.FtpWebRequest/RequestState
#include "System_System_Net_FtpWebRequest_RequestState.h"
// System.Net.Security.SslPolicyErrors
#include "System_System_Net_Security_SslPolicyErrors.h"

// System.Void System.Net.FtpWebRequest::.ctor(System.Uri)
extern "C" void FtpWebRequest__ctor_m16564 (FtpWebRequest_t4366 * __this, Uri_t775 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::.cctor()
extern "C" void FtpWebRequest__cctor_m16565 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpWebRequest::GetMustImplement()
extern "C" Exception_t57 * FtpWebRequest_GetMustImplement_m16566 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FtpWebRequest::get_ContentLength()
extern "C" int64_t FtpWebRequest_get_ContentLength_m16567 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.FtpWebRequest::get_Credentials()
extern "C" Object_t * FtpWebRequest_get_Credentials_m16568 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_Credentials(System.Net.ICredentials)
extern "C" void FtpWebRequest_set_Credentials_m16569 (FtpWebRequest_t4366 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::get_EnableSsl()
extern "C" bool FtpWebRequest_get_EnableSsl_m16570 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FtpWebRequest::get_Headers()
extern "C" WebHeaderCollection_t4311 * FtpWebRequest_get_Headers_m16571 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::get_Method()
extern "C" String_t* FtpWebRequest_get_Method_m16572 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.FtpWebRequest::get_Proxy()
extern "C" Object_t * FtpWebRequest_get_Proxy_m16573 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpWebRequest::get_ReadWriteTimeout()
extern "C" int32_t FtpWebRequest_get_ReadWriteTimeout_m16574 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.FtpWebRequest::get_RequestUri()
extern "C" Uri_t775 * FtpWebRequest_get_RequestUri_m16575 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.FtpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t3280 * FtpWebRequest_get_ServicePoint_m16576 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::get_DataType()
extern "C" String_t* FtpWebRequest_get_DataType_m16577 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpWebRequest/RequestState System.Net.FtpWebRequest::get_State()
extern "C" int32_t FtpWebRequest_get_State_m16578 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_State(System.Net.FtpWebRequest/RequestState)
extern "C" void FtpWebRequest_set_State_m16579 (FtpWebRequest_t4366 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::Abort()
extern "C" void FtpWebRequest_Abort_m16580 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FtpWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C" Object_t * FtpWebRequest_BeginGetResponse_m16581 (FtpWebRequest_t4366 * __this, AsyncCallback_t386 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FtpWebRequest::EndGetResponse(System.IAsyncResult)
extern "C" WebResponse_t3732 * FtpWebRequest_EndGetResponse_m16582 (FtpWebRequest_t4366 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FtpWebRequest::GetResponse()
extern "C" WebResponse_t3732 * FtpWebRequest_GetResponse_m16583 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.FtpWebRequest::GetServicePoint()
extern "C" ServicePoint_t3280 * FtpWebRequest_GetServicePoint_m16584 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ResolveHost()
extern "C" void FtpWebRequest_ResolveHost_m16585 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ProcessRequest()
extern "C" void FtpWebRequest_ProcessRequest_m16586 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::SetType()
extern "C" void FtpWebRequest_SetType_m16587 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::GetRemoteFolderPath(System.Uri)
extern "C" String_t* FtpWebRequest_GetRemoteFolderPath_m16588 (FtpWebRequest_t4366 * __this, Uri_t775 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CWDAndSetFileName(System.Uri)
extern "C" void FtpWebRequest_CWDAndSetFileName_m16589 (FtpWebRequest_t4366 * __this, Uri_t775 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ProcessMethod()
extern "C" void FtpWebRequest_ProcessMethod_m16590 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CloseControlConnection()
extern "C" void FtpWebRequest_CloseControlConnection_m16591 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CloseDataConnection()
extern "C" void FtpWebRequest_CloseDataConnection_m16592 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CloseConnection()
extern "C" void FtpWebRequest_CloseConnection_m16593 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ProcessSimpleMethod()
extern "C" void FtpWebRequest_ProcessSimpleMethod_m16594 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::UploadData()
extern "C" void FtpWebRequest_UploadData_m16595 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::DownloadData()
extern "C" void FtpWebRequest_DownloadData_m16596 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CheckRequestStarted()
extern "C" void FtpWebRequest_CheckRequestStarted_m16597 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::OpenControlConnection()
extern "C" void FtpWebRequest_OpenControlConnection_m16598 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::GetInitialPath(System.Net.FtpStatus)
extern "C" String_t* FtpWebRequest_GetInitialPath_m16599 (Object_t * __this /* static, unused */, FtpStatus_t4374 * ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.FtpWebRequest::SetupPassiveConnection(System.String)
extern "C" Socket_t4405 * FtpWebRequest_SetupPassiveConnection_m16600 (FtpWebRequest_t4366 * __this, String_t* ___statusDescription, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpWebRequest::CreateExceptionFromResponse(System.Net.FtpStatus)
extern "C" Exception_t57 * FtpWebRequest_CreateExceptionFromResponse_m16601 (FtpWebRequest_t4366 * __this, FtpStatus_t4374 * ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::SetTransferCompleted()
extern "C" void FtpWebRequest_SetTransferCompleted_m16602 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::OperationCompleted()
extern "C" void FtpWebRequest_OperationCompleted_m16603 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::SetCompleteWithError(System.Exception)
extern "C" void FtpWebRequest_SetCompleteWithError_m16604 (FtpWebRequest_t4366 * __this, Exception_t57 * ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.FtpWebRequest::InitDataConnection()
extern "C" Socket_t4405 * FtpWebRequest_InitDataConnection_m16605 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::OpenDataConnection()
extern "C" void FtpWebRequest_OpenDataConnection_m16606 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::Authenticate()
extern "C" void FtpWebRequest_Authenticate_m16607 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::SendCommand(System.String,System.String[])
extern "C" FtpStatus_t4374 * FtpWebRequest_SendCommand_m16608 (FtpWebRequest_t4366 * __this, String_t* ___command, StringU5BU5D_t75* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::SendCommand(System.Boolean,System.String,System.String[])
extern "C" FtpStatus_t4374 * FtpWebRequest_SendCommand_m16609 (FtpWebRequest_t4366 * __this, bool ___waitResponse, String_t* ___command, StringU5BU5D_t75* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::ServiceNotAvailable()
extern "C" FtpStatus_t4374 * FtpWebRequest_ServiceNotAvailable_m16610 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::GetResponseStatus()
extern "C" FtpStatus_t4374 * FtpWebRequest_GetResponseStatus_m16611 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::InitiateSecureConnection(System.IO.Stream&)
extern "C" void FtpWebRequest_InitiateSecureConnection_m16612 (FtpWebRequest_t4366 * __this, Stream_t51 ** ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::ChangeToSSLSocket(System.IO.Stream&)
extern "C" bool FtpWebRequest_ChangeToSSLSocket_m16613 (FtpWebRequest_t4366 * __this, Stream_t51 ** ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::InFinalState()
extern "C" bool FtpWebRequest_InFinalState_m16614 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::InProgress()
extern "C" bool FtpWebRequest_InProgress_m16615 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CheckIfAborted()
extern "C" void FtpWebRequest_CheckIfAborted_m16616 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CheckFinalState()
extern "C" void FtpWebRequest_CheckFinalState_m16617 (FtpWebRequest_t4366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::<callback>m__3(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C" bool FtpWebRequest_U3CcallbackU3Em__3_m16618 (Object_t * __this /* static, unused */, Object_t * ___sender, X509Certificate_t3225 * ___certificate, X509Chain_t3283 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
