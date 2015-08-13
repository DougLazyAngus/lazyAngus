#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t1369;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Action_1_t5956;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<System.Boolean>::.ctor()
// System.Threading.Tasks.Task`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_16MethodDeclarations.h"
#define Task_1__ctor_m30590(__this, method) (( void (*) (Task_1_t1369 *, const MethodInfo*))Task_1__ctor_m30591_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Boolean>::get_Result()
#define Task_1_get_Result_m7335(__this, method) (( bool (*) (Task_1_t1369 *, const MethodInfo*))Task_1_get_Result_m30592_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Boolean>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m30593(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t1369 *, Action_1_t5956 *, const MethodInfo*))Task_1_ContinueWith_m30594_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::RunContinuations()
#define Task_1_RunContinuations_m30595(__this, method) (( void (*) (Task_1_t1369 *, const MethodInfo*))Task_1_RunContinuations_m30596_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetResult(T)
#define Task_1_TrySetResult_m30597(__this, ___result, method) (( bool (*) (Task_1_t1369 *, bool, const MethodInfo*))Task_1_TrySetResult_m30598_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetCanceled()
#define Task_1_TrySetCanceled_m30599(__this, method) (( bool (*) (Task_1_t1369 *, const MethodInfo*))Task_1_TrySetCanceled_m30600_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m30601(__this, ___exception, method) (( bool (*) (Task_1_t1369 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m30602_gshared)(__this, ___exception, method)
