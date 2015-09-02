#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t1573;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt64>>
struct Action_1_t8332;
// System.AggregateException
struct AggregateException_t1355;

// System.Void System.Threading.Tasks.Task`1<System.UInt64>::.ctor()
extern "C" void Task_1__ctor_m59838_gshared (Task_1_t1573 * __this, const MethodInfo* method);
#define Task_1__ctor_m59838(__this, method) (( void (*) (Task_1_t1573 *, const MethodInfo*))Task_1__ctor_m59838_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt64>::get_Result()
extern "C" uint64_t Task_1_get_Result_m59839_gshared (Task_1_t1573 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59839(__this, method) (( uint64_t (*) (Task_1_t1573 *, const MethodInfo*))Task_1_get_Result_m59839_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1227 * Task_1_ContinueWith_m59840_gshared (Task_1_t1573 * __this, Action_1_t8332 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59840(__this, ___continuation, method) (( Task_t1227 * (*) (Task_1_t1573 *, Action_1_t8332 *, const MethodInfo*))Task_1_ContinueWith_m59840_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt64>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59841_gshared (Task_1_t1573 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59841(__this, method) (( void (*) (Task_1_t1573 *, const MethodInfo*))Task_1_RunContinuations_m59841_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59842_gshared (Task_1_t1573 * __this, uint64_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59842(__this, ___result, method) (( bool (*) (Task_1_t1573 *, uint64_t, const MethodInfo*))Task_1_TrySetResult_m59842_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59843_gshared (Task_1_t1573 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59843(__this, method) (( bool (*) (Task_1_t1573 *, const MethodInfo*))Task_1_TrySetCanceled_m59843_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59844_gshared (Task_1_t1573 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59844(__this, ___exception, method) (( bool (*) (Task_1_t1573 *, AggregateException_t1355 *, const MethodInfo*))Task_1_TrySetException_m59844_gshared)(__this, ___exception, method)
