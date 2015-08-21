#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>
struct Task_1_t5976;
// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1416;
// System.Threading.Tasks.Task
struct Task_t1208;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>>
struct Action_1_t5977;
// System.AggregateException
struct AggregateException_t1336;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m30838(__this, method) (( void (*) (Task_1_t5976 *, const MethodInfo*))Task_1__ctor_m30632_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>::get_Result()
#define Task_1_get_Result_m30839(__this, method) (( Task_1_t1416 * (*) (Task_1_t5976 *, const MethodInfo*))Task_1_get_Result_m30633_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m30840(__this, ___continuation, method) (( Task_t1208 * (*) (Task_1_t5976 *, Action_1_t5977 *, const MethodInfo*))Task_1_ContinueWith_m30635_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>::RunContinuations()
#define Task_1_RunContinuations_m30841(__this, method) (( void (*) (Task_1_t5976 *, const MethodInfo*))Task_1_RunContinuations_m30637_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>::TrySetResult(T)
#define Task_1_TrySetResult_m30842(__this, ___result, method) (( bool (*) (Task_1_t5976 *, Task_1_t1416 *, const MethodInfo*))Task_1_TrySetResult_m30639_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m30843(__this, method) (( bool (*) (Task_1_t5976 *, const MethodInfo*))Task_1_TrySetCanceled_m30641_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m30844(__this, ___exception, method) (( bool (*) (Task_1_t5976 *, AggregateException_t1336 *, const MethodInfo*))Task_1_TrySetException_m30643_gshared)(__this, ___exception, method)
