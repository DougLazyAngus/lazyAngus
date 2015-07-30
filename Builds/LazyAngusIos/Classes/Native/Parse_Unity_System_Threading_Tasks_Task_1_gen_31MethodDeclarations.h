#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int32>>
struct Task_1_t6070;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1317;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int32>>>
struct Action_1_t6071;
// System.AggregateException
struct AggregateException_t1285;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int32>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m32165(__this, method) (( void (*) (Task_1_t6070 *, const MethodInfo*))Task_1__ctor_m29837_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int32>>::get_Result()
#define Task_1_get_Result_m32166(__this, method) (( Task_1_t1317 * (*) (Task_1_t6070 *, const MethodInfo*))Task_1_get_Result_m29838_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int32>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m32167(__this, ___continuation, method) (( Task_t1155 * (*) (Task_1_t6070 *, Action_1_t6071 *, const MethodInfo*))Task_1_ContinueWith_m29840_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int32>>::RunContinuations()
#define Task_1_RunContinuations_m32168(__this, method) (( void (*) (Task_1_t6070 *, const MethodInfo*))Task_1_RunContinuations_m29842_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int32>>::TrySetResult(T)
#define Task_1_TrySetResult_m32169(__this, ___result, method) (( bool (*) (Task_1_t6070 *, Task_1_t1317 *, const MethodInfo*))Task_1_TrySetResult_m29844_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int32>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m32170(__this, method) (( bool (*) (Task_1_t6070 *, const MethodInfo*))Task_1_TrySetCanceled_m29846_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int32>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m32171(__this, ___exception, method) (( bool (*) (Task_1_t6070 *, AggregateException_t1285 *, const MethodInfo*))Task_1_TrySetException_m29848_gshared)(__this, ___exception, method)
