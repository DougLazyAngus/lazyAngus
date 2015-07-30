#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1502;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int64>>
struct Action_1_t8210;
// System.AggregateException
struct AggregateException_t1285;

// System.Void System.Threading.Tasks.Task`1<System.Int64>::.ctor()
extern "C" void Task_1__ctor_m58627_gshared (Task_1_t1502 * __this, const MethodInfo* method);
#define Task_1__ctor_m58627(__this, method) (( void (*) (Task_1_t1502 *, const MethodInfo*))Task_1__ctor_m58627_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int64>::get_Result()
extern "C" int64_t Task_1_get_Result_m58628_gshared (Task_1_t1502 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58628(__this, method) (( int64_t (*) (Task_1_t1502 *, const MethodInfo*))Task_1_get_Result_m58628_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1155 * Task_1_ContinueWith_m58629_gshared (Task_1_t1502 * __this, Action_1_t8210 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58629(__this, ___continuation, method) (( Task_t1155 * (*) (Task_1_t1502 *, Action_1_t8210 *, const MethodInfo*))Task_1_ContinueWith_m58629_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int64>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58630_gshared (Task_1_t1502 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58630(__this, method) (( void (*) (Task_1_t1502 *, const MethodInfo*))Task_1_RunContinuations_m58630_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58631_gshared (Task_1_t1502 * __this, int64_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58631(__this, ___result, method) (( bool (*) (Task_1_t1502 *, int64_t, const MethodInfo*))Task_1_TrySetResult_m58631_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58632_gshared (Task_1_t1502 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58632(__this, method) (( bool (*) (Task_1_t1502 *, const MethodInfo*))Task_1_TrySetCanceled_m58632_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58633_gshared (Task_1_t1502 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58633(__this, ___exception, method) (( bool (*) (Task_1_t1502 *, AggregateException_t1285 *, const MethodInfo*))Task_1_TrySetException_m58633_gshared)(__this, ___exception, method)
