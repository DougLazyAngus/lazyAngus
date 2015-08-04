#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t1508;
// System.Threading.Tasks.Task
struct Task_t1157;
// System.Action`1<System.Threading.Tasks.Task`1<System.Single>>
struct Action_1_t8248;
// System.AggregateException
struct AggregateException_t1287;

// System.Void System.Threading.Tasks.Task`1<System.Single>::.ctor()
extern "C" void Task_1__ctor_m58824_gshared (Task_1_t1508 * __this, const MethodInfo* method);
#define Task_1__ctor_m58824(__this, method) (( void (*) (Task_1_t1508 *, const MethodInfo*))Task_1__ctor_m58824_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Single>::get_Result()
extern "C" float Task_1_get_Result_m58825_gshared (Task_1_t1508 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58825(__this, method) (( float (*) (Task_1_t1508 *, const MethodInfo*))Task_1_get_Result_m58825_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Single>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1157 * Task_1_ContinueWith_m58826_gshared (Task_1_t1508 * __this, Action_1_t8248 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58826(__this, ___continuation, method) (( Task_t1157 * (*) (Task_1_t1508 *, Action_1_t8248 *, const MethodInfo*))Task_1_ContinueWith_m58826_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Single>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58827_gshared (Task_1_t1508 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58827(__this, method) (( void (*) (Task_1_t1508 *, const MethodInfo*))Task_1_RunContinuations_m58827_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58828_gshared (Task_1_t1508 * __this, float ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58828(__this, ___result, method) (( bool (*) (Task_1_t1508 *, float, const MethodInfo*))Task_1_TrySetResult_m58828_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58829_gshared (Task_1_t1508 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58829(__this, method) (( bool (*) (Task_1_t1508 *, const MethodInfo*))Task_1_TrySetCanceled_m58829_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58830_gshared (Task_1_t1508 * __this, AggregateException_t1287 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58830(__this, ___exception, method) (( bool (*) (Task_1_t1508 *, AggregateException_t1287 *, const MethodInfo*))Task_1_TrySetException_m58830_gshared)(__this, ___exception, method)
