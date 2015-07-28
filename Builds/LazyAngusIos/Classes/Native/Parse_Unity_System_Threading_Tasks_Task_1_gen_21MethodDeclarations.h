#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1495;
// System.Threading.Tasks.Task
struct Task_t1148;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int64>>
struct Action_1_t8202;
// System.AggregateException
struct AggregateException_t1278;

// System.Void System.Threading.Tasks.Task`1<System.Int64>::.ctor()
extern "C" void Task_1__ctor_m58580_gshared (Task_1_t1495 * __this, const MethodInfo* method);
#define Task_1__ctor_m58580(__this, method) (( void (*) (Task_1_t1495 *, const MethodInfo*))Task_1__ctor_m58580_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int64>::get_Result()
extern "C" int64_t Task_1_get_Result_m58581_gshared (Task_1_t1495 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58581(__this, method) (( int64_t (*) (Task_1_t1495 *, const MethodInfo*))Task_1_get_Result_m58581_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1148 * Task_1_ContinueWith_m58582_gshared (Task_1_t1495 * __this, Action_1_t8202 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58582(__this, ___continuation, method) (( Task_t1148 * (*) (Task_1_t1495 *, Action_1_t8202 *, const MethodInfo*))Task_1_ContinueWith_m58582_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int64>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58583_gshared (Task_1_t1495 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58583(__this, method) (( void (*) (Task_1_t1495 *, const MethodInfo*))Task_1_RunContinuations_m58583_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58584_gshared (Task_1_t1495 * __this, int64_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58584(__this, ___result, method) (( bool (*) (Task_1_t1495 *, int64_t, const MethodInfo*))Task_1_TrySetResult_m58584_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58585_gshared (Task_1_t1495 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58585(__this, method) (( bool (*) (Task_1_t1495 *, const MethodInfo*))Task_1_TrySetCanceled_m58585_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58586_gshared (Task_1_t1495 * __this, AggregateException_t1278 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58586(__this, ___exception, method) (( bool (*) (Task_1_t1495 *, AggregateException_t1278 *, const MethodInfo*))Task_1_TrySetException_m58586_gshared)(__this, ___exception, method)
