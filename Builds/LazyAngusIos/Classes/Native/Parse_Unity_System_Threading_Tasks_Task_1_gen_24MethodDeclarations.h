#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1586;
// System.Threading.Tasks.Task
struct Task_t1238;
// System.Action`1<System.Threading.Tasks.Task`1<System.Double>>
struct Action_1_t8892;
// System.AggregateException
struct AggregateException_t1366;

// System.Void System.Threading.Tasks.Task`1<System.Double>::.ctor()
extern "C" void Task_1__ctor_m64247_gshared (Task_1_t1586 * __this, const MethodInfo* method);
#define Task_1__ctor_m64247(__this, method) (( void (*) (Task_1_t1586 *, const MethodInfo*))Task_1__ctor_m64247_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Double>::get_Result()
extern "C" double Task_1_get_Result_m64248_gshared (Task_1_t1586 * __this, const MethodInfo* method);
#define Task_1_get_Result_m64248(__this, method) (( double (*) (Task_1_t1586 *, const MethodInfo*))Task_1_get_Result_m64248_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Double>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1238 * Task_1_ContinueWith_m64249_gshared (Task_1_t1586 * __this, Action_1_t8892 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m64249(__this, ___continuation, method) (( Task_t1238 * (*) (Task_1_t1586 *, Action_1_t8892 *, const MethodInfo*))Task_1_ContinueWith_m64249_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Double>::RunContinuations()
extern "C" void Task_1_RunContinuations_m64250_gshared (Task_1_t1586 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m64250(__this, method) (( void (*) (Task_1_t1586 *, const MethodInfo*))Task_1_RunContinuations_m64250_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m64251_gshared (Task_1_t1586 * __this, double ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m64251(__this, ___result, method) (( bool (*) (Task_1_t1586 *, double, const MethodInfo*))Task_1_TrySetResult_m64251_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m64252_gshared (Task_1_t1586 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m64252(__this, method) (( bool (*) (Task_1_t1586 *, const MethodInfo*))Task_1_TrySetCanceled_m64252_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m64253_gshared (Task_1_t1586 * __this, AggregateException_t1366 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m64253(__this, ___exception, method) (( bool (*) (Task_1_t1586 *, AggregateException_t1366 *, const MethodInfo*))Task_1_TrySetException_m64253_gshared)(__this, ___exception, method)
