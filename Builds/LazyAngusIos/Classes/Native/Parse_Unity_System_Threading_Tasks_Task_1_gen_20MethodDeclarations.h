#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t1582;
// System.Threading.Tasks.Task
struct Task_t1238;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt32>>
struct Action_1_t8856;
// System.AggregateException
struct AggregateException_t1366;

// System.Void System.Threading.Tasks.Task`1<System.UInt32>::.ctor()
extern "C" void Task_1__ctor_m64066_gshared (Task_1_t1582 * __this, const MethodInfo* method);
#define Task_1__ctor_m64066(__this, method) (( void (*) (Task_1_t1582 *, const MethodInfo*))Task_1__ctor_m64066_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt32>::get_Result()
extern "C" uint32_t Task_1_get_Result_m64067_gshared (Task_1_t1582 * __this, const MethodInfo* method);
#define Task_1_get_Result_m64067(__this, method) (( uint32_t (*) (Task_1_t1582 *, const MethodInfo*))Task_1_get_Result_m64067_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1238 * Task_1_ContinueWith_m64068_gshared (Task_1_t1582 * __this, Action_1_t8856 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m64068(__this, ___continuation, method) (( Task_t1238 * (*) (Task_1_t1582 *, Action_1_t8856 *, const MethodInfo*))Task_1_ContinueWith_m64068_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt32>::RunContinuations()
extern "C" void Task_1_RunContinuations_m64069_gshared (Task_1_t1582 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m64069(__this, method) (( void (*) (Task_1_t1582 *, const MethodInfo*))Task_1_RunContinuations_m64069_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m64070_gshared (Task_1_t1582 * __this, uint32_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m64070(__this, ___result, method) (( bool (*) (Task_1_t1582 *, uint32_t, const MethodInfo*))Task_1_TrySetResult_m64070_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m64071_gshared (Task_1_t1582 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m64071(__this, method) (( bool (*) (Task_1_t1582 *, const MethodInfo*))Task_1_TrySetCanceled_m64071_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt32>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m64072_gshared (Task_1_t1582 * __this, AggregateException_t1366 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m64072(__this, ___exception, method) (( bool (*) (Task_1_t1582 *, AggregateException_t1366 *, const MethodInfo*))Task_1_TrySetException_m64072_gshared)(__this, ___exception, method)
