#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>
struct Task_1_t8297;
// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1553;
// System.Threading.Tasks.Task
struct Task_t1208;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>>
struct Action_1_t8298;
// System.AggregateException
struct AggregateException_t1336;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m59460(__this, method) (( void (*) (Task_1_t8297 *, const MethodInfo*))Task_1__ctor_m30633_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::get_Result()
#define Task_1_get_Result_m59461(__this, method) (( Task_1_t1553 * (*) (Task_1_t8297 *, const MethodInfo*))Task_1_get_Result_m30634_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m59462(__this, ___continuation, method) (( Task_t1208 * (*) (Task_1_t8297 *, Action_1_t8298 *, const MethodInfo*))Task_1_ContinueWith_m30636_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::RunContinuations()
#define Task_1_RunContinuations_m59463(__this, method) (( void (*) (Task_1_t8297 *, const MethodInfo*))Task_1_RunContinuations_m30638_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::TrySetResult(T)
#define Task_1_TrySetResult_m59464(__this, ___result, method) (( bool (*) (Task_1_t8297 *, Task_1_t1553 *, const MethodInfo*))Task_1_TrySetResult_m30640_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m59465(__this, method) (( bool (*) (Task_1_t8297 *, const MethodInfo*))Task_1_TrySetCanceled_m30642_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m59466(__this, ___exception, method) (( bool (*) (Task_1_t8297 *, AggregateException_t1336 *, const MethodInfo*))Task_1_TrySetException_m30644_gshared)(__this, ___exception, method)
