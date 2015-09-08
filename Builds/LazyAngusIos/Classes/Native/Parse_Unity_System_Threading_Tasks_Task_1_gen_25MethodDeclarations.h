#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t1580;
// System.Threading.Tasks.Task
struct Task_t1231;
// System.Action`1<System.Threading.Tasks.Task`1<System.Single>>
struct Action_1_t8897;
// System.AggregateException
struct AggregateException_t1359;

// System.Void System.Threading.Tasks.Task`1<System.Single>::.ctor()
extern "C" void Task_1__ctor_m64248_gshared (Task_1_t1580 * __this, const MethodInfo* method);
#define Task_1__ctor_m64248(__this, method) (( void (*) (Task_1_t1580 *, const MethodInfo*))Task_1__ctor_m64248_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Single>::get_Result()
extern "C" float Task_1_get_Result_m64249_gshared (Task_1_t1580 * __this, const MethodInfo* method);
#define Task_1_get_Result_m64249(__this, method) (( float (*) (Task_1_t1580 *, const MethodInfo*))Task_1_get_Result_m64249_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Single>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1231 * Task_1_ContinueWith_m64250_gshared (Task_1_t1580 * __this, Action_1_t8897 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m64250(__this, ___continuation, method) (( Task_t1231 * (*) (Task_1_t1580 *, Action_1_t8897 *, const MethodInfo*))Task_1_ContinueWith_m64250_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Single>::RunContinuations()
extern "C" void Task_1_RunContinuations_m64251_gshared (Task_1_t1580 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m64251(__this, method) (( void (*) (Task_1_t1580 *, const MethodInfo*))Task_1_RunContinuations_m64251_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m64252_gshared (Task_1_t1580 * __this, float ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m64252(__this, ___result, method) (( bool (*) (Task_1_t1580 *, float, const MethodInfo*))Task_1_TrySetResult_m64252_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m64253_gshared (Task_1_t1580 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m64253(__this, method) (( bool (*) (Task_1_t1580 *, const MethodInfo*))Task_1_TrySetCanceled_m64253_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Single>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m64254_gshared (Task_1_t1580 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m64254(__this, ___exception, method) (( bool (*) (Task_1_t1580 *, AggregateException_t1359 *, const MethodInfo*))Task_1_TrySetException_m64254_gshared)(__this, ___exception, method)
