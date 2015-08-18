#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1555;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int64>>
struct Action_1_t8284;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<System.Int64>::.ctor()
extern "C" void Task_1__ctor_m59324_gshared (Task_1_t1555 * __this, const MethodInfo* method);
#define Task_1__ctor_m59324(__this, method) (( void (*) (Task_1_t1555 *, const MethodInfo*))Task_1__ctor_m59324_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int64>::get_Result()
extern "C" int64_t Task_1_get_Result_m59325_gshared (Task_1_t1555 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59325(__this, method) (( int64_t (*) (Task_1_t1555 *, const MethodInfo*))Task_1_get_Result_m59325_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int64>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1210 * Task_1_ContinueWith_m59326_gshared (Task_1_t1555 * __this, Action_1_t8284 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59326(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t1555 *, Action_1_t8284 *, const MethodInfo*))Task_1_ContinueWith_m59326_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int64>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59327_gshared (Task_1_t1555 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59327(__this, method) (( void (*) (Task_1_t1555 *, const MethodInfo*))Task_1_RunContinuations_m59327_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59328_gshared (Task_1_t1555 * __this, int64_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59328(__this, ___result, method) (( bool (*) (Task_1_t1555 *, int64_t, const MethodInfo*))Task_1_TrySetResult_m59328_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59329_gshared (Task_1_t1555 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59329(__this, method) (( bool (*) (Task_1_t1555 *, const MethodInfo*))Task_1_TrySetCanceled_m59329_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int64>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59330_gshared (Task_1_t1555 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59330(__this, ___exception, method) (( bool (*) (Task_1_t1555 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m59330_gshared)(__this, ___exception, method)
