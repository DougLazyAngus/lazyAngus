#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t1559;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<System.Single>>
struct Action_1_t8320;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<System.Single>::.ctor()
extern "C" void Task_1__ctor_m59508_gshared (Task_1_t1559 * __this, const MethodInfo* method);
#define Task_1__ctor_m59508(__this, method) (( void (*) (Task_1_t1559 *, const MethodInfo*))Task_1__ctor_m59508_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Single>::get_Result()
extern "C" float Task_1_get_Result_m59509_gshared (Task_1_t1559 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59509(__this, method) (( float (*) (Task_1_t1559 *, const MethodInfo*))Task_1_get_Result_m59509_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Single>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1210 * Task_1_ContinueWith_m59510_gshared (Task_1_t1559 * __this, Action_1_t8320 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59510(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t1559 *, Action_1_t8320 *, const MethodInfo*))Task_1_ContinueWith_m59510_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Single>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59511_gshared (Task_1_t1559 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59511(__this, method) (( void (*) (Task_1_t1559 *, const MethodInfo*))Task_1_RunContinuations_m59511_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59512_gshared (Task_1_t1559 * __this, float ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59512(__this, ___result, method) (( bool (*) (Task_1_t1559 *, float, const MethodInfo*))Task_1_TrySetResult_m59512_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59513_gshared (Task_1_t1559 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59513(__this, method) (( bool (*) (Task_1_t1559 *, const MethodInfo*))Task_1_TrySetCanceled_m59513_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59514_gshared (Task_1_t1559 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59514(__this, ___exception, method) (( bool (*) (Task_1_t1559 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m59514_gshared)(__this, ___exception, method)
