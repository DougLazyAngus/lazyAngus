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
#define Task_1__ctor_m30587(__this, method) (( void (*) (Task_1_t1369 *, const MethodInfo*))Task_1__ctor_m30588_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Boolean>::get_Result()
#define Task_1_get_Result_m7334(__this, method) (( bool (*) (Task_1_t1369 *, const MethodInfo*))Task_1_get_Result_m30589_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Boolean>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m30590(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t1369 *, Action_1_t5956 *, const MethodInfo*))Task_1_ContinueWith_m30591_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::RunContinuations()
#define Task_1_RunContinuations_m30592(__this, method) (( void (*) (Task_1_t1369 *, const MethodInfo*))Task_1_RunContinuations_m30593_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetResult(T)
#define Task_1_TrySetResult_m30594(__this, ___result, method) (( bool (*) (Task_1_t1369 *, bool, const MethodInfo*))Task_1_TrySetResult_m30595_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetCanceled()
#define Task_1_TrySetCanceled_m30596(__this, method) (( bool (*) (Task_1_t1369 *, const MethodInfo*))Task_1_TrySetCanceled_m30597_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m30598(__this, ___exception, method) (( bool (*) (Task_1_t1369 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m30599_gshared)(__this, ___exception, method)
