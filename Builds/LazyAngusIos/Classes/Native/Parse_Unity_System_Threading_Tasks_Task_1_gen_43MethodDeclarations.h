#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>
struct Task_1_t8273;
// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t1551;
// System.Threading.Tasks.Task
struct Task_t1208;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>>
struct Action_1_t8274;
// System.AggregateException
struct AggregateException_t1336;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m59343(__this, method) (( void (*) (Task_1_t8273 *, const MethodInfo*))Task_1__ctor_m30632_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>::get_Result()
#define Task_1_get_Result_m59344(__this, method) (( Task_1_t1551 * (*) (Task_1_t8273 *, const MethodInfo*))Task_1_get_Result_m30633_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m59345(__this, ___continuation, method) (( Task_t1208 * (*) (Task_1_t8273 *, Action_1_t8274 *, const MethodInfo*))Task_1_ContinueWith_m30635_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>::RunContinuations()
#define Task_1_RunContinuations_m59346(__this, method) (( void (*) (Task_1_t8273 *, const MethodInfo*))Task_1_RunContinuations_m30637_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>::TrySetResult(T)
#define Task_1_TrySetResult_m59347(__this, ___result, method) (( bool (*) (Task_1_t8273 *, Task_1_t1551 *, const MethodInfo*))Task_1_TrySetResult_m30639_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m59348(__this, method) (( bool (*) (Task_1_t8273 *, const MethodInfo*))Task_1_TrySetCanceled_m30641_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m59349(__this, ___exception, method) (( bool (*) (Task_1_t8273 *, AggregateException_t1336 *, const MethodInfo*))Task_1_TrySetException_m30643_gshared)(__this, ___exception, method)
