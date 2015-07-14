#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebConnection
struct WebConnection_t1557;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1558;
// System.Net.NetworkCredential
struct NetworkCredential_t1544;
// System.Net.WebConnectionGroup
struct WebConnectionGroup_t1577;
// System.Net.ServicePoint
struct ServicePoint_t1542;
// System.Exception
struct Exception_t27;
// System.IO.Stream
struct Stream_t24;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1505;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.Object
struct Object_t;
// System.EventHandler
struct EventHandler_t1556;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.EventArgs
struct EventArgs_t1712;
// System.Net.WebExceptionStatus
#include "System_System_Net_WebExceptionStatus.h"

// System.Void System.Net.WebConnection::.ctor(System.Net.WebConnectionGroup,System.Net.ServicePoint)
extern "C" void WebConnection__ctor_m7753 (WebConnection_t1557 * __this, WebConnectionGroup_t1577 * ___group, ServicePoint_t1542 * ___sPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::.cctor()
extern "C" void WebConnection__cctor_m7754 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::CanReuse()
extern "C" bool WebConnection_CanReuse_m7755 (WebConnection_t1557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::LoggedThrow(System.Exception)
extern "C" void WebConnection_LoggedThrow_m7756 (WebConnection_t1557 * __this, Exception_t27 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::CheckUnityWebSecurity(System.Net.HttpWebRequest)
extern "C" void WebConnection_CheckUnityWebSecurity_m7757 (WebConnection_t1557 * __this, HttpWebRequest_t1558 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::Connect(System.Net.HttpWebRequest)
extern "C" void WebConnection_Connect_m7758 (WebConnection_t1557 * __this, HttpWebRequest_t1558 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::EnsureSSLStreamAvailable()
extern "C" void WebConnection_EnsureSSLStreamAvailable_m7759 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::CreateTunnel(System.Net.HttpWebRequest,System.IO.Stream,System.Byte[]&)
extern "C" bool WebConnection_CreateTunnel_m7760 (WebConnection_t1557 * __this, HttpWebRequest_t1558 * ___request, Stream_t24 * ___stream, ByteU5BU5D_t36** ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebConnection::ReadHeaders(System.Net.HttpWebRequest,System.IO.Stream,System.Byte[]&,System.Int32&)
extern "C" WebHeaderCollection_t1505 * WebConnection_ReadHeaders_m7761 (WebConnection_t1557 * __this, HttpWebRequest_t1558 * ___request, Stream_t24 * ___stream, ByteU5BU5D_t36** ___retBuffer, int32_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::CreateStream(System.Net.HttpWebRequest)
extern "C" bool WebConnection_CreateStream_m7762 (WebConnection_t1557 * __this, HttpWebRequest_t1558 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::HandleError(System.Net.WebExceptionStatus,System.Exception,System.String)
extern "C" void WebConnection_HandleError_m7763 (WebConnection_t1557 * __this, int32_t ___st, Exception_t27 * ___e, String_t* ___where, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::ReadDone(System.IAsyncResult)
extern "C" void WebConnection_ReadDone_m7764 (Object_t * __this /* static, unused */, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::ExpectContent(System.Int32)
extern "C" bool WebConnection_ExpectContent_m7765 (Object_t * __this /* static, unused */, int32_t ___statusCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::GetCertificates()
extern "C" void WebConnection_GetCertificates_m7766 (WebConnection_t1557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::InitRead(System.Object)
extern "C" void WebConnection_InitRead_m7767 (Object_t * __this /* static, unused */, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnection::GetResponse(System.Byte[],System.Int32)
extern "C" int32_t WebConnection_GetResponse_m7768 (WebConnection_t1557 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::InitConnection(System.Object)
extern "C" void WebConnection_InitConnection_m7769 (WebConnection_t1557 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.EventHandler System.Net.WebConnection::SendRequest(System.Net.HttpWebRequest)
extern "C" EventHandler_t1556 * WebConnection_SendRequest_m7770 (WebConnection_t1557 * __this, HttpWebRequest_t1558 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::SendNext()
extern "C" void WebConnection_SendNext_m7771 (WebConnection_t1557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::NextRead()
extern "C" void WebConnection_NextRead_m7772 (WebConnection_t1557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::ReadLine(System.Byte[],System.Int32&,System.Int32,System.String&)
extern "C" bool WebConnection_ReadLine_m7773 (Object_t * __this /* static, unused */, ByteU5BU5D_t36* ___buffer, int32_t* ___start, int32_t ___max, String_t** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnection::BeginRead(System.Net.HttpWebRequest,System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * WebConnection_BeginRead_m7774 (WebConnection_t1557 * __this, HttpWebRequest_t1558 * ___request, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t387 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnection::EndRead(System.Net.HttpWebRequest,System.IAsyncResult)
extern "C" int32_t WebConnection_EndRead_m7775 (WebConnection_t1557 * __this, HttpWebRequest_t1558 * ___request, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnection::EnsureRead(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t WebConnection_EnsureRead_m7776 (WebConnection_t1557 * __this, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::CompleteChunkedRead()
extern "C" bool WebConnection_CompleteChunkedRead_m7777 (WebConnection_t1557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnection::BeginWrite(System.Net.HttpWebRequest,System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * WebConnection_BeginWrite_m7778 (WebConnection_t1557 * __this, HttpWebRequest_t1558 * ___request, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t387 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::EndWrite2(System.Net.HttpWebRequest,System.IAsyncResult)
extern "C" void WebConnection_EndWrite2_m7779 (WebConnection_t1557 * __this, HttpWebRequest_t1558 * ___request, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::EndWrite(System.Net.HttpWebRequest,System.IAsyncResult)
extern "C" bool WebConnection_EndWrite_m7780 (WebConnection_t1557 * __this, HttpWebRequest_t1558 * ___request, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnection::Read(System.Net.HttpWebRequest,System.Byte[],System.Int32,System.Int32)
extern "C" int32_t WebConnection_Read_m7781 (WebConnection_t1557 * __this, HttpWebRequest_t1558 * ___request, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::Write(System.Net.HttpWebRequest,System.Byte[],System.Int32,System.Int32,System.String&)
extern "C" bool WebConnection_Write_m7782 (WebConnection_t1557 * __this, HttpWebRequest_t1558 * ___request, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___size, String_t** ___err_msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::Close(System.Boolean)
extern "C" void WebConnection_Close_m7783 (WebConnection_t1557 * __this, bool ___sendNext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::Abort(System.Object,System.EventArgs)
extern "C" void WebConnection_Abort_m7784 (WebConnection_t1557 * __this, Object_t * ___sender, EventArgs_t1712 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::ResetNtlm()
extern "C" void WebConnection_ResetNtlm_m7785 (WebConnection_t1557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::get_Busy()
extern "C" bool WebConnection_get_Busy_m7786 (WebConnection_t1557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::set_PriorityRequest(System.Net.HttpWebRequest)
extern "C" void WebConnection_set_PriorityRequest_m7787 (WebConnection_t1557 * __this, HttpWebRequest_t1558 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::get_NtlmAuthenticated()
extern "C" bool WebConnection_get_NtlmAuthenticated_m7788 (WebConnection_t1557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::set_NtlmAuthenticated(System.Boolean)
extern "C" void WebConnection_set_NtlmAuthenticated_m7789 (WebConnection_t1557 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.WebConnection::get_NtlmCredential()
extern "C" NetworkCredential_t1544 * WebConnection_get_NtlmCredential_m7790 (WebConnection_t1557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::set_NtlmCredential(System.Net.NetworkCredential)
extern "C" void WebConnection_set_NtlmCredential_m7791 (WebConnection_t1557 * __this, NetworkCredential_t1544 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::get_UnsafeAuthenticatedConnectionSharing()
extern "C" bool WebConnection_get_UnsafeAuthenticatedConnectionSharing_m7792 (WebConnection_t1557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::set_UnsafeAuthenticatedConnectionSharing(System.Boolean)
extern "C" void WebConnection_set_UnsafeAuthenticatedConnectionSharing_m7793 (WebConnection_t1557 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
