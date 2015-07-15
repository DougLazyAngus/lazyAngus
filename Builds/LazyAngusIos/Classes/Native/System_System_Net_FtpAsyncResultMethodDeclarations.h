#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpAsyncResult
struct FtpAsyncResult_t1535;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1484;
// System.Exception
struct Exception_t27;
// System.Net.FtpWebResponse
struct FtpWebResponse_t1533;
// System.IO.Stream
struct Stream_t24;
// System.AsyncCallback
struct AsyncCallback_t387;

// System.Void System.Net.FtpAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C" void FtpAsyncResult__ctor_m7441 (FtpAsyncResult_t1535 * __this, AsyncCallback_t387 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.FtpAsyncResult::get_AsyncState()
extern "C" Object_t * FtpAsyncResult_get_AsyncState_m7442 (FtpAsyncResult_t1535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.FtpAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1484 * FtpAsyncResult_get_AsyncWaitHandle_m7443 (FtpAsyncResult_t1535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_IsCompleted()
extern "C" bool FtpAsyncResult_get_IsCompleted_m7444 (FtpAsyncResult_t1535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_GotException()
extern "C" bool FtpAsyncResult_get_GotException_m7445 (FtpAsyncResult_t1535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpAsyncResult::get_Exception()
extern "C" Exception_t27 * FtpAsyncResult_get_Exception_m7446 (FtpAsyncResult_t1535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpWebResponse System.Net.FtpAsyncResult::get_Response()
extern "C" FtpWebResponse_t1533 * FtpAsyncResult_get_Response_m7447 (FtpAsyncResult_t1535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::set_Stream(System.IO.Stream)
extern "C" void FtpAsyncResult_set_Stream_m7448 (FtpAsyncResult_t1535 * __this, Stream_t24 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::WaitUntilComplete(System.Int32,System.Boolean)
extern "C" bool FtpAsyncResult_WaitUntilComplete_m7449 (FtpAsyncResult_t1535 * __this, int32_t ___timeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception,System.Net.FtpWebResponse)
extern "C" void FtpAsyncResult_SetCompleted_m7450 (FtpAsyncResult_t1535 * __this, bool ___synch, Exception_t27 * ___exc, FtpWebResponse_t1533 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Net.FtpWebResponse)
extern "C" void FtpAsyncResult_SetCompleted_m7451 (FtpAsyncResult_t1535 * __this, bool ___synch, FtpWebResponse_t1533 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception)
extern "C" void FtpAsyncResult_SetCompleted_m7452 (FtpAsyncResult_t1535 * __this, bool ___synch, Exception_t27 * ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::DoCallback()
extern "C" void FtpAsyncResult_DoCallback_m7453 (FtpAsyncResult_t1535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
