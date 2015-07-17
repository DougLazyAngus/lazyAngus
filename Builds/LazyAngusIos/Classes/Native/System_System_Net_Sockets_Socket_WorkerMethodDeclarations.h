#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Sockets.Socket/Worker
struct Worker_t1982;
// System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t1981;

// System.Void System.Net.Sockets.Socket/Worker::.ctor(System.Net.Sockets.Socket/SocketAsyncResult)
extern "C" void Worker__ctor_m10019 (Worker_t1982 * __this, SocketAsyncResult_t1981 * ___ares, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::.ctor(System.Net.Sockets.Socket/SocketAsyncResult,System.Boolean)
extern "C" void Worker__ctor_m10020 (Worker_t1982 * __this, SocketAsyncResult_t1981 * ___ares, bool ___requireSocketSecurity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::Receive()
extern "C" void Worker_Receive_m10021 (Worker_t1982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::ReceiveFrom()
extern "C" void Worker_ReceiveFrom_m10022 (Worker_t1982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::UpdateSendValues(System.Int32)
extern "C" void Worker_UpdateSendValues_m10023 (Worker_t1982 * __this, int32_t ___last_sent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::Send()
extern "C" void Worker_Send_m10024 (Worker_t1982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::SendTo()
extern "C" void Worker_SendTo_m10025 (Worker_t1982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
