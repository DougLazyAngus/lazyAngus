#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebAsyncResult
struct WebAsyncResult_t2044;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1860;
// System.Exception
struct Exception_t27;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.Net.HttpWebResponse
struct HttpWebResponse_t2043;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1805;
// System.IO.Stream
struct Stream_t24;

// System.Void System.Net.WebAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C" void WebAsyncResult__ctor_m10600 (WebAsyncResult_t2044 * __this, AsyncCallback_t344 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::.ctor(System.Net.HttpWebRequest,System.AsyncCallback,System.Object)
extern "C" void WebAsyncResult__ctor_m10601 (WebAsyncResult_t2044 * __this, HttpWebRequest_t1805 * ___request, AsyncCallback_t344 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.Int32,System.Int32)
extern "C" void WebAsyncResult__ctor_m10602 (WebAsyncResult_t2044 * __this, AsyncCallback_t344 * ___cb, Object_t * ___state, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Exception)
extern "C" void WebAsyncResult_SetCompleted_m10603 (WebAsyncResult_t2044 * __this, bool ___synch, Exception_t27 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::Reset()
extern "C" void WebAsyncResult_Reset_m10604 (WebAsyncResult_t2044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Int32)
extern "C" void WebAsyncResult_SetCompleted_m10605 (WebAsyncResult_t2044 * __this, bool ___synch, int32_t ___nbytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.IO.Stream)
extern "C" void WebAsyncResult_SetCompleted_m10606 (WebAsyncResult_t2044 * __this, bool ___synch, Stream_t24 * ___writeStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Net.HttpWebResponse)
extern "C" void WebAsyncResult_SetCompleted_m10607 (WebAsyncResult_t2044 * __this, bool ___synch, HttpWebResponse_t2043 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::DoCallback()
extern "C" void WebAsyncResult_DoCallback_m10608 (WebAsyncResult_t2044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::WaitUntilComplete()
extern "C" void WebAsyncResult_WaitUntilComplete_m10609 (WebAsyncResult_t2044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::WaitUntilComplete(System.Int32,System.Boolean)
extern "C" bool WebAsyncResult_WaitUntilComplete_m10610 (WebAsyncResult_t2044 * __this, int32_t ___timeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.WebAsyncResult::get_AsyncState()
extern "C" Object_t * WebAsyncResult_get_AsyncState_m10611 (WebAsyncResult_t2044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.WebAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1860 * WebAsyncResult_get_AsyncWaitHandle_m10612 (WebAsyncResult_t2044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::get_IsCompleted()
extern "C" bool WebAsyncResult_get_IsCompleted_m10613 (WebAsyncResult_t2044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::get_GotException()
extern "C" bool WebAsyncResult_get_GotException_m10614 (WebAsyncResult_t2044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebAsyncResult::get_Exception()
extern "C" Exception_t27 * WebAsyncResult_get_Exception_m10615 (WebAsyncResult_t2044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_NBytes()
extern "C" int32_t WebAsyncResult_get_NBytes_m10616 (WebAsyncResult_t2044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::set_NBytes(System.Int32)
extern "C" void WebAsyncResult_set_NBytes_m10617 (WebAsyncResult_t2044 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebAsyncResult::get_InnerAsyncResult()
extern "C" Object_t * WebAsyncResult_get_InnerAsyncResult_m10618 (WebAsyncResult_t2044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::set_InnerAsyncResult(System.IAsyncResult)
extern "C" void WebAsyncResult_set_InnerAsyncResult_m10619 (WebAsyncResult_t2044 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpWebResponse System.Net.WebAsyncResult::get_Response()
extern "C" HttpWebResponse_t2043 * WebAsyncResult_get_Response_m10620 (WebAsyncResult_t2044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebAsyncResult::get_Buffer()
extern "C" ByteU5BU5D_t36* WebAsyncResult_get_Buffer_m10621 (WebAsyncResult_t2044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_Offset()
extern "C" int32_t WebAsyncResult_get_Offset_m10622 (WebAsyncResult_t2044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_Size()
extern "C" int32_t WebAsyncResult_get_Size_m10623 (WebAsyncResult_t2044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
