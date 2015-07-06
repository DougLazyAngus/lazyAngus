#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebAsyncResult
struct WebAsyncResult_t1532;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1459;
// System.Exception
struct Exception_t27;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.Net.HttpWebResponse
struct HttpWebResponse_t1531;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1535;
// System.IO.Stream
struct Stream_t24;

// System.Void System.Net.WebAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C" void WebAsyncResult__ctor_m7572 (WebAsyncResult_t1532 * __this, AsyncCallback_t386 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::.ctor(System.Net.HttpWebRequest,System.AsyncCallback,System.Object)
extern "C" void WebAsyncResult__ctor_m7573 (WebAsyncResult_t1532 * __this, HttpWebRequest_t1535 * ___request, AsyncCallback_t386 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.Int32,System.Int32)
extern "C" void WebAsyncResult__ctor_m7574 (WebAsyncResult_t1532 * __this, AsyncCallback_t386 * ___cb, Object_t * ___state, ByteU5BU5D_t36* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Exception)
extern "C" void WebAsyncResult_SetCompleted_m7575 (WebAsyncResult_t1532 * __this, bool ___synch, Exception_t27 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::Reset()
extern "C" void WebAsyncResult_Reset_m7576 (WebAsyncResult_t1532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Int32)
extern "C" void WebAsyncResult_SetCompleted_m7577 (WebAsyncResult_t1532 * __this, bool ___synch, int32_t ___nbytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.IO.Stream)
extern "C" void WebAsyncResult_SetCompleted_m7578 (WebAsyncResult_t1532 * __this, bool ___synch, Stream_t24 * ___writeStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Net.HttpWebResponse)
extern "C" void WebAsyncResult_SetCompleted_m7579 (WebAsyncResult_t1532 * __this, bool ___synch, HttpWebResponse_t1531 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::DoCallback()
extern "C" void WebAsyncResult_DoCallback_m7580 (WebAsyncResult_t1532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::WaitUntilComplete()
extern "C" void WebAsyncResult_WaitUntilComplete_m7581 (WebAsyncResult_t1532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::WaitUntilComplete(System.Int32,System.Boolean)
extern "C" bool WebAsyncResult_WaitUntilComplete_m7582 (WebAsyncResult_t1532 * __this, int32_t ___timeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.WebAsyncResult::get_AsyncState()
extern "C" Object_t * WebAsyncResult_get_AsyncState_m7583 (WebAsyncResult_t1532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.WebAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1459 * WebAsyncResult_get_AsyncWaitHandle_m7584 (WebAsyncResult_t1532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::get_IsCompleted()
extern "C" bool WebAsyncResult_get_IsCompleted_m7585 (WebAsyncResult_t1532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::get_GotException()
extern "C" bool WebAsyncResult_get_GotException_m7586 (WebAsyncResult_t1532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebAsyncResult::get_Exception()
extern "C" Exception_t27 * WebAsyncResult_get_Exception_m7587 (WebAsyncResult_t1532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_NBytes()
extern "C" int32_t WebAsyncResult_get_NBytes_m7588 (WebAsyncResult_t1532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::set_NBytes(System.Int32)
extern "C" void WebAsyncResult_set_NBytes_m7589 (WebAsyncResult_t1532 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebAsyncResult::get_InnerAsyncResult()
extern "C" Object_t * WebAsyncResult_get_InnerAsyncResult_m7590 (WebAsyncResult_t1532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::set_InnerAsyncResult(System.IAsyncResult)
extern "C" void WebAsyncResult_set_InnerAsyncResult_m7591 (WebAsyncResult_t1532 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpWebResponse System.Net.WebAsyncResult::get_Response()
extern "C" HttpWebResponse_t1531 * WebAsyncResult_get_Response_m7592 (WebAsyncResult_t1532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebAsyncResult::get_Buffer()
extern "C" ByteU5BU5D_t36* WebAsyncResult_get_Buffer_m7593 (WebAsyncResult_t1532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_Offset()
extern "C" int32_t WebAsyncResult_get_Offset_m7594 (WebAsyncResult_t1532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_Size()
extern "C" int32_t WebAsyncResult_get_Size_m7595 (WebAsyncResult_t1532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
