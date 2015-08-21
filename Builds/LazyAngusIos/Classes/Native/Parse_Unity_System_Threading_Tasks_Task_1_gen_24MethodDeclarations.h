#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1556;
// System.Threading.Tasks.Task
struct Task_t1208;
// System.Action`1<System.Threading.Tasks.Task`1<System.Double>>
struct Action_1_t8312;
// System.AggregateException
struct AggregateException_t1336;

// System.Void System.Threading.Tasks.Task`1<System.Double>::.ctor()
extern "C" void Task_1__ctor_m59538_gshared (Task_1_t1556 * __this, const MethodInfo* method);
#define Task_1__ctor_m59538(__this, method) (( void (*) (Task_1_t1556 *, const MethodInfo*))Task_1__ctor_m59538_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Double>::get_Result()
extern "C" double Task_1_get_Result_m59539_gshared (Task_1_t1556 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59539(__this, method) (( double (*) (Task_1_t1556 *, const MethodInfo*))Task_1_get_Result_m59539_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Double>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1208 * Task_1_ContinueWith_m59540_gshared (Task_1_t1556 * __this, Action_1_t8312 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59540(__this, ___continuation, method) (( Task_t1208 * (*) (Task_1_t1556 *, Action_1_t8312 *, const MethodInfo*))Task_1_ContinueWith_m59540_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Double>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59541_gshared (Task_1_t1556 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59541(__this, method) (( void (*) (Task_1_t1556 *, const MethodInfo*))Task_1_RunContinuations_m59541_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59542_gshared (Task_1_t1556 * __this, double ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59542(__this, ___result, method) (( bool (*) (Task_1_t1556 *, double, const MethodInfo*))Task_1_TrySetResult_m59542_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59543_gshared (Task_1_t1556 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59543(__this, method) (( bool (*) (Task_1_t1556 *, const MethodInfo*))Task_1_TrySetCanceled_m59543_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59544_gshared (Task_1_t1556 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59544(__this, ___exception, method) (( bool (*) (Task_1_t1556 *, AggregateException_t1336 *, const MethodInfo*))Task_1_TrySetException_m59544_gshared)(__this, ___exception, method)
