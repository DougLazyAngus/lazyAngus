#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int32>>
struct Task_1_t6145;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1370;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int32>>>
struct Action_1_t6146;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int32>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m32869(__this, method) (( void (*) (Task_1_t6145 *, const MethodInfo*))Task_1__ctor_m30541_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int32>>::get_Result()
#define Task_1_get_Result_m32870(__this, method) (( Task_1_t1370 * (*) (Task_1_t6145 *, const MethodInfo*))Task_1_get_Result_m30542_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int32>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m32871(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t6145 *, Action_1_t6146 *, const MethodInfo*))Task_1_ContinueWith_m30544_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int32>>::RunContinuations()
#define Task_1_RunContinuations_m32872(__this, method) (( void (*) (Task_1_t6145 *, const MethodInfo*))Task_1_RunContinuations_m30546_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int32>>::TrySetResult(T)
#define Task_1_TrySetResult_m32873(__this, ___result, method) (( bool (*) (Task_1_t6145 *, Task_1_t1370 *, const MethodInfo*))Task_1_TrySetResult_m30548_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int32>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m32874(__this, method) (( bool (*) (Task_1_t6145 *, const MethodInfo*))Task_1_TrySetCanceled_m30550_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int32>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m32875(__this, ___exception, method) (( bool (*) (Task_1_t6145 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m30552_gshared)(__this, ___exception, method)
