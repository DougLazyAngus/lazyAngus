#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t1557;
// System.Threading.Tasks.Task
struct Task_t1208;
// System.Action`1<System.Threading.Tasks.Task`1<System.Single>>
struct Action_1_t8324;
// System.AggregateException
struct AggregateException_t1336;

// System.Void System.Threading.Tasks.Task`1<System.Single>::.ctor()
extern "C" void Task_1__ctor_m59596_gshared (Task_1_t1557 * __this, const MethodInfo* method);
#define Task_1__ctor_m59596(__this, method) (( void (*) (Task_1_t1557 *, const MethodInfo*))Task_1__ctor_m59596_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Single>::get_Result()
extern "C" float Task_1_get_Result_m59597_gshared (Task_1_t1557 * __this, const MethodInfo* method);
#define Task_1_get_Result_m59597(__this, method) (( float (*) (Task_1_t1557 *, const MethodInfo*))Task_1_get_Result_m59597_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Single>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1208 * Task_1_ContinueWith_m59598_gshared (Task_1_t1557 * __this, Action_1_t8324 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m59598(__this, ___continuation, method) (( Task_t1208 * (*) (Task_1_t1557 *, Action_1_t8324 *, const MethodInfo*))Task_1_ContinueWith_m59598_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Single>::RunContinuations()
extern "C" void Task_1_RunContinuations_m59599_gshared (Task_1_t1557 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m59599(__this, method) (( void (*) (Task_1_t1557 *, const MethodInfo*))Task_1_RunContinuations_m59599_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m59600_gshared (Task_1_t1557 * __this, float ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m59600(__this, ___result, method) (( bool (*) (Task_1_t1557 *, float, const MethodInfo*))Task_1_TrySetResult_m59600_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m59601_gshared (Task_1_t1557 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m59601(__this, method) (( bool (*) (Task_1_t1557 *, const MethodInfo*))Task_1_TrySetCanceled_m59601_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m59602_gshared (Task_1_t1557 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m59602(__this, ___exception, method) (( bool (*) (Task_1_t1557 *, AggregateException_t1336 *, const MethodInfo*))Task_1_TrySetException_m59602_gshared)(__this, ___exception, method)
