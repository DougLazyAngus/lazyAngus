#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult
struct SendRecordAsyncResult_t3204;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t3203;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t57;
// System.Threading.WaitHandle
struct WaitHandle_t3252;
// System.AsyncCallback
struct AsyncCallback_t386;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,Mono.Security.Protocol.Tls.Handshake.HandshakeMessage)
extern "C" void SendRecordAsyncResult__ctor_m11141 (SendRecordAsyncResult_t3204 * __this, AsyncCallback_t386 * ___userCallback, Object_t * ___userState, HandshakeMessage_t3203 * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_Message()
extern "C" HandshakeMessage_t3203 * SendRecordAsyncResult_get_Message_m11142 (SendRecordAsyncResult_t3204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncState()
extern "C" Object_t * SendRecordAsyncResult_get_AsyncState_m11143 (SendRecordAsyncResult_t3204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncException()
extern "C" Exception_t57 * SendRecordAsyncResult_get_AsyncException_m11144 (SendRecordAsyncResult_t3204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_CompletedWithError()
extern "C" bool SendRecordAsyncResult_get_CompletedWithError_m11145 (SendRecordAsyncResult_t3204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t3252 * SendRecordAsyncResult_get_AsyncWaitHandle_m11146 (SendRecordAsyncResult_t3204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_IsCompleted()
extern "C" bool SendRecordAsyncResult_get_IsCompleted_m11147 (SendRecordAsyncResult_t3204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::SetComplete(System.Exception)
extern "C" void SendRecordAsyncResult_SetComplete_m11148 (SendRecordAsyncResult_t3204 * __this, Exception_t57 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::SetComplete()
extern "C" void SendRecordAsyncResult_SetComplete_m11149 (SendRecordAsyncResult_t3204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
