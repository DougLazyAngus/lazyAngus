#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>
struct Task_1_t1366;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1293;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>>
struct Action_1_t2111;
// System.AggregateException
struct AggregateException_t1289;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m59306(__this, method) (( void (*) (Task_1_t1366 *, const MethodInfo*))Task_1__ctor_m29868_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>::get_Result()
#define Task_1_get_Result_m7591(__this, method) (( TaskU5BU5D_t1293* (*) (Task_1_t1366 *, const MethodInfo*))Task_1_get_Result_m29869_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m7596(__this, ___continuation, method) (( Task_t1159 * (*) (Task_1_t1366 *, Action_1_t2111 *, const MethodInfo*))Task_1_ContinueWith_m29871_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>::RunContinuations()
#define Task_1_RunContinuations_m59307(__this, method) (( void (*) (Task_1_t1366 *, const MethodInfo*))Task_1_RunContinuations_m29873_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>::TrySetResult(T)
#define Task_1_TrySetResult_m59308(__this, ___result, method) (( bool (*) (Task_1_t1366 *, TaskU5BU5D_t1293*, const MethodInfo*))Task_1_TrySetResult_m29875_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>::TrySetCanceled()
#define Task_1_TrySetCanceled_m59309(__this, method) (( bool (*) (Task_1_t1366 *, const MethodInfo*))Task_1_TrySetCanceled_m29877_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m59310(__this, ___exception, method) (( bool (*) (Task_1_t1366 *, AggregateException_t1289 *, const MethodInfo*))Task_1_TrySetException_m29879_gshared)(__this, ___exception, method)
