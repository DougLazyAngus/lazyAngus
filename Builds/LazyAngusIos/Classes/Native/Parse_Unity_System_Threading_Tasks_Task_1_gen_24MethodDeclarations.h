#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1498;
// System.Threading.Tasks.Task
struct Task_t1148;
// System.Action`1<System.Threading.Tasks.Task`1<System.Double>>
struct Action_1_t8226;
// System.AggregateException
struct AggregateException_t1278;

// System.Void System.Threading.Tasks.Task`1<System.Double>::.ctor()
extern "C" void Task_1__ctor_m58703_gshared (Task_1_t1498 * __this, const MethodInfo* method);
#define Task_1__ctor_m58703(__this, method) (( void (*) (Task_1_t1498 *, const MethodInfo*))Task_1__ctor_m58703_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Double>::get_Result()
extern "C" double Task_1_get_Result_m58704_gshared (Task_1_t1498 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58704(__this, method) (( double (*) (Task_1_t1498 *, const MethodInfo*))Task_1_get_Result_m58704_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Double>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1148 * Task_1_ContinueWith_m58705_gshared (Task_1_t1498 * __this, Action_1_t8226 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58705(__this, ___continuation, method) (( Task_t1148 * (*) (Task_1_t1498 *, Action_1_t8226 *, const MethodInfo*))Task_1_ContinueWith_m58705_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Double>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58706_gshared (Task_1_t1498 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58706(__this, method) (( void (*) (Task_1_t1498 *, const MethodInfo*))Task_1_RunContinuations_m58706_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58707_gshared (Task_1_t1498 * __this, double ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58707(__this, ___result, method) (( bool (*) (Task_1_t1498 *, double, const MethodInfo*))Task_1_TrySetResult_m58707_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58708_gshared (Task_1_t1498 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58708(__this, method) (( bool (*) (Task_1_t1498 *, const MethodInfo*))Task_1_TrySetCanceled_m58708_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58709_gshared (Task_1_t1498 * __this, AggregateException_t1278 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58709(__this, ___exception, method) (( bool (*) (Task_1_t1498 *, AggregateException_t1278 *, const MethodInfo*))Task_1_TrySetException_m58709_gshared)(__this, ___exception, method)
