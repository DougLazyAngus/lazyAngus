#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1505;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.Action`1<System.Threading.Tasks.Task`1<System.Double>>
struct Action_1_t8234;
// System.AggregateException
struct AggregateException_t1285;

// System.Void System.Threading.Tasks.Task`1<System.Double>::.ctor()
extern "C" void Task_1__ctor_m58750_gshared (Task_1_t1505 * __this, const MethodInfo* method);
#define Task_1__ctor_m58750(__this, method) (( void (*) (Task_1_t1505 *, const MethodInfo*))Task_1__ctor_m58750_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Double>::get_Result()
extern "C" double Task_1_get_Result_m58751_gshared (Task_1_t1505 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58751(__this, method) (( double (*) (Task_1_t1505 *, const MethodInfo*))Task_1_get_Result_m58751_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Double>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1155 * Task_1_ContinueWith_m58752_gshared (Task_1_t1505 * __this, Action_1_t8234 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58752(__this, ___continuation, method) (( Task_t1155 * (*) (Task_1_t1505 *, Action_1_t8234 *, const MethodInfo*))Task_1_ContinueWith_m58752_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Double>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58753_gshared (Task_1_t1505 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58753(__this, method) (( void (*) (Task_1_t1505 *, const MethodInfo*))Task_1_RunContinuations_m58753_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58754_gshared (Task_1_t1505 * __this, double ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58754(__this, ___result, method) (( bool (*) (Task_1_t1505 *, double, const MethodInfo*))Task_1_TrySetResult_m58754_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58755_gshared (Task_1_t1505 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58755(__this, method) (( bool (*) (Task_1_t1505 *, const MethodInfo*))Task_1_TrySetCanceled_m58755_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58756_gshared (Task_1_t1505 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58756(__this, ___exception, method) (( bool (*) (Task_1_t1505 *, AggregateException_t1285 *, const MethodInfo*))Task_1_TrySetException_m58756_gshared)(__this, ___exception, method)
