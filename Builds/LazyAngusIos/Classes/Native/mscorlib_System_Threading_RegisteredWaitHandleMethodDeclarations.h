#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t5379;
// System.Threading.WaitHandle
struct WaitHandle_t3253;
// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t5378;
// System.Object
struct Object_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Threading.RegisteredWaitHandle::.ctor(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.TimeSpan,System.Boolean)
extern "C" void RegisteredWaitHandle__ctor_m24343 (RegisteredWaitHandle_t5379 * __this, WaitHandle_t3253 * ___waitObject, WaitOrTimerCallback_t5378 * ___callback, Object_t * ___state, TimeSpan_t334  ___timeout, bool ___executeOnlyOnce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.RegisteredWaitHandle::Wait(System.Object)
extern "C" void RegisteredWaitHandle_Wait_m24344 (RegisteredWaitHandle_t5379 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.RegisteredWaitHandle::DoCallBack(System.Object)
extern "C" void RegisteredWaitHandle_DoCallBack_m24345 (RegisteredWaitHandle_t5379 * __this, Object_t * ___timedOut, const MethodInfo* method) IL2CPP_METHOD_ATTR;
