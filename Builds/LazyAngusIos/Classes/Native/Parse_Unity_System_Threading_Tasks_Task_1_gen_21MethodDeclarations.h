#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1556;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int64>>
struct Action_1_t8291;
// System.AggregateException
struct AggregateException_t1339;

// System.Void System.Threading.Tasks.Task`1<System.Int64>::.ctor()
extern "C" void Task_1__ctor_m59448_gshared (Task_1_t1556 * __this, const MethodInfo* method);
#define Task_1__ctor_m59448(__this, method) (( void (*) (Task_1_t1556 *, const MethodInfo*))Task_1__ctor_m59448_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int64>::get_Result()
extern "C" int64_t Task_1_get_Result_m59449_gshared (Task_1_t1556 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59449(__this, method) (( int64_t (*) (Task_1_t1556 *, const MethodInfo*))Task_1_get_Result_m59449_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1211 * Task_1_ContinueWith_m59450_gshared (Task_1_t1556 * __this, Action_1_t8291 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59450(__this, ___continuation, method) (( Task_t1211 * (*) (Task_1_t1556 *, Action_1_t8291 *, const MethodInfo*))Task_1_ContinueWith_m59450_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int64>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59451_gshared (Task_1_t1556 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59451(__this, method) (( void (*) (Task_1_t1556 *, const MethodInfo*))Task_1_RunContinuations_m59451_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59452_gshared (Task_1_t1556 * __this, int64_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59452(__this, ___result, method) (( bool (*) (Task_1_t1556 *, int64_t, const MethodInfo*))Task_1_TrySetResult_m59452_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59453_gshared (Task_1_t1556 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59453(__this, method) (( bool (*) (Task_1_t1556 *, const MethodInfo*))Task_1_TrySetCanceled_m59453_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59454_gshared (Task_1_t1556 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59454(__this, ___exception, method) (( bool (*) (Task_1_t1556 *, AggregateException_t1339 *, const MethodInfo*))Task_1_TrySetException_m59454_gshared)(__this, ___exception, method)
