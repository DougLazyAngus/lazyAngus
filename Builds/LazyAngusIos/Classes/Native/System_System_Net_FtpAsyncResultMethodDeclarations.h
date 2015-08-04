#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpAsyncResult
struct FtpAsyncResult_t3990;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t3865;
// System.Exception
struct Exception_t57;
// System.Net.FtpWebResponse
struct FtpWebResponse_t3989;
// System.IO.Stream
struct Stream_t51;
// System.AsyncCallback
struct AsyncCallback_t386;

// System.Void System.Net.FtpAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C" void FtpAsyncResult__ctor_m13579 (FtpAsyncResult_t3990 * __this, AsyncCallback_t386 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.FtpAsyncResult::get_AsyncState()
extern "C" Object_t * FtpAsyncResult_get_AsyncState_m13580 (FtpAsyncResult_t3990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.FtpAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t3865 * FtpAsyncResult_get_AsyncWaitHandle_m13581 (FtpAsyncResult_t3990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_IsCompleted()
extern "C" bool FtpAsyncResult_get_IsCompleted_m13582 (FtpAsyncResult_t3990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_GotException()
extern "C" bool FtpAsyncResult_get_GotException_m13583 (FtpAsyncResult_t3990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpAsyncResult::get_Exception()
extern "C" Exception_t57 * FtpAsyncResult_get_Exception_m13584 (FtpAsyncResult_t3990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpWebResponse System.Net.FtpAsyncResult::get_Response()
extern "C" FtpWebResponse_t3989 * FtpAsyncResult_get_Response_m13585 (FtpAsyncResult_t3990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::set_Stream(System.IO.Stream)
extern "C" void FtpAsyncResult_set_Stream_m13586 (FtpAsyncResult_t3990 * __this, Stream_t51 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::WaitUntilComplete(System.Int32,System.Boolean)
extern "C" bool FtpAsyncResult_WaitUntilComplete_m13587 (FtpAsyncResult_t3990 * __this, int32_t ___timeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception,System.Net.FtpWebResponse)
extern "C" void FtpAsyncResult_SetCompleted_m13588 (FtpAsyncResult_t3990 * __this, bool ___synch, Exception_t57 * ___exc, FtpWebResponse_t3989 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Net.FtpWebResponse)
extern "C" void FtpAsyncResult_SetCompleted_m13589 (FtpAsyncResult_t3990 * __this, bool ___synch, FtpWebResponse_t3989 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception)
extern "C" void FtpAsyncResult_SetCompleted_m13590 (FtpAsyncResult_t3990 * __this, bool ___synch, Exception_t57 * ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::DoCallback()
extern "C" void FtpAsyncResult_DoCallback_m13591 (FtpAsyncResult_t3990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
