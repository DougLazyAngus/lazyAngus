#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>
struct Task_1_t8300;
// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1556;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>>
struct Action_1_t8301;
// System.AggregateException
struct AggregateException_t1339;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m59492(__this, method) (( void (*) (Task_1_t8300 *, const MethodInfo*))Task_1__ctor_m30665_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::get_Result()
#define Task_1_get_Result_m59493(__this, method) (( Task_1_t1556 * (*) (Task_1_t8300 *, const MethodInfo*))Task_1_get_Result_m30666_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m59494(__this, ___continuation, method) (( Task_t1211 * (*) (Task_1_t8300 *, Action_1_t8301 *, const MethodInfo*))Task_1_ContinueWith_m30668_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::RunContinuations()
#define Task_1_RunContinuations_m59495(__this, method) (( void (*) (Task_1_t8300 *, const MethodInfo*))Task_1_RunContinuations_m30670_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::TrySetResult(T)
#define Task_1_TrySetResult_m59496(__this, ___result, method) (( bool (*) (Task_1_t8300 *, Task_1_t1556 *, const MethodInfo*))Task_1_TrySetResult_m30672_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m59497(__this, method) (( bool (*) (Task_1_t8300 *, const MethodInfo*))Task_1_TrySetCanceled_m30674_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m59498(__this, ___exception, method) (( bool (*) (Task_1_t8300 *, AggregateException_t1339 *, const MethodInfo*))Task_1_TrySetException_m30676_gshared)(__this, ___exception, method)
