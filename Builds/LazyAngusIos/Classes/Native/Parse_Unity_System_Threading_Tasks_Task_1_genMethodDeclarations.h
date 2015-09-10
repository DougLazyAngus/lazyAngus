#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t1397;
// System.Threading.Tasks.Task
struct Task_t1238;
// System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Action_1_t6538;
// System.AggregateException
struct AggregateException_t1366;

// System.Void System.Threading.Tasks.Task`1<System.Boolean>::.ctor()
// System.Threading.Tasks.Task`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_16MethodDeclarations.h"
#define Task_1__ctor_m35348(__this, method) (( void (*) (Task_1_t1397 *, const MethodInfo*))Task_1__ctor_m35349_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Boolean>::get_Result()
#define Task_1_get_Result_m7563(__this, method) (( bool (*) (Task_1_t1397 *, const MethodInfo*))Task_1_get_Result_m35350_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Boolean>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m35351(__this, ___continuation, method) (( Task_t1238 * (*) (Task_1_t1397 *, Action_1_t6538 *, const MethodInfo*))Task_1_ContinueWith_m35352_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::RunContinuations()
#define Task_1_RunContinuations_m35353(__this, method) (( void (*) (Task_1_t1397 *, const MethodInfo*))Task_1_RunContinuations_m35354_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetResult(T)
#define Task_1_TrySetResult_m35355(__this, ___result, method) (( bool (*) (Task_1_t1397 *, bool, const MethodInfo*))Task_1_TrySetResult_m35356_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetCanceled()
#define Task_1_TrySetCanceled_m35357(__this, method) (( bool (*) (Task_1_t1397 *, const MethodInfo*))Task_1_TrySetCanceled_m35358_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m35359(__this, ___exception, method) (( bool (*) (Task_1_t1397 *, AggregateException_t1366 *, const MethodInfo*))Task_1_TrySetException_m35360_gshared)(__this, ___exception, method)
