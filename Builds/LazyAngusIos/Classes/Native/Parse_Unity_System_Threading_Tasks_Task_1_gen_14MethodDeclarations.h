#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Object>>
struct Task_1_t1422;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1344;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Object>>>
struct Action_1_t5961;
// System.AggregateException
struct AggregateException_t1289;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Object>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m30708(__this, method) (( void (*) (Task_1_t1422 *, const MethodInfo*))Task_1__ctor_m29868_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Object>>::get_Result()
#define Task_1_get_Result_m30709(__this, method) (( Task_1_t1344 * (*) (Task_1_t1422 *, const MethodInfo*))Task_1_get_Result_m29869_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Object>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m30710(__this, ___continuation, method) (( Task_t1159 * (*) (Task_1_t1422 *, Action_1_t5961 *, const MethodInfo*))Task_1_ContinueWith_m29871_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Object>>::RunContinuations()
#define Task_1_RunContinuations_m30711(__this, method) (( void (*) (Task_1_t1422 *, const MethodInfo*))Task_1_RunContinuations_m29873_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Object>>::TrySetResult(T)
#define Task_1_TrySetResult_m30712(__this, ___result, method) (( bool (*) (Task_1_t1422 *, Task_1_t1344 *, const MethodInfo*))Task_1_TrySetResult_m29875_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Object>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m30713(__this, method) (( bool (*) (Task_1_t1422 *, const MethodInfo*))Task_1_TrySetCanceled_m29877_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Object>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m30714(__this, ___exception, method) (( bool (*) (Task_1_t1422 *, AggregateException_t1289 *, const MethodInfo*))Task_1_TrySetException_m29879_gshared)(__this, ___exception, method)
