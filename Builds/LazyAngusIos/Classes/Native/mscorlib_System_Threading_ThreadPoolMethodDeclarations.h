#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.ThreadPool
struct ThreadPool_t5391;
// System.Threading.WaitCallback
struct WaitCallback_t2173;
// System.Object
struct Object_t;
// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t5389;
// System.Threading.WaitHandle
struct WaitHandle_t3263;
// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t5388;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback)
extern "C" bool ThreadPool_QueueUserWorkItem_m8014 (Object_t * __this /* static, unused */, WaitCallback_t2173 * ___callBack, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
extern "C" bool ThreadPool_QueueUserWorkItem_m18187 (Object_t * __this /* static, unused */, WaitCallback_t2173 * ___callBack, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.RegisteredWaitHandle System.Threading.ThreadPool::RegisterWaitForSingleObject(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.Int64,System.Boolean)
extern "C" RegisteredWaitHandle_t5389 * ThreadPool_RegisterWaitForSingleObject_m24441 (Object_t * __this /* static, unused */, WaitHandle_t3263 * ___waitObject, WaitOrTimerCallback_t5388 * ___callBack, Object_t * ___state, int64_t ___millisecondsTimeOutInterval, bool ___executeOnlyOnce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.RegisteredWaitHandle System.Threading.ThreadPool::RegisterWaitForSingleObject(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.TimeSpan,System.Boolean)
extern "C" RegisteredWaitHandle_t5389 * ThreadPool_RegisterWaitForSingleObject_m24442 (Object_t * __this /* static, unused */, WaitHandle_t3263 * ___waitObject, WaitOrTimerCallback_t5388 * ___callBack, Object_t * ___state, TimeSpan_t334  ___timeout, bool ___executeOnlyOnce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
