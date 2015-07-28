#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t1500;
// System.Threading.Tasks.Task
struct Task_t1149;
// System.Action`1<System.Threading.Tasks.Task`1<System.Single>>
struct Action_1_t8239;
// System.AggregateException
struct AggregateException_t1279;

// System.Void System.Threading.Tasks.Task`1<System.Single>::.ctor()
extern "C" void Task_1__ctor_m58761_gshared (Task_1_t1500 * __this, const MethodInfo* method);
#define Task_1__ctor_m58761(__this, method) (( void (*) (Task_1_t1500 *, const MethodInfo*))Task_1__ctor_m58761_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Single>::get_Result()
extern "C" float Task_1_get_Result_m58762_gshared (Task_1_t1500 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58762(__this, method) (( float (*) (Task_1_t1500 *, const MethodInfo*))Task_1_get_Result_m58762_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Single>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1149 * Task_1_ContinueWith_m58763_gshared (Task_1_t1500 * __this, Action_1_t8239 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58763(__this, ___continuation, method) (( Task_t1149 * (*) (Task_1_t1500 *, Action_1_t8239 *, const MethodInfo*))Task_1_ContinueWith_m58763_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Single>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58764_gshared (Task_1_t1500 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58764(__this, method) (( void (*) (Task_1_t1500 *, const MethodInfo*))Task_1_RunContinuations_m58764_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58765_gshared (Task_1_t1500 * __this, float ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58765(__this, ___result, method) (( bool (*) (Task_1_t1500 *, float, const MethodInfo*))Task_1_TrySetResult_m58765_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58766_gshared (Task_1_t1500 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58766(__this, method) (( bool (*) (Task_1_t1500 *, const MethodInfo*))Task_1_TrySetCanceled_m58766_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58767_gshared (Task_1_t1500 * __this, AggregateException_t1279 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58767(__this, ___exception, method) (( bool (*) (Task_1_t1500 *, AggregateException_t1279 *, const MethodInfo*))Task_1_TrySetException_m58767_gshared)(__this, ___exception, method)
