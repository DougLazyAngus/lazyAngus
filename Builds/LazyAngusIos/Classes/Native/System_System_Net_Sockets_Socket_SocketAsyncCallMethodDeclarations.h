﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Sockets.Socket/SocketAsyncCall
struct SocketAsyncCall_t1985;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.Sockets.Socket/SocketAsyncCall::.ctor(System.Object,System.IntPtr)
extern "C" void SocketAsyncCall__ctor_m10037 (SocketAsyncCall_t1985 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncCall::Invoke()
extern "C" void SocketAsyncCall_Invoke_m10038 (SocketAsyncCall_t1985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SocketAsyncCall_t1985(Il2CppObject* delegate);
// System.IAsyncResult System.Net.Sockets.Socket/SocketAsyncCall::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * SocketAsyncCall_BeginInvoke_m10039 (SocketAsyncCall_t1985 * __this, AsyncCallback_t346 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncCall::EndInvoke(System.IAsyncResult)
extern "C" void SocketAsyncCall_EndInvoke_m10040 (SocketAsyncCall_t1985 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
