﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult
struct SendRecordAsyncResult_t1812;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t1811;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t27;
// System.Threading.WaitHandle
struct WaitHandle_t1860;
// System.AsyncCallback
struct AsyncCallback_t344;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,Mono.Security.Protocol.Tls.Handshake.HandshakeMessage)
extern "C" void SendRecordAsyncResult__ctor_m9224 (SendRecordAsyncResult_t1812 * __this, AsyncCallback_t344 * ___userCallback, Object_t * ___userState, HandshakeMessage_t1811 * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_Message()
extern "C" HandshakeMessage_t1811 * SendRecordAsyncResult_get_Message_m9225 (SendRecordAsyncResult_t1812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncState()
extern "C" Object_t * SendRecordAsyncResult_get_AsyncState_m9226 (SendRecordAsyncResult_t1812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncException()
extern "C" Exception_t27 * SendRecordAsyncResult_get_AsyncException_m9227 (SendRecordAsyncResult_t1812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_CompletedWithError()
extern "C" bool SendRecordAsyncResult_get_CompletedWithError_m9228 (SendRecordAsyncResult_t1812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1860 * SendRecordAsyncResult_get_AsyncWaitHandle_m9229 (SendRecordAsyncResult_t1812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_IsCompleted()
extern "C" bool SendRecordAsyncResult_get_IsCompleted_m9230 (SendRecordAsyncResult_t1812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::SetComplete(System.Exception)
extern "C" void SendRecordAsyncResult_SetComplete_m9231 (SendRecordAsyncResult_t1812 * __this, Exception_t27 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::SetComplete()
extern "C" void SendRecordAsyncResult_SetComplete_m9232 (SendRecordAsyncResult_t1812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
