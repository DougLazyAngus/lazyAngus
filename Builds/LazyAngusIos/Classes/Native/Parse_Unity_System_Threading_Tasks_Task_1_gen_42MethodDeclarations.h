#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int16>>
struct Task_1_t8264;
// System.Threading.Tasks.Task`1<System.Int16>
struct Task_1_t1553;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int16>>>
struct Action_1_t8265;
// System.AggregateException
struct AggregateException_t1339;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int16>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m59318(__this, method) (( void (*) (Task_1_t8264 *, const MethodInfo*))Task_1__ctor_m30665_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int16>>::get_Result()
#define Task_1_get_Result_m59319(__this, method) (( Task_1_t1553 * (*) (Task_1_t8264 *, const MethodInfo*))Task_1_get_Result_m30666_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int16>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m59320(__this, ___continuation, method) (( Task_t1211 * (*) (Task_1_t8264 *, Action_1_t8265 *, const MethodInfo*))Task_1_ContinueWith_m30668_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int16>>::RunContinuations()
#define Task_1_RunContinuations_m59321(__this, method) (( void (*) (Task_1_t8264 *, const MethodInfo*))Task_1_RunContinuations_m30670_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int16>>::TrySetResult(T)
#define Task_1_TrySetResult_m59322(__this, ___result, method) (( bool (*) (Task_1_t8264 *, Task_1_t1553 *, const MethodInfo*))Task_1_TrySetResult_m30672_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int16>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m59323(__this, method) (( bool (*) (Task_1_t8264 *, const MethodInfo*))Task_1_TrySetCanceled_m30674_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int16>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m59324(__this, ___exception, method) (( bool (*) (Task_1_t8264 *, AggregateException_t1339 *, const MethodInfo*))Task_1_TrySetException_m30676_gshared)(__this, ___exception, method)
