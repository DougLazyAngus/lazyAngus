#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int32>>
struct Task_1_t6152;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1371;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int32>>>
struct Action_1_t6153;
// System.AggregateException
struct AggregateException_t1339;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int32>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m32993(__this, method) (( void (*) (Task_1_t6152 *, const MethodInfo*))Task_1__ctor_m30665_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int32>>::get_Result()
#define Task_1_get_Result_m32994(__this, method) (( Task_1_t1371 * (*) (Task_1_t6152 *, const MethodInfo*))Task_1_get_Result_m30666_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int32>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m32995(__this, ___continuation, method) (( Task_t1211 * (*) (Task_1_t6152 *, Action_1_t6153 *, const MethodInfo*))Task_1_ContinueWith_m30668_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int32>>::RunContinuations()
#define Task_1_RunContinuations_m32996(__this, method) (( void (*) (Task_1_t6152 *, const MethodInfo*))Task_1_RunContinuations_m30670_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int32>>::TrySetResult(T)
#define Task_1_TrySetResult_m32997(__this, ___result, method) (( bool (*) (Task_1_t6152 *, Task_1_t1371 *, const MethodInfo*))Task_1_TrySetResult_m30672_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int32>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m32998(__this, method) (( bool (*) (Task_1_t6152 *, const MethodInfo*))Task_1_TrySetCanceled_m30674_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int32>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m32999(__this, ___exception, method) (( bool (*) (Task_1_t6152 *, AggregateException_t1339 *, const MethodInfo*))Task_1_TrySetException_m30676_gshared)(__this, ___exception, method)
