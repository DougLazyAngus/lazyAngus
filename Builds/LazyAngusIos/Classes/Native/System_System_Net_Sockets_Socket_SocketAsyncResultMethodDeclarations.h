﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t1463;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1459;
// System.Net.Sockets.Socket
struct Socket_t1454;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.Collections.Queue
struct Queue_t1466;
// System.Net.Sockets.Socket/SocketAsyncCall
struct SocketAsyncCall_t1465;
// System.Net.Sockets.Socket/Worker
struct Worker_t1464;
// System.Exception
struct Exception_t27;
// System.Net.Sockets.SocketError
#include "System_System_Net_Sockets_SocketError.h"
// System.Net.Sockets.Socket/SocketOperation
#include "System_System_Net_Sockets_Socket_SocketOperation.h"

// System.Void System.Net.Sockets.Socket/SocketAsyncResult::.ctor(System.Net.Sockets.Socket,System.Object,System.AsyncCallback,System.Net.Sockets.Socket/SocketOperation)
extern "C" void SocketAsyncResult__ctor_m6978 (SocketAsyncResult_t1463 * __this, Socket_t1454 * ___sock, Object_t * ___state, AsyncCallback_t386 * ___callback, int32_t ___operation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CheckIfThrowDelayedException()
extern "C" void SocketAsyncResult_CheckIfThrowDelayedException_m6979 (SocketAsyncResult_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CompleteAllOnDispose(System.Collections.Queue)
extern "C" void SocketAsyncResult_CompleteAllOnDispose_m6980 (SocketAsyncResult_t1463 * __this, Queue_t1466 * ___queue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CompleteDisposed(System.Object)
extern "C" void SocketAsyncResult_CompleteDisposed_m6981 (SocketAsyncResult_t1463 * __this, Object_t * ___unused, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete()
extern "C" void SocketAsyncResult_Complete_m6982 (SocketAsyncResult_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket/SocketAsyncCall System.Net.Sockets.Socket/SocketAsyncResult::GetDelegate(System.Net.Sockets.Socket/Worker,System.Net.Sockets.Socket/SocketOperation)
extern "C" SocketAsyncCall_t1465 * SocketAsyncResult_GetDelegate_m6983 (SocketAsyncResult_t1463 * __this, Worker_t1464 * ___worker, int32_t ___op, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Int32)
extern "C" void SocketAsyncResult_Complete_m6984 (SocketAsyncResult_t1463 * __this, int32_t ___total, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Exception)
extern "C" void SocketAsyncResult_Complete_m6985 (SocketAsyncResult_t1463 * __this, Exception_t27 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Sockets.Socket/SocketAsyncResult::get_AsyncState()
extern "C" Object_t * SocketAsyncResult_get_AsyncState_m6986 (SocketAsyncResult_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.Sockets.Socket/SocketAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1459 * SocketAsyncResult_get_AsyncWaitHandle_m6987 (SocketAsyncResult_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::get_IsCompleted()
extern "C" bool SocketAsyncResult_get_IsCompleted_m6988 (SocketAsyncResult_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::set_IsCompleted(System.Boolean)
extern "C" void SocketAsyncResult_set_IsCompleted_m6989 (SocketAsyncResult_t1463 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::get_Total()
extern "C" int32_t SocketAsyncResult_get_Total_m6990 (SocketAsyncResult_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::set_Total(System.Int32)
extern "C" void SocketAsyncResult_set_Total_m6991 (SocketAsyncResult_t1463 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketError System.Net.Sockets.Socket/SocketAsyncResult::get_ErrorCode()
extern "C" int32_t SocketAsyncResult_get_ErrorCode_m6992 (SocketAsyncResult_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
