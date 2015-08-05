#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t1308;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>
struct Action_1_t2110;
// System.AggregateException
struct AggregateException_t1289;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m31066(__this, method) (( void (*) (Task_1_t1308 *, const MethodInfo*))Task_1__ctor_m29868_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::get_Result()
#define Task_1_get_Result_m7586(__this, method) (( Task_t1159 * (*) (Task_1_t1308 *, const MethodInfo*))Task_1_get_Result_m29869_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m7588(__this, ___continuation, method) (( Task_t1159 * (*) (Task_1_t1308 *, Action_1_t2110 *, const MethodInfo*))Task_1_ContinueWith_m29871_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::RunContinuations()
#define Task_1_RunContinuations_m31067(__this, method) (( void (*) (Task_1_t1308 *, const MethodInfo*))Task_1_RunContinuations_m29873_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::TrySetResult(T)
#define Task_1_TrySetResult_m31068(__this, ___result, method) (( bool (*) (Task_1_t1308 *, Task_t1159 *, const MethodInfo*))Task_1_TrySetResult_m29875_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::TrySetCanceled()
#define Task_1_TrySetCanceled_m31069(__this, method) (( bool (*) (Task_1_t1308 *, const MethodInfo*))Task_1_TrySetCanceled_m29877_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m31070(__this, ___exception, method) (( bool (*) (Task_1_t1308 *, AggregateException_t1289 *, const MethodInfo*))Task_1_TrySetException_m29879_gshared)(__this, ___exception, method)
