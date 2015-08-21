#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Object[]>
struct Task_1_t6169;
// System.Object[]
struct ObjectU5BU5D_t680;
// System.Threading.Tasks.Task
struct Task_t1208;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object[]>>
struct Action_1_t6170;
// System.AggregateException
struct AggregateException_t1336;

// System.Void System.Threading.Tasks.Task`1<System.Object[]>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m33197(__this, method) (( void (*) (Task_1_t6169 *, const MethodInfo*))Task_1__ctor_m30632_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Object[]>::get_Result()
#define Task_1_get_Result_m33198(__this, method) (( ObjectU5BU5D_t680* (*) (Task_1_t6169 *, const MethodInfo*))Task_1_get_Result_m30633_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object[]>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m33199(__this, ___continuation, method) (( Task_t1208 * (*) (Task_1_t6169 *, Action_1_t6170 *, const MethodInfo*))Task_1_ContinueWith_m30635_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Object[]>::RunContinuations()
#define Task_1_RunContinuations_m33200(__this, method) (( void (*) (Task_1_t6169 *, const MethodInfo*))Task_1_RunContinuations_m30637_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object[]>::TrySetResult(T)
#define Task_1_TrySetResult_m33201(__this, ___result, method) (( bool (*) (Task_1_t6169 *, ObjectU5BU5D_t680*, const MethodInfo*))Task_1_TrySetResult_m30639_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object[]>::TrySetCanceled()
#define Task_1_TrySetCanceled_m33202(__this, method) (( bool (*) (Task_1_t6169 *, const MethodInfo*))Task_1_TrySetCanceled_m30641_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object[]>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m33203(__this, ___exception, method) (( bool (*) (Task_1_t6169 *, AggregateException_t1336 *, const MethodInfo*))Task_1_TrySetException_m30643_gshared)(__this, ___exception, method)
