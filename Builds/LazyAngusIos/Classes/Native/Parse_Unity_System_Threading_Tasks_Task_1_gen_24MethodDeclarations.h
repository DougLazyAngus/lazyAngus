#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1558;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<System.Double>>
struct Action_1_t8308;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<System.Double>::.ctor()
extern "C" void Task_1__ctor_m59447_gshared (Task_1_t1558 * __this, const MethodInfo* method);
#define Task_1__ctor_m59447(__this, method) (( void (*) (Task_1_t1558 *, const MethodInfo*))Task_1__ctor_m59447_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Double>::get_Result()
extern "C" double Task_1_get_Result_m59448_gshared (Task_1_t1558 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59448(__this, method) (( double (*) (Task_1_t1558 *, const MethodInfo*))Task_1_get_Result_m59448_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Double>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1210 * Task_1_ContinueWith_m59449_gshared (Task_1_t1558 * __this, Action_1_t8308 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59449(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t1558 *, Action_1_t8308 *, const MethodInfo*))Task_1_ContinueWith_m59449_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Double>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59450_gshared (Task_1_t1558 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59450(__this, method) (( void (*) (Task_1_t1558 *, const MethodInfo*))Task_1_RunContinuations_m59450_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59451_gshared (Task_1_t1558 * __this, double ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59451(__this, ___result, method) (( bool (*) (Task_1_t1558 *, double, const MethodInfo*))Task_1_TrySetResult_m59451_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59452_gshared (Task_1_t1558 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59452(__this, method) (( bool (*) (Task_1_t1558 *, const MethodInfo*))Task_1_TrySetCanceled_m59452_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59453_gshared (Task_1_t1558 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59453(__this, ___exception, method) (( bool (*) (Task_1_t1558 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m59453_gshared)(__this, ___exception, method)
