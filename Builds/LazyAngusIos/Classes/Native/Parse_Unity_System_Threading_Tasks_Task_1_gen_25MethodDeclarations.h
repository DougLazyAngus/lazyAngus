#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t1510;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Action`1<System.Threading.Tasks.Task`1<System.Single>>
struct Action_1_t8250;
// System.AggregateException
struct AggregateException_t1289;

// System.Void System.Threading.Tasks.Task`1<System.Single>::.ctor()
extern "C" void Task_1__ctor_m58836_gshared (Task_1_t1510 * __this, const MethodInfo* method);
#define Task_1__ctor_m58836(__this, method) (( void (*) (Task_1_t1510 *, const MethodInfo*))Task_1__ctor_m58836_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Single>::get_Result()
extern "C" float Task_1_get_Result_m58837_gshared (Task_1_t1510 * __this, const MethodInfo* method);
#define Task_1_get_Result_m58837(__this, method) (( float (*) (Task_1_t1510 *, const MethodInfo*))Task_1_get_Result_m58837_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Single>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1159 * Task_1_ContinueWith_m58838_gshared (Task_1_t1510 * __this, Action_1_t8250 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m58838(__this, ___continuation, method) (( Task_t1159 * (*) (Task_1_t1510 *, Action_1_t8250 *, const MethodInfo*))Task_1_ContinueWith_m58838_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Single>::RunContinuations()
extern "C" void Task_1_RunContinuations_m58839_gshared (Task_1_t1510 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m58839(__this, method) (( void (*) (Task_1_t1510 *, const MethodInfo*))Task_1_RunContinuations_m58839_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m58840_gshared (Task_1_t1510 * __this, float ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m58840(__this, ___result, method) (( bool (*) (Task_1_t1510 *, float, const MethodInfo*))Task_1_TrySetResult_m58840_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m58841_gshared (Task_1_t1510 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m58841(__this, method) (( bool (*) (Task_1_t1510 *, const MethodInfo*))Task_1_TrySetCanceled_m58841_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m58842_gshared (Task_1_t1510 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m58842(__this, ___exception, method) (( bool (*) (Task_1_t1510 *, AggregateException_t1289 *, const MethodInfo*))Task_1_TrySetException_m58842_gshared)(__this, ___exception, method)
