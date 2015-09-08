#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t1375;
// System.Threading.Tasks.Task
struct Task_t1228;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>
struct Action_1_t2177;
// System.AggregateException
struct AggregateException_t1356;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m36438(__this, method) (( void (*) (Task_1_t1375 *, const MethodInfo*))Task_1__ctor_m35233_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::get_Result()
#define Task_1_get_Result_m7999(__this, method) (( Task_t1228 * (*) (Task_1_t1375 *, const MethodInfo*))Task_1_get_Result_m35234_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m8001(__this, ___continuation, method) (( Task_t1228 * (*) (Task_1_t1375 *, Action_1_t2177 *, const MethodInfo*))Task_1_ContinueWith_m35236_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::RunContinuations()
#define Task_1_RunContinuations_m36439(__this, method) (( void (*) (Task_1_t1375 *, const MethodInfo*))Task_1_RunContinuations_m35238_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::TrySetResult(T)
#define Task_1_TrySetResult_m36440(__this, ___result, method) (( bool (*) (Task_1_t1375 *, Task_t1228 *, const MethodInfo*))Task_1_TrySetResult_m35240_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::TrySetCanceled()
#define Task_1_TrySetCanceled_m36441(__this, method) (( bool (*) (Task_1_t1375 *, const MethodInfo*))Task_1_TrySetCanceled_m35242_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m36442(__this, ___exception, method) (( bool (*) (Task_1_t1375 *, AggregateException_t1356 *, const MethodInfo*))Task_1_TrySetException_m35244_gshared)(__this, ___exception, method)
