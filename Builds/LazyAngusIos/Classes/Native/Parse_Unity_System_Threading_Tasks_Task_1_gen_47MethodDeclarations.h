#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>
struct Task_1_t8247;
// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1509;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>>
struct Action_1_t8248;
// System.AggregateException
struct AggregateException_t1289;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m58825(__this, method) (( void (*) (Task_1_t8247 *, const MethodInfo*))Task_1__ctor_m29868_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>::get_Result()
#define Task_1_get_Result_m58826(__this, method) (( Task_1_t1509 * (*) (Task_1_t8247 *, const MethodInfo*))Task_1_get_Result_m29869_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m58827(__this, ___continuation, method) (( Task_t1159 * (*) (Task_1_t8247 *, Action_1_t8248 *, const MethodInfo*))Task_1_ContinueWith_m29871_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>::RunContinuations()
#define Task_1_RunContinuations_m58828(__this, method) (( void (*) (Task_1_t8247 *, const MethodInfo*))Task_1_RunContinuations_m29873_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>::TrySetResult(T)
#define Task_1_TrySetResult_m58829(__this, ___result, method) (( bool (*) (Task_1_t8247 *, Task_1_t1509 *, const MethodInfo*))Task_1_TrySetResult_m29875_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m58830(__this, method) (( bool (*) (Task_1_t8247 *, const MethodInfo*))Task_1_TrySetCanceled_m29877_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m58831(__this, ___exception, method) (( bool (*) (Task_1_t8247 *, AggregateException_t1289 *, const MethodInfo*))Task_1_TrySetException_m29879_gshared)(__this, ___exception, method)
