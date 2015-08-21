#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t1367;
// System.Threading.Tasks.Task
struct Task_t1208;
// System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Action_1_t5960;
// System.AggregateException
struct AggregateException_t1336;

// System.Void System.Threading.Tasks.Task`1<System.Boolean>::.ctor()
// System.Threading.Tasks.Task`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_16MethodDeclarations.h"
#define Task_1__ctor_m30679(__this, method) (( void (*) (Task_1_t1367 *, const MethodInfo*))Task_1__ctor_m30680_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Boolean>::get_Result()
#define Task_1_get_Result_m7324(__this, method) (( bool (*) (Task_1_t1367 *, const MethodInfo*))Task_1_get_Result_m30681_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Boolean>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m30682(__this, ___continuation, method) (( Task_t1208 * (*) (Task_1_t1367 *, Action_1_t5960 *, const MethodInfo*))Task_1_ContinueWith_m30683_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::RunContinuations()
#define Task_1_RunContinuations_m30684(__this, method) (( void (*) (Task_1_t1367 *, const MethodInfo*))Task_1_RunContinuations_m30685_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetResult(T)
#define Task_1_TrySetResult_m30686(__this, ___result, method) (( bool (*) (Task_1_t1367 *, bool, const MethodInfo*))Task_1_TrySetResult_m30687_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetCanceled()
#define Task_1_TrySetCanceled_m30688(__this, method) (( bool (*) (Task_1_t1367 *, const MethodInfo*))Task_1_TrySetCanceled_m30689_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m30690(__this, ___exception, method) (( bool (*) (Task_1_t1367 *, AggregateException_t1336 *, const MethodInfo*))Task_1_TrySetException_m30691_gshared)(__this, ___exception, method)
