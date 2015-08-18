#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>
struct Task_1_t8293;
// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1555;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>>
struct Action_1_t8294;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m59368(__this, method) (( void (*) (Task_1_t8293 *, const MethodInfo*))Task_1__ctor_m30541_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::get_Result()
#define Task_1_get_Result_m59369(__this, method) (( Task_1_t1555 * (*) (Task_1_t8293 *, const MethodInfo*))Task_1_get_Result_m30542_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m59370(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t8293 *, Action_1_t8294 *, const MethodInfo*))Task_1_ContinueWith_m30544_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::RunContinuations()
#define Task_1_RunContinuations_m59371(__this, method) (( void (*) (Task_1_t8293 *, const MethodInfo*))Task_1_RunContinuations_m30546_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::TrySetResult(T)
#define Task_1_TrySetResult_m59372(__this, ___result, method) (( bool (*) (Task_1_t8293 *, Task_1_t1555 *, const MethodInfo*))Task_1_TrySetResult_m30548_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m59373(__this, method) (( bool (*) (Task_1_t8293 *, const MethodInfo*))Task_1_TrySetCanceled_m30550_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m59374(__this, ___exception, method) (( bool (*) (Task_1_t8293 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m30552_gshared)(__this, ___exception, method)
