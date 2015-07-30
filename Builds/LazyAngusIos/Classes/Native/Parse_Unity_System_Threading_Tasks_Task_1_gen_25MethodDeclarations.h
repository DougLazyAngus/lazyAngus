#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t1506;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.Action`1<System.Threading.Tasks.Task`1<System.Single>>
struct Action_1_t8246;
// System.AggregateException
struct AggregateException_t1285;

// System.Void System.Threading.Tasks.Task`1<System.Single>::.ctor()
extern "C" void Task_1__ctor_m58808_gshared (Task_1_t1506 * __this, const MethodInfo* method);
#define Task_1__ctor_m58808(__this, method) (( void (*) (Task_1_t1506 *, const MethodInfo*))Task_1__ctor_m58808_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Single>::get_Result()
extern "C" float Task_1_get_Result_m58809_gshared (Task_1_t1506 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58809(__this, method) (( float (*) (Task_1_t1506 *, const MethodInfo*))Task_1_get_Result_m58809_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Single>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1155 * Task_1_ContinueWith_m58810_gshared (Task_1_t1506 * __this, Action_1_t8246 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58810(__this, ___continuation, method) (( Task_t1155 * (*) (Task_1_t1506 *, Action_1_t8246 *, const MethodInfo*))Task_1_ContinueWith_m58810_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Single>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58811_gshared (Task_1_t1506 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58811(__this, method) (( void (*) (Task_1_t1506 *, const MethodInfo*))Task_1_RunContinuations_m58811_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58812_gshared (Task_1_t1506 * __this, float ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58812(__this, ___result, method) (( bool (*) (Task_1_t1506 *, float, const MethodInfo*))Task_1_TrySetResult_m58812_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58813_gshared (Task_1_t1506 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58813(__this, method) (( bool (*) (Task_1_t1506 *, const MethodInfo*))Task_1_TrySetCanceled_m58813_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58814_gshared (Task_1_t1506 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58814(__this, ___exception, method) (( bool (*) (Task_1_t1506 *, AggregateException_t1285 *, const MethodInfo*))Task_1_TrySetException_m58814_gshared)(__this, ___exception, method)
