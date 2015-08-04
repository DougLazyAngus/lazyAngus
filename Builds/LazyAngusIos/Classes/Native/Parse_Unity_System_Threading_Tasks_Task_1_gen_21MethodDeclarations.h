#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1504;
// System.Threading.Tasks.Task
struct Task_t1157;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int64>>
struct Action_1_t8212;
// System.AggregateException
struct AggregateException_t1287;

// System.Void System.Threading.Tasks.Task`1<System.Int64>::.ctor()
extern "C" void Task_1__ctor_m58643_gshared (Task_1_t1504 * __this, const MethodInfo* method);
#define Task_1__ctor_m58643(__this, method) (( void (*) (Task_1_t1504 *, const MethodInfo*))Task_1__ctor_m58643_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int64>::get_Result()
extern "C" int64_t Task_1_get_Result_m58644_gshared (Task_1_t1504 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58644(__this, method) (( int64_t (*) (Task_1_t1504 *, const MethodInfo*))Task_1_get_Result_m58644_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1157 * Task_1_ContinueWith_m58645_gshared (Task_1_t1504 * __this, Action_1_t8212 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58645(__this, ___continuation, method) (( Task_t1157 * (*) (Task_1_t1504 *, Action_1_t8212 *, const MethodInfo*))Task_1_ContinueWith_m58645_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int64>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58646_gshared (Task_1_t1504 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58646(__this, method) (( void (*) (Task_1_t1504 *, const MethodInfo*))Task_1_RunContinuations_m58646_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58647_gshared (Task_1_t1504 * __this, int64_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58647(__this, ___result, method) (( bool (*) (Task_1_t1504 *, int64_t, const MethodInfo*))Task_1_TrySetResult_m58647_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58648_gshared (Task_1_t1504 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58648(__this, method) (( bool (*) (Task_1_t1504 *, const MethodInfo*))Task_1_TrySetCanceled_m58648_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58649_gshared (Task_1_t1504 * __this, AggregateException_t1287 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58649(__this, ___exception, method) (( bool (*) (Task_1_t1504 *, AggregateException_t1287 *, const MethodInfo*))Task_1_TrySetException_m58649_gshared)(__this, ___exception, method)
