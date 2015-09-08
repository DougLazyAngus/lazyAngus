#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t1575;
// System.Threading.Tasks.Task
struct Task_t1231;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt32>>
struct Action_1_t8849;
// System.AggregateException
struct AggregateException_t1359;

// System.Void System.Threading.Tasks.Task`1<System.UInt32>::.ctor()
extern "C" void Task_1__ctor_m64009_gshared (Task_1_t1575 * __this, const MethodInfo* method);
#define Task_1__ctor_m64009(__this, method) (( void (*) (Task_1_t1575 *, const MethodInfo*))Task_1__ctor_m64009_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt32>::get_Result()
extern "C" uint32_t Task_1_get_Result_m64010_gshared (Task_1_t1575 * __this, const MethodInfo* method);
#define Task_1_get_Result_m64010(__this, method) (( uint32_t (*) (Task_1_t1575 *, const MethodInfo*))Task_1_get_Result_m64010_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1231 * Task_1_ContinueWith_m64011_gshared (Task_1_t1575 * __this, Action_1_t8849 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m64011(__this, ___continuation, method) (( Task_t1231 * (*) (Task_1_t1575 *, Action_1_t8849 *, const MethodInfo*))Task_1_ContinueWith_m64011_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt32>::RunContinuations()
extern "C" void Task_1_RunContinuations_m64012_gshared (Task_1_t1575 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m64012(__this, method) (( void (*) (Task_1_t1575 *, const MethodInfo*))Task_1_RunContinuations_m64012_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m64013_gshared (Task_1_t1575 * __this, uint32_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m64013(__this, ___result, method) (( bool (*) (Task_1_t1575 *, uint32_t, const MethodInfo*))Task_1_TrySetResult_m64013_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m64014_gshared (Task_1_t1575 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m64014(__this, method) (( bool (*) (Task_1_t1575 *, const MethodInfo*))Task_1_TrySetCanceled_m64014_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m64015_gshared (Task_1_t1575 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m64015(__this, ___exception, method) (( bool (*) (Task_1_t1575 *, AggregateException_t1359 *, const MethodInfo*))Task_1_TrySetException_m64015_gshared)(__this, ___exception, method)
