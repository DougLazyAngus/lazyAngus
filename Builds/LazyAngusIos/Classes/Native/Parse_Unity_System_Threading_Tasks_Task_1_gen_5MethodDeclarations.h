#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t1358;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>
struct Action_1_t2160;
// System.AggregateException
struct AggregateException_t1339;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m31863(__this, method) (( void (*) (Task_1_t1358 *, const MethodInfo*))Task_1__ctor_m30665_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::get_Result()
#define Task_1_get_Result_m7851(__this, method) (( Task_t1211 * (*) (Task_1_t1358 *, const MethodInfo*))Task_1_get_Result_m30666_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m7853(__this, ___continuation, method) (( Task_t1211 * (*) (Task_1_t1358 *, Action_1_t2160 *, const MethodInfo*))Task_1_ContinueWith_m30668_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::RunContinuations()
#define Task_1_RunContinuations_m31864(__this, method) (( void (*) (Task_1_t1358 *, const MethodInfo*))Task_1_RunContinuations_m30670_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::TrySetResult(T)
#define Task_1_TrySetResult_m31865(__this, ___result, method) (( bool (*) (Task_1_t1358 *, Task_t1211 *, const MethodInfo*))Task_1_TrySetResult_m30672_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::TrySetCanceled()
#define Task_1_TrySetCanceled_m31866(__this, method) (( bool (*) (Task_1_t1358 *, const MethodInfo*))Task_1_TrySetCanceled_m30674_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m31867(__this, ___exception, method) (( bool (*) (Task_1_t1358 *, AggregateException_t1339 *, const MethodInfo*))Task_1_TrySetException_m30676_gshared)(__this, ___exception, method)
