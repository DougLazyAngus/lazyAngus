#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1573;
// System.Threading.Tasks.Task
struct Task_t1228;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int64>>
struct Action_1_t8856;
// System.AggregateException
struct AggregateException_t1356;

// System.Void System.Threading.Tasks.Task`1<System.Int64>::.ctor()
extern "C" void Task_1__ctor_m64055_gshared (Task_1_t1573 * __this, const MethodInfo* method);
#define Task_1__ctor_m64055(__this, method) (( void (*) (Task_1_t1573 *, const MethodInfo*))Task_1__ctor_m64055_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int64>::get_Result()
extern "C" int64_t Task_1_get_Result_m64056_gshared (Task_1_t1573 * __this, const MethodInfo* method);
#define Task_1_get_Result_m64056(__this, method) (( int64_t (*) (Task_1_t1573 *, const MethodInfo*))Task_1_get_Result_m64056_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1228 * Task_1_ContinueWith_m64057_gshared (Task_1_t1573 * __this, Action_1_t8856 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m64057(__this, ___continuation, method) (( Task_t1228 * (*) (Task_1_t1573 *, Action_1_t8856 *, const MethodInfo*))Task_1_ContinueWith_m64057_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int64>::RunContinuations()
extern "C" void Task_1_RunContinuations_m64058_gshared (Task_1_t1573 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m64058(__this, method) (( void (*) (Task_1_t1573 *, const MethodInfo*))Task_1_RunContinuations_m64058_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m64059_gshared (Task_1_t1573 * __this, int64_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m64059(__this, ___result, method) (( bool (*) (Task_1_t1573 *, int64_t, const MethodInfo*))Task_1_TrySetResult_m64059_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m64060_gshared (Task_1_t1573 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m64060(__this, method) (( bool (*) (Task_1_t1573 *, const MethodInfo*))Task_1_TrySetCanceled_m64060_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m64061_gshared (Task_1_t1573 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m64061(__this, ___exception, method) (( bool (*) (Task_1_t1573 *, AggregateException_t1356 *, const MethodInfo*))Task_1_TrySetException_m64061_gshared)(__this, ___exception, method)
