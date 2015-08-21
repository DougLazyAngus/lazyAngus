#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>
struct Task_1_t8249;
// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1549;
// System.Threading.Tasks.Task
struct Task_t1208;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>>
struct Action_1_t8250;
// System.AggregateException
struct AggregateException_t1336;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m59228(__this, method) (( void (*) (Task_1_t8249 *, const MethodInfo*))Task_1__ctor_m30633_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>::get_Result()
#define Task_1_get_Result_m59229(__this, method) (( Task_1_t1549 * (*) (Task_1_t8249 *, const MethodInfo*))Task_1_get_Result_m30634_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m59230(__this, ___continuation, method) (( Task_t1208 * (*) (Task_1_t8249 *, Action_1_t8250 *, const MethodInfo*))Task_1_ContinueWith_m30636_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>::RunContinuations()
#define Task_1_RunContinuations_m59231(__this, method) (( void (*) (Task_1_t8249 *, const MethodInfo*))Task_1_RunContinuations_m30638_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>::TrySetResult(T)
#define Task_1_TrySetResult_m59232(__this, ___result, method) (( bool (*) (Task_1_t8249 *, Task_1_t1549 *, const MethodInfo*))Task_1_TrySetResult_m30640_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m59233(__this, method) (( bool (*) (Task_1_t8249 *, const MethodInfo*))Task_1_TrySetCanceled_m30642_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m59234(__this, ___exception, method) (( bool (*) (Task_1_t8249 *, AggregateException_t1336 *, const MethodInfo*))Task_1_TrySetException_m30644_gshared)(__this, ___exception, method)
