#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>
struct Task_1_t1548;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t1372;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>>
struct Action_1_t9567;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m59075(__this, method) (( void (*) (Task_1_t1548 *, const MethodInfo*))Task_1__ctor_m30541_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::get_Result()
#define Task_1_get_Result_m59076(__this, method) (( Task_1_t1372 * (*) (Task_1_t1548 *, const MethodInfo*))Task_1_get_Result_m30542_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m59077(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t1548 *, Action_1_t9567 *, const MethodInfo*))Task_1_ContinueWith_m30544_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::RunContinuations()
#define Task_1_RunContinuations_m59078(__this, method) (( void (*) (Task_1_t1548 *, const MethodInfo*))Task_1_RunContinuations_m30546_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::TrySetResult(T)
#define Task_1_TrySetResult_m59079(__this, ___result, method) (( bool (*) (Task_1_t1548 *, Task_1_t1372 *, const MethodInfo*))Task_1_TrySetResult_m30548_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m59080(__this, method) (( bool (*) (Task_1_t1548 *, const MethodInfo*))Task_1_TrySetCanceled_m30550_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m59081(__this, ___exception, method) (( bool (*) (Task_1_t1548 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m30552_gshared)(__this, ___exception, method)
