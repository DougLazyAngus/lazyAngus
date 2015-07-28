﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t3806;
// System.IO.Stream
struct Stream_t51;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t57;
// System.Threading.WaitHandle
struct WaitHandle_t3856;
// System.AsyncCallback
struct AsyncCallback_t386;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m12475 (ReceiveRecordAsyncResult_t3806 * __this, AsyncCallback_t386 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t66* ___initialBuffer, Stream_t51 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t51 * ReceiveRecordAsyncResult_get_Record_m12476 (ReceiveRecordAsyncResult_t3806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t66* ReceiveRecordAsyncResult_get_ResultingBuffer_m12477 (ReceiveRecordAsyncResult_t3806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t66* ReceiveRecordAsyncResult_get_InitialBuffer_m12478 (ReceiveRecordAsyncResult_t3806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m12479 (ReceiveRecordAsyncResult_t3806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t57 * ReceiveRecordAsyncResult_get_AsyncException_m12480 (ReceiveRecordAsyncResult_t3806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m12481 (ReceiveRecordAsyncResult_t3806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t3856 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m12482 (ReceiveRecordAsyncResult_t3806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m12483 (ReceiveRecordAsyncResult_t3806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m12484 (ReceiveRecordAsyncResult_t3806 * __this, Exception_t57 * ___ex, ByteU5BU5D_t66* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m12485 (ReceiveRecordAsyncResult_t3806 * __this, Exception_t57 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m12486 (ReceiveRecordAsyncResult_t3806 * __this, ByteU5BU5D_t66* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
