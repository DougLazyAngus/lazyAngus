#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t1560;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.Action`1<System.Threading.Tasks.Task`1<System.Single>>
struct Action_1_t8327;
// System.AggregateException
struct AggregateException_t1339;

// System.Void System.Threading.Tasks.Task`1<System.Single>::.ctor()
extern "C" void Task_1__ctor_m59629_gshared (Task_1_t1560 * __this, const MethodInfo* method);
#define Task_1__ctor_m59629(__this, method) (( void (*) (Task_1_t1560 *, const MethodInfo*))Task_1__ctor_m59629_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Single>::get_Result()
extern "C" float Task_1_get_Result_m59630_gshared (Task_1_t1560 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59630(__this, method) (( float (*) (Task_1_t1560 *, const MethodInfo*))Task_1_get_Result_m59630_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Single>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1211 * Task_1_ContinueWith_m59631_gshared (Task_1_t1560 * __this, Action_1_t8327 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59631(__this, ___continuation, method) (( Task_t1211 * (*) (Task_1_t1560 *, Action_1_t8327 *, const MethodInfo*))Task_1_ContinueWith_m59631_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Single>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59632_gshared (Task_1_t1560 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59632(__this, method) (( void (*) (Task_1_t1560 *, const MethodInfo*))Task_1_RunContinuations_m59632_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59633_gshared (Task_1_t1560 * __this, float ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59633(__this, ___result, method) (( bool (*) (Task_1_t1560 *, float, const MethodInfo*))Task_1_TrySetResult_m59633_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59634_gshared (Task_1_t1560 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59634(__this, method) (( bool (*) (Task_1_t1560 *, const MethodInfo*))Task_1_TrySetCanceled_m59634_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59635_gshared (Task_1_t1560 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59635(__this, ___exception, method) (( bool (*) (Task_1_t1560 *, AggregateException_t1339 *, const MethodInfo*))Task_1_TrySetException_m59635_gshared)(__this, ___exception, method)
