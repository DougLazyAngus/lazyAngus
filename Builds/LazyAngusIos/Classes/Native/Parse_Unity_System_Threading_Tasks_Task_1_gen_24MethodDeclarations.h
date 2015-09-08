#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1579;
// System.Threading.Tasks.Task
struct Task_t1231;
// System.Action`1<System.Threading.Tasks.Task`1<System.Double>>
struct Action_1_t8885;
// System.AggregateException
struct AggregateException_t1359;

// System.Void System.Threading.Tasks.Task`1<System.Double>::.ctor()
extern "C" void Task_1__ctor_m64190_gshared (Task_1_t1579 * __this, const MethodInfo* method);
#define Task_1__ctor_m64190(__this, method) (( void (*) (Task_1_t1579 *, const MethodInfo*))Task_1__ctor_m64190_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Double>::get_Result()
extern "C" double Task_1_get_Result_m64191_gshared (Task_1_t1579 * __this, const MethodInfo* method);
#define Task_1_get_Result_m64191(__this, method) (( double (*) (Task_1_t1579 *, const MethodInfo*))Task_1_get_Result_m64191_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Double>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1231 * Task_1_ContinueWith_m64192_gshared (Task_1_t1579 * __this, Action_1_t8885 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m64192(__this, ___continuation, method) (( Task_t1231 * (*) (Task_1_t1579 *, Action_1_t8885 *, const MethodInfo*))Task_1_ContinueWith_m64192_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Double>::RunContinuations()
extern "C" void Task_1_RunContinuations_m64193_gshared (Task_1_t1579 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m64193(__this, method) (( void (*) (Task_1_t1579 *, const MethodInfo*))Task_1_RunContinuations_m64193_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m64194_gshared (Task_1_t1579 * __this, double ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m64194(__this, ___result, method) (( bool (*) (Task_1_t1579 *, double, const MethodInfo*))Task_1_TrySetResult_m64194_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m64195_gshared (Task_1_t1579 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m64195(__this, method) (( bool (*) (Task_1_t1579 *, const MethodInfo*))Task_1_TrySetCanceled_m64195_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m64196_gshared (Task_1_t1579 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m64196(__this, ___exception, method) (( bool (*) (Task_1_t1579 *, AggregateException_t1359 *, const MethodInfo*))Task_1_TrySetException_m64196_gshared)(__this, ___exception, method)
