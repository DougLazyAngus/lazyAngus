#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1391;
// System.Threading.Tasks.Task
struct Task_t1231;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int32>>
struct Action_1_t6532;
// System.AggregateException
struct AggregateException_t1359;

// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor()
extern "C" void Task_1__ctor_m35320_gshared (Task_1_t1391 * __this, const MethodInfo* method);
#define Task_1__ctor_m35320(__this, method) (( void (*) (Task_1_t1391 *, const MethodInfo*))Task_1__ctor_m35320_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int32>::get_Result()
extern "C" int32_t Task_1_get_Result_m7455_gshared (Task_1_t1391 * __this, const MethodInfo* method);
#define Task_1_get_Result_m7455(__this, method) (( int32_t (*) (Task_1_t1391 *, const MethodInfo*))Task_1_get_Result_m7455_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1231 * Task_1_ContinueWith_m35321_gshared (Task_1_t1391 * __this, Action_1_t6532 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m35321(__this, ___continuation, method) (( Task_t1231 * (*) (Task_1_t1391 *, Action_1_t6532 *, const MethodInfo*))Task_1_ContinueWith_m35321_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int32>::RunContinuations()
extern "C" void Task_1_RunContinuations_m35322_gshared (Task_1_t1391 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m35322(__this, method) (( void (*) (Task_1_t1391 *, const MethodInfo*))Task_1_RunContinuations_m35322_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m35323_gshared (Task_1_t1391 * __this, int32_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m35323(__this, ___result, method) (( bool (*) (Task_1_t1391 *, int32_t, const MethodInfo*))Task_1_TrySetResult_m35323_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m35324_gshared (Task_1_t1391 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m35324(__this, method) (( bool (*) (Task_1_t1391 *, const MethodInfo*))Task_1_TrySetCanceled_m35324_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m35325_gshared (Task_1_t1391 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m35325(__this, ___exception, method) (( bool (*) (Task_1_t1391 *, AggregateException_t1359 *, const MethodInfo*))Task_1_TrySetException_m35325_gshared)(__this, ___exception, method)
