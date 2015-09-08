#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1388;
// System.Threading.Tasks.Task
struct Task_t1228;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int32>>
struct Action_1_t6527;
// System.AggregateException
struct AggregateException_t1356;

// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor()
extern "C" void Task_1__ctor_m35308_gshared (Task_1_t1388 * __this, const MethodInfo* method);
#define Task_1__ctor_m35308(__this, method) (( void (*) (Task_1_t1388 *, const MethodInfo*))Task_1__ctor_m35308_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int32>::get_Result()
extern "C" int32_t Task_1_get_Result_m7455_gshared (Task_1_t1388 * __this, const MethodInfo* method);
#define Task_1_get_Result_m7455(__this, method) (( int32_t (*) (Task_1_t1388 *, const MethodInfo*))Task_1_get_Result_m7455_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1228 * Task_1_ContinueWith_m35309_gshared (Task_1_t1388 * __this, Action_1_t6527 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m35309(__this, ___continuation, method) (( Task_t1228 * (*) (Task_1_t1388 *, Action_1_t6527 *, const MethodInfo*))Task_1_ContinueWith_m35309_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int32>::RunContinuations()
extern "C" void Task_1_RunContinuations_m35310_gshared (Task_1_t1388 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m35310(__this, method) (( void (*) (Task_1_t1388 *, const MethodInfo*))Task_1_RunContinuations_m35310_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m35311_gshared (Task_1_t1388 * __this, int32_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m35311(__this, ___result, method) (( bool (*) (Task_1_t1388 *, int32_t, const MethodInfo*))Task_1_TrySetResult_m35311_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m35312_gshared (Task_1_t1388 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m35312(__this, method) (( bool (*) (Task_1_t1388 *, const MethodInfo*))Task_1_TrySetCanceled_m35312_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m35313_gshared (Task_1_t1388 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m35313(__this, ___exception, method) (( bool (*) (Task_1_t1388 *, AggregateException_t1356 *, const MethodInfo*))Task_1_TrySetException_m35313_gshared)(__this, ___exception, method)
