#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1415;
// System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Tuple_2_t1279;
// System.Threading.Tasks.Task
struct Task_t1238;
// System.Action`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>>
struct Action_1_t1500;
// System.AggregateException
struct AggregateException_t1366;

// System.Void System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m36912(__this, method) (( void (*) (Task_1_t1415 *, const MethodInfo*))Task_1__ctor_m35302_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::get_Result()
#define Task_1_get_Result_m7721(__this, method) (( Tuple_2_t1279 * (*) (Task_1_t1415 *, const MethodInfo*))Task_1_get_Result_m35303_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m36913(__this, ___continuation, method) (( Task_t1238 * (*) (Task_1_t1415 *, Action_1_t1500 *, const MethodInfo*))Task_1_ContinueWith_m35305_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::RunContinuations()
#define Task_1_RunContinuations_m36914(__this, method) (( void (*) (Task_1_t1415 *, const MethodInfo*))Task_1_RunContinuations_m35307_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::TrySetResult(T)
#define Task_1_TrySetResult_m36915(__this, ___result, method) (( bool (*) (Task_1_t1415 *, Tuple_2_t1279 *, const MethodInfo*))Task_1_TrySetResult_m35309_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m36916(__this, method) (( bool (*) (Task_1_t1415 *, const MethodInfo*))Task_1_TrySetCanceled_m35311_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m36917(__this, ___exception, method) (( bool (*) (Task_1_t1415 *, AggregateException_t1366 *, const MethodInfo*))Task_1_TrySetException_m35313_gshared)(__this, ___exception, method)
