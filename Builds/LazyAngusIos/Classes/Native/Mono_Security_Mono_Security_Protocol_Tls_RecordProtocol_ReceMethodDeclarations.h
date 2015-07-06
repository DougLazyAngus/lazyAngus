#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t2172;
// System.IO.Stream
struct Stream_t24;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t27;
// System.Threading.WaitHandle
struct WaitHandle_t1459;
// System.AsyncCallback
struct AsyncCallback_t386;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m10719 (ReceiveRecordAsyncResult_t2172 * __this, AsyncCallback_t386 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t36* ___initialBuffer, Stream_t24 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t24 * ReceiveRecordAsyncResult_get_Record_m10720 (ReceiveRecordAsyncResult_t2172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t36* ReceiveRecordAsyncResult_get_ResultingBuffer_m10721 (ReceiveRecordAsyncResult_t2172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t36* ReceiveRecordAsyncResult_get_InitialBuffer_m10722 (ReceiveRecordAsyncResult_t2172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m10723 (ReceiveRecordAsyncResult_t2172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t27 * ReceiveRecordAsyncResult_get_AsyncException_m10724 (ReceiveRecordAsyncResult_t2172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m10725 (ReceiveRecordAsyncResult_t2172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1459 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m10726 (ReceiveRecordAsyncResult_t2172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m10727 (ReceiveRecordAsyncResult_t2172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m10728 (ReceiveRecordAsyncResult_t2172 * __this, Exception_t27 * ___ex, ByteU5BU5D_t36* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m10729 (ReceiveRecordAsyncResult_t2172 * __this, Exception_t27 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m10730 (ReceiveRecordAsyncResult_t2172 * __this, ByteU5BU5D_t36* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
