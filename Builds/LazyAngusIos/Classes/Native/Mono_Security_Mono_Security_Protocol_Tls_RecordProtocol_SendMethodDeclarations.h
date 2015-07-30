#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult
struct SendRecordAsyncResult_t3815;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t3814;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t57;
// System.Threading.WaitHandle
struct WaitHandle_t3863;
// System.AsyncCallback
struct AsyncCallback_t386;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,Mono.Security.Protocol.Tls.Handshake.HandshakeMessage)
extern "C" void SendRecordAsyncResult__ctor_m12534 (SendRecordAsyncResult_t3815 * __this, AsyncCallback_t386 * ___userCallback, Object_t * ___userState, HandshakeMessage_t3814 * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_Message()
extern "C" HandshakeMessage_t3814 * SendRecordAsyncResult_get_Message_m12535 (SendRecordAsyncResult_t3815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncState()
extern "C" Object_t * SendRecordAsyncResult_get_AsyncState_m12536 (SendRecordAsyncResult_t3815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncException()
extern "C" Exception_t57 * SendRecordAsyncResult_get_AsyncException_m12537 (SendRecordAsyncResult_t3815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_CompletedWithError()
extern "C" bool SendRecordAsyncResult_get_CompletedWithError_m12538 (SendRecordAsyncResult_t3815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t3863 * SendRecordAsyncResult_get_AsyncWaitHandle_m12539 (SendRecordAsyncResult_t3815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_IsCompleted()
extern "C" bool SendRecordAsyncResult_get_IsCompleted_m12540 (SendRecordAsyncResult_t3815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::SetComplete(System.Exception)
extern "C" void SendRecordAsyncResult_SetComplete_m12541 (SendRecordAsyncResult_t3815 * __this, Exception_t57 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::SetComplete()
extern "C" void SendRecordAsyncResult_SetComplete_m12542 (SendRecordAsyncResult_t3815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
