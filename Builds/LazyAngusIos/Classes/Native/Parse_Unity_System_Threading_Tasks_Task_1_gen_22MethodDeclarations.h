#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t1577;
// System.Threading.Tasks.Task
struct Task_t1231;
// System.Action`1<System.Threading.Tasks.Task`1<System.UInt64>>
struct Action_1_t8873;
// System.AggregateException
struct AggregateException_t1359;

// System.Void System.Threading.Tasks.Task`1<System.UInt64>::.ctor()
extern "C" void Task_1__ctor_m64125_gshared (Task_1_t1577 * __this, const MethodInfo* method);
#define Task_1__ctor_m64125(__this, method) (( void (*) (Task_1_t1577 *, const MethodInfo*))Task_1__ctor_m64125_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.UInt64>::get_Result()
extern "C" uint64_t Task_1_get_Result_m64126_gshared (Task_1_t1577 * __this, const MethodInfo* method);
#define Task_1_get_Result_m64126(__this, method) (( uint64_t (*) (Task_1_t1577 *, const MethodInfo*))Task_1_get_Result_m64126_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.UInt64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1231 * Task_1_ContinueWith_m64127_gshared (Task_1_t1577 * __this, Action_1_t8873 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m64127(__this, ___continuation, method) (( Task_t1231 * (*) (Task_1_t1577 *, Action_1_t8873 *, const MethodInfo*))Task_1_ContinueWith_m64127_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.UInt64>::RunContinuations()
extern "C" void Task_1_RunContinuations_m64128_gshared (Task_1_t1577 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m64128(__this, method) (( void (*) (Task_1_t1577 *, const MethodInfo*))Task_1_RunContinuations_m64128_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m64129_gshared (Task_1_t1577 * __this, uint64_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m64129(__this, ___result, method) (( bool (*) (Task_1_t1577 *, uint64_t, const MethodInfo*))Task_1_TrySetResult_m64129_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m64130_gshared (Task_1_t1577 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m64130(__this, method) (( bool (*) (Task_1_t1577 *, const MethodInfo*))Task_1_TrySetCanceled_m64130_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.UInt64>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m64131_gshared (Task_1_t1577 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m64131(__this, ___exception, method) (( bool (*) (Task_1_t1577 *, AggregateException_t1359 *, const MethodInfo*))Task_1_TrySetException_m64131_gshared)(__this, ___exception, method)
