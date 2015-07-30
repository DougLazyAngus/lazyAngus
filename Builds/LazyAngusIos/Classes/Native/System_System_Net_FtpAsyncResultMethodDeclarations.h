#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpAsyncResult
struct FtpAsyncResult_t3988;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t3863;
// System.Exception
struct Exception_t57;
// System.Net.FtpWebResponse
struct FtpWebResponse_t3987;
// System.IO.Stream
struct Stream_t51;
// System.AsyncCallback
struct AsyncCallback_t386;

// System.Void System.Net.FtpAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C" void FtpAsyncResult__ctor_m13563 (FtpAsyncResult_t3988 * __this, AsyncCallback_t386 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.FtpAsyncResult::get_AsyncState()
extern "C" Object_t * FtpAsyncResult_get_AsyncState_m13564 (FtpAsyncResult_t3988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.FtpAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t3863 * FtpAsyncResult_get_AsyncWaitHandle_m13565 (FtpAsyncResult_t3988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_IsCompleted()
extern "C" bool FtpAsyncResult_get_IsCompleted_m13566 (FtpAsyncResult_t3988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_GotException()
extern "C" bool FtpAsyncResult_get_GotException_m13567 (FtpAsyncResult_t3988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpAsyncResult::get_Exception()
extern "C" Exception_t57 * FtpAsyncResult_get_Exception_m13568 (FtpAsyncResult_t3988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpWebResponse System.Net.FtpAsyncResult::get_Response()
extern "C" FtpWebResponse_t3987 * FtpAsyncResult_get_Response_m13569 (FtpAsyncResult_t3988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::set_Stream(System.IO.Stream)
extern "C" void FtpAsyncResult_set_Stream_m13570 (FtpAsyncResult_t3988 * __this, Stream_t51 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::WaitUntilComplete(System.Int32,System.Boolean)
extern "C" bool FtpAsyncResult_WaitUntilComplete_m13571 (FtpAsyncResult_t3988 * __this, int32_t ___timeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception,System.Net.FtpWebResponse)
extern "C" void FtpAsyncResult_SetCompleted_m13572 (FtpAsyncResult_t3988 * __this, bool ___synch, Exception_t57 * ___exc, FtpWebResponse_t3987 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Net.FtpWebResponse)
extern "C" void FtpAsyncResult_SetCompleted_m13573 (FtpAsyncResult_t3988 * __this, bool ___synch, FtpWebResponse_t3987 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception)
extern "C" void FtpAsyncResult_SetCompleted_m13574 (FtpAsyncResult_t3988 * __this, bool ___synch, Exception_t57 * ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::DoCallback()
extern "C" void FtpAsyncResult_DoCallback_m13575 (FtpAsyncResult_t3988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
