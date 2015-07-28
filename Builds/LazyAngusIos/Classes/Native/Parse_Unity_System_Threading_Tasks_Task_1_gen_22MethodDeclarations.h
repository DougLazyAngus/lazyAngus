#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t1497;
// System.Threading.Tasks.Task
struct Task_t1149;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt64>>
struct Action_1_t8215;
// System.AggregateException
struct AggregateException_t1279;

// System.Void System.Threading.Tasks.Task`1<System.UInt64>::.ctor()
extern "C" void Task_1__ctor_m58638_gshared (Task_1_t1497 * __this, const MethodInfo* method);
#define Task_1__ctor_m58638(__this, method) (( void (*) (Task_1_t1497 *, const MethodInfo*))Task_1__ctor_m58638_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt64>::get_Result()
extern "C" uint64_t Task_1_get_Result_m58639_gshared (Task_1_t1497 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58639(__this, method) (( uint64_t (*) (Task_1_t1497 *, const MethodInfo*))Task_1_get_Result_m58639_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1149 * Task_1_ContinueWith_m58640_gshared (Task_1_t1497 * __this, Action_1_t8215 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58640(__this, ___continuation, method) (( Task_t1149 * (*) (Task_1_t1497 *, Action_1_t8215 *, const MethodInfo*))Task_1_ContinueWith_m58640_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt64>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58641_gshared (Task_1_t1497 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58641(__this, method) (( void (*) (Task_1_t1497 *, const MethodInfo*))Task_1_RunContinuations_m58641_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58642_gshared (Task_1_t1497 * __this, uint64_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58642(__this, ___result, method) (( bool (*) (Task_1_t1497 *, uint64_t, const MethodInfo*))Task_1_TrySetResult_m58642_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58643_gshared (Task_1_t1497 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58643(__this, method) (( bool (*) (Task_1_t1497 *, const MethodInfo*))Task_1_TrySetCanceled_m58643_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58644_gshared (Task_1_t1497 * __this, AggregateException_t1279 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58644(__this, ___exception, method) (( bool (*) (Task_1_t1497 *, AggregateException_t1279 *, const MethodInfo*))Task_1_TrySetException_m58644_gshared)(__this, ___exception, method)
