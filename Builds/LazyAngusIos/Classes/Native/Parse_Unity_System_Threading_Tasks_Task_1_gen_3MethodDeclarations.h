#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t1312;
// System.Tuple`2<System.Net.HttpStatusCode,System.String>
struct Tuple_2_t1365;
// System.Threading.Tasks.Task
struct Task_t1148;
// System.Action`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>
struct Action_1_t1366;
// System.AggregateException
struct AggregateException_t1278;

// System.Void System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m30600(__this, method) (( void (*) (Task_1_t1312 *, const MethodInfo*))Task_1__ctor_m29790_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::get_Result()
#define Task_1_get_Result_m6993(__this, method) (( Tuple_2_t1365 * (*) (Task_1_t1312 *, const MethodInfo*))Task_1_get_Result_m29791_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m30601(__this, ___continuation, method) (( Task_t1148 * (*) (Task_1_t1312 *, Action_1_t1366 *, const MethodInfo*))Task_1_ContinueWith_m29793_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::RunContinuations()
#define Task_1_RunContinuations_m30602(__this, method) (( void (*) (Task_1_t1312 *, const MethodInfo*))Task_1_RunContinuations_m29795_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetResult(T)
#define Task_1_TrySetResult_m30603(__this, ___result, method) (( bool (*) (Task_1_t1312 *, Tuple_2_t1365 *, const MethodInfo*))Task_1_TrySetResult_m29797_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m30604(__this, method) (( bool (*) (Task_1_t1312 *, const MethodInfo*))Task_1_TrySetCanceled_m29799_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m30605(__this, ___exception, method) (( bool (*) (Task_1_t1312 *, AggregateException_t1278 *, const MethodInfo*))Task_1_TrySetException_m29801_gshared)(__this, ___exception, method)
