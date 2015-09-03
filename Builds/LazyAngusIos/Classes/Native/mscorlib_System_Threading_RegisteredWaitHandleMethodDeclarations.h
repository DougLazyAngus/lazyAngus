#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t5378;
// System.Threading.WaitHandle
struct WaitHandle_t3252;
// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t5377;
// System.Object
struct Object_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Threading.RegisteredWaitHandle::.ctor(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.TimeSpan,System.Boolean)
extern "C" void RegisteredWaitHandle__ctor_m24330 (RegisteredWaitHandle_t5378 * __this, WaitHandle_t3252 * ___waitObject, WaitOrTimerCallback_t5377 * ___callback, Object_t * ___state, TimeSpan_t334  ___timeout, bool ___executeOnlyOnce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.RegisteredWaitHandle::Wait(System.Object)
extern "C" void RegisteredWaitHandle_Wait_m24331 (RegisteredWaitHandle_t5378 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.RegisteredWaitHandle::DoCallBack(System.Object)
extern "C" void RegisteredWaitHandle_DoCallBack_m24332 (RegisteredWaitHandle_t5378 * __this, Object_t * ___timedOut, const MethodInfo* method) IL2CPP_METHOD_ATTR;
