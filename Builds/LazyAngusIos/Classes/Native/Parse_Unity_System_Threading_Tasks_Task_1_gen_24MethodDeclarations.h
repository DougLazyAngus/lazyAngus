#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1508;
// System.Threading.Tasks.Task
struct Task_t1158;
// System.Action`1<System.Threading.Tasks.Task`1<System.Double>>
struct Action_1_t8237;
// System.AggregateException
struct AggregateException_t1288;

// System.Void System.Threading.Tasks.Task`1<System.Double>::.ctor()
extern "C" void Task_1__ctor_m58773_gshared (Task_1_t1508 * __this, const MethodInfo* method);
#define Task_1__ctor_m58773(__this, method) (( void (*) (Task_1_t1508 *, const MethodInfo*))Task_1__ctor_m58773_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Double>::get_Result()
extern "C" double Task_1_get_Result_m58774_gshared (Task_1_t1508 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58774(__this, method) (( double (*) (Task_1_t1508 *, const MethodInfo*))Task_1_get_Result_m58774_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Double>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1158 * Task_1_ContinueWith_m58775_gshared (Task_1_t1508 * __this, Action_1_t8237 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58775(__this, ___continuation, method) (( Task_t1158 * (*) (Task_1_t1508 *, Action_1_t8237 *, const MethodInfo*))Task_1_ContinueWith_m58775_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Double>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58776_gshared (Task_1_t1508 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58776(__this, method) (( void (*) (Task_1_t1508 *, const MethodInfo*))Task_1_RunContinuations_m58776_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58777_gshared (Task_1_t1508 * __this, double ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58777(__this, ___result, method) (( bool (*) (Task_1_t1508 *, double, const MethodInfo*))Task_1_TrySetResult_m58777_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58778_gshared (Task_1_t1508 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58778(__this, method) (( bool (*) (Task_1_t1508 *, const MethodInfo*))Task_1_TrySetCanceled_m58778_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Double>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58779_gshared (Task_1_t1508 * __this, AggregateException_t1288 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58779(__this, ___exception, method) (( bool (*) (Task_1_t1508 *, AggregateException_t1288 *, const MethodInfo*))Task_1_TrySetException_m58779_gshared)(__this, ___exception, method)
