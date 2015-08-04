#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t1505;
// System.Threading.Tasks.Task
struct Task_t1157;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt64>>
struct Action_1_t8224;
// System.AggregateException
struct AggregateException_t1287;

// System.Void System.Threading.Tasks.Task`1<System.UInt64>::.ctor()
extern "C" void Task_1__ctor_m58701_gshared (Task_1_t1505 * __this, const MethodInfo* method);
#define Task_1__ctor_m58701(__this, method) (( void (*) (Task_1_t1505 *, const MethodInfo*))Task_1__ctor_m58701_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt64>::get_Result()
extern "C" uint64_t Task_1_get_Result_m58702_gshared (Task_1_t1505 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58702(__this, method) (( uint64_t (*) (Task_1_t1505 *, const MethodInfo*))Task_1_get_Result_m58702_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1157 * Task_1_ContinueWith_m58703_gshared (Task_1_t1505 * __this, Action_1_t8224 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58703(__this, ___continuation, method) (( Task_t1157 * (*) (Task_1_t1505 *, Action_1_t8224 *, const MethodInfo*))Task_1_ContinueWith_m58703_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt64>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58704_gshared (Task_1_t1505 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58704(__this, method) (( void (*) (Task_1_t1505 *, const MethodInfo*))Task_1_RunContinuations_m58704_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58705_gshared (Task_1_t1505 * __this, uint64_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58705(__this, ___result, method) (( bool (*) (Task_1_t1505 *, uint64_t, const MethodInfo*))Task_1_TrySetResult_m58705_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58706_gshared (Task_1_t1505 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58706(__this, method) (( bool (*) (Task_1_t1505 *, const MethodInfo*))Task_1_TrySetCanceled_m58706_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58707_gshared (Task_1_t1505 * __this, AggregateException_t1287 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58707(__this, ___exception, method) (( bool (*) (Task_1_t1505 *, AggregateException_t1287 *, const MethodInfo*))Task_1_TrySetException_m58707_gshared)(__this, ___exception, method)
