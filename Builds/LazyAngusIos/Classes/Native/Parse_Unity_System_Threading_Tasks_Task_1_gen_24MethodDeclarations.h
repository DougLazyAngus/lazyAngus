#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1575;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Action`1<System.Threading.Tasks.Task`1<System.Double>>
struct Action_1_t8344;
// System.AggregateException
struct AggregateException_t1355;

// System.Void System.Threading.Tasks.Task`1<System.Double>::.ctor()
extern "C" void Task_1__ctor_m59903_gshared (Task_1_t1575 * __this, const MethodInfo* method);
#define Task_1__ctor_m59903(__this, method) (( void (*) (Task_1_t1575 *, const MethodInfo*))Task_1__ctor_m59903_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Double>::get_Result()
extern "C" double Task_1_get_Result_m59904_gshared (Task_1_t1575 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59904(__this, method) (( double (*) (Task_1_t1575 *, const MethodInfo*))Task_1_get_Result_m59904_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Double>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1227 * Task_1_ContinueWith_m59905_gshared (Task_1_t1575 * __this, Action_1_t8344 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59905(__this, ___continuation, method) (( Task_t1227 * (*) (Task_1_t1575 *, Action_1_t8344 *, const MethodInfo*))Task_1_ContinueWith_m59905_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Double>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59906_gshared (Task_1_t1575 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59906(__this, method) (( void (*) (Task_1_t1575 *, const MethodInfo*))Task_1_RunContinuations_m59906_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59907_gshared (Task_1_t1575 * __this, double ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59907(__this, ___result, method) (( bool (*) (Task_1_t1575 *, double, const MethodInfo*))Task_1_TrySetResult_m59907_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59908_gshared (Task_1_t1575 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59908(__this, method) (( bool (*) (Task_1_t1575 *, const MethodInfo*))Task_1_TrySetCanceled_m59908_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59909_gshared (Task_1_t1575 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59909(__this, ___exception, method) (( bool (*) (Task_1_t1575 *, AggregateException_t1355 *, const MethodInfo*))Task_1_TrySetException_m59909_gshared)(__this, ___exception, method)
