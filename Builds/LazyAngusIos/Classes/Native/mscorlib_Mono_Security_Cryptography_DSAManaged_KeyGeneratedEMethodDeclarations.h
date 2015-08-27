﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t4397;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t1298;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void KeyGeneratedEventHandler__ctor_m16534 (KeyGeneratedEventHandler_t4397 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler::Invoke(System.Object,System.EventArgs)
extern "C" void KeyGeneratedEventHandler_Invoke_m16535 (KeyGeneratedEventHandler_t4397 * __this, Object_t * ___sender, EventArgs_t1298 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_KeyGeneratedEventHandler_t4397(Il2CppObject* delegate, Object_t * ___sender, EventArgs_t1298 * ___e);
// System.IAsyncResult Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * KeyGeneratedEventHandler_BeginInvoke_m16536 (KeyGeneratedEventHandler_t4397 * __this, Object_t * ___sender, EventArgs_t1298 * ___e, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void KeyGeneratedEventHandler_EndInvoke_m16537 (KeyGeneratedEventHandler_t4397 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
