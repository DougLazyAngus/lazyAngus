#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1387;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int32>>
struct Action_1_t6526;
// System.AggregateException
struct AggregateException_t1355;

// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor()
extern "C" void Task_1__ctor_m35295_gshared (Task_1_t1387 * __this, const MethodInfo* method);
#define Task_1__ctor_m35295(__this, method) (( void (*) (Task_1_t1387 *, const MethodInfo*))Task_1__ctor_m35295_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int32>::get_Result()
extern "C" int32_t Task_1_get_Result_m7442_gshared (Task_1_t1387 * __this, const MethodInfo* method);
#define Task_1_get_Result_m7442(__this, method) (( int32_t (*) (Task_1_t1387 *, const MethodInfo*))Task_1_get_Result_m7442_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1227 * Task_1_ContinueWith_m35296_gshared (Task_1_t1387 * __this, Action_1_t6526 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m35296(__this, ___continuation, method) (( Task_t1227 * (*) (Task_1_t1387 *, Action_1_t6526 *, const MethodInfo*))Task_1_ContinueWith_m35296_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int32>::RunContinuations()
extern "C" void Task_1_RunContinuations_m35297_gshared (Task_1_t1387 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m35297(__this, method) (( void (*) (Task_1_t1387 *, const MethodInfo*))Task_1_RunContinuations_m35297_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m35298_gshared (Task_1_t1387 * __this, int32_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m35298(__this, ___result, method) (( bool (*) (Task_1_t1387 *, int32_t, const MethodInfo*))Task_1_TrySetResult_m35298_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m35299_gshared (Task_1_t1387 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m35299(__this, method) (( bool (*) (Task_1_t1387 *, const MethodInfo*))Task_1_TrySetCanceled_m35299_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m35300_gshared (Task_1_t1387 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m35300(__this, ___exception, method) (( bool (*) (Task_1_t1387 *, AggregateException_t1355 *, const MethodInfo*))Task_1_TrySetException_m35300_gshared)(__this, ___exception, method)
