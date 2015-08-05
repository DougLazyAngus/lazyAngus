#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t1509;
// System.Threading.Tasks.Task
struct Task_t1158;
// System.Action`1<System.Threading.Tasks.Task`1<System.Single>>
struct Action_1_t8249;
// System.AggregateException
struct AggregateException_t1288;

// System.Void System.Threading.Tasks.Task`1<System.Single>::.ctor()
extern "C" void Task_1__ctor_m58831_gshared (Task_1_t1509 * __this, const MethodInfo* method);
#define Task_1__ctor_m58831(__this, method) (( void (*) (Task_1_t1509 *, const MethodInfo*))Task_1__ctor_m58831_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Single>::get_Result()
extern "C" float Task_1_get_Result_m58832_gshared (Task_1_t1509 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58832(__this, method) (( float (*) (Task_1_t1509 *, const MethodInfo*))Task_1_get_Result_m58832_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Single>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1158 * Task_1_ContinueWith_m58833_gshared (Task_1_t1509 * __this, Action_1_t8249 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58833(__this, ___continuation, method) (( Task_t1158 * (*) (Task_1_t1509 *, Action_1_t8249 *, const MethodInfo*))Task_1_ContinueWith_m58833_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Single>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58834_gshared (Task_1_t1509 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58834(__this, method) (( void (*) (Task_1_t1509 *, const MethodInfo*))Task_1_RunContinuations_m58834_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58835_gshared (Task_1_t1509 * __this, float ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58835(__this, ___result, method) (( bool (*) (Task_1_t1509 *, float, const MethodInfo*))Task_1_TrySetResult_m58835_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58836_gshared (Task_1_t1509 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58836(__this, method) (( bool (*) (Task_1_t1509 *, const MethodInfo*))Task_1_TrySetCanceled_m58836_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58837_gshared (Task_1_t1509 * __this, AggregateException_t1288 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58837(__this, ___exception, method) (( bool (*) (Task_1_t1509 *, AggregateException_t1288 *, const MethodInfo*))Task_1_TrySetException_m58837_gshared)(__this, ___exception, method)
