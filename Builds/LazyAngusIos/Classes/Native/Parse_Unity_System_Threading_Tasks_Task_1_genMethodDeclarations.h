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
#define Task_1__ctor_m30678(__this, method) (( void (*) (Task_1_t1367 *, const MethodInfo*))Task_1__ctor_m30679_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Boolean>::get_Result()
#define Task_1_get_Result_m7323(__this, method) (( bool (*) (Task_1_t1367 *, const MethodInfo*))Task_1_get_Result_m30680_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Boolean>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m30681(__this, ___continuation, method) (( Task_t1208 * (*) (Task_1_t1367 *, Action_1_t5960 *, const MethodInfo*))Task_1_ContinueWith_m30682_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::RunContinuations()
#define Task_1_RunContinuations_m30683(__this, method) (( void (*) (Task_1_t1367 *, const MethodInfo*))Task_1_RunContinuations_m30684_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetResult(T)
#define Task_1_TrySetResult_m30685(__this, ___result, method) (( bool (*) (Task_1_t1367 *, bool, const MethodInfo*))Task_1_TrySetResult_m30686_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetCanceled()
#define Task_1_TrySetCanceled_m30687(__this, method) (( bool (*) (Task_1_t1367 *, const MethodInfo*))Task_1_TrySetCanceled_m30688_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m30689(__this, ___exception, method) (( bool (*) (Task_1_t1367 *, AggregateException_t1336 *, const MethodInfo*))Task_1_TrySetException_m30690_gshared)(__this, ___exception, method)
