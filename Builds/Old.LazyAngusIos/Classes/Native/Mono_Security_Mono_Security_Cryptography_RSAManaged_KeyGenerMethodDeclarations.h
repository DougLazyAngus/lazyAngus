﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t2159;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t1714;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void KeyGeneratedEventHandler__ctor_m10566 (KeyGeneratedEventHandler_t2159 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::Invoke(System.Object,System.EventArgs)
extern "C" void KeyGeneratedEventHandler_Invoke_m10567 (KeyGeneratedEventHandler_t2159 * __this, Object_t * ___sender, EventArgs_t1714 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_KeyGeneratedEventHandler_t2159(Il2CppObject* delegate, Object_t * ___sender, EventArgs_t1714 * ___e);
// System.IAsyncResult Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * KeyGeneratedEventHandler_BeginInvoke_m10568 (KeyGeneratedEventHandler_t2159 * __this, Object_t * ___sender, EventArgs_t1714 * ___e, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void KeyGeneratedEventHandler_EndInvoke_m10569 (KeyGeneratedEventHandler_t2159 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;