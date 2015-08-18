#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Object>>
struct Task_1_t1471;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1393;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Object>>>
struct Action_1_t6032;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Object>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m31381(__this, method) (( void (*) (Task_1_t1471 *, const MethodInfo*))Task_1__ctor_m30541_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Object>>::get_Result()
#define Task_1_get_Result_m31382(__this, method) (( Task_1_t1393 * (*) (Task_1_t1471 *, const MethodInfo*))Task_1_get_Result_m30542_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Object>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m31383(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t1471 *, Action_1_t6032 *, const MethodInfo*))Task_1_ContinueWith_m30544_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Object>>::RunContinuations()
#define Task_1_RunContinuations_m31384(__this, method) (( void (*) (Task_1_t1471 *, const MethodInfo*))Task_1_RunContinuations_m30546_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Object>>::TrySetResult(T)
#define Task_1_TrySetResult_m31385(__this, ___result, method) (( bool (*) (Task_1_t1471 *, Task_1_t1393 *, const MethodInfo*))Task_1_TrySetResult_m30548_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Object>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m31386(__this, method) (( bool (*) (Task_1_t1471 *, const MethodInfo*))Task_1_TrySetCanceled_m30550_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Object>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m31387(__this, ___exception, method) (( bool (*) (Task_1_t1471 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m30552_gshared)(__this, ___exception, method)
