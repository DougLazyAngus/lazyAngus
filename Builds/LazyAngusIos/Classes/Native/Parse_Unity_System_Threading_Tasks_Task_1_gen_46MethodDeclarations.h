#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt64>>
struct Task_1_t8305;
// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t1556;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt64>>>
struct Action_1_t8306;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt64>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m59426(__this, method) (( void (*) (Task_1_t8305 *, const MethodInfo*))Task_1__ctor_m30541_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt64>>::get_Result()
#define Task_1_get_Result_m59427(__this, method) (( Task_1_t1556 * (*) (Task_1_t8305 *, const MethodInfo*))Task_1_get_Result_m30542_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt64>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m59428(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t8305 *, Action_1_t8306 *, const MethodInfo*))Task_1_ContinueWith_m30544_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt64>>::RunContinuations()
#define Task_1_RunContinuations_m59429(__this, method) (( void (*) (Task_1_t8305 *, const MethodInfo*))Task_1_RunContinuations_m30546_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt64>>::TrySetResult(T)
#define Task_1_TrySetResult_m59430(__this, ___result, method) (( bool (*) (Task_1_t8305 *, Task_1_t1556 *, const MethodInfo*))Task_1_TrySetResult_m30548_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt64>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m59431(__this, method) (( bool (*) (Task_1_t8305 *, const MethodInfo*))Task_1_TrySetCanceled_m30550_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt64>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m59432(__this, ___exception, method) (( bool (*) (Task_1_t8305 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m30552_gshared)(__this, ___exception, method)
