#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Object[]>
struct Task_1_t6165;
// System.Object[]
struct ObjectU5BU5D_t682;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object[]>>
struct Action_1_t6166;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<System.Object[]>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m33109(__this, method) (( void (*) (Task_1_t6165 *, const MethodInfo*))Task_1__ctor_m30544_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Object[]>::get_Result()
#define Task_1_get_Result_m33110(__this, method) (( ObjectU5BU5D_t682* (*) (Task_1_t6165 *, const MethodInfo*))Task_1_get_Result_m30545_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object[]>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m33111(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t6165 *, Action_1_t6166 *, const MethodInfo*))Task_1_ContinueWith_m30547_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Object[]>::RunContinuations()
#define Task_1_RunContinuations_m33112(__this, method) (( void (*) (Task_1_t6165 *, const MethodInfo*))Task_1_RunContinuations_m30549_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object[]>::TrySetResult(T)
#define Task_1_TrySetResult_m33113(__this, ___result, method) (( bool (*) (Task_1_t6165 *, ObjectU5BU5D_t682*, const MethodInfo*))Task_1_TrySetResult_m30551_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object[]>::TrySetCanceled()
#define Task_1_TrySetCanceled_m33114(__this, method) (( bool (*) (Task_1_t6165 *, const MethodInfo*))Task_1_TrySetCanceled_m30553_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object[]>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m33115(__this, ___exception, method) (( bool (*) (Task_1_t6165 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m30555_gshared)(__this, ___exception, method)
