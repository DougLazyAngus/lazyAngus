#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t1323;
// System.Tuple`2<System.Net.HttpStatusCode,System.String>
struct Tuple_2_t1376;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Action`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>
struct Action_1_t1377;
// System.AggregateException
struct AggregateException_t1289;

// System.Void System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m30678(__this, method) (( void (*) (Task_1_t1323 *, const MethodInfo*))Task_1__ctor_m29868_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::get_Result()
#define Task_1_get_Result_m7067(__this, method) (( Tuple_2_t1376 * (*) (Task_1_t1323 *, const MethodInfo*))Task_1_get_Result_m29869_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m30679(__this, ___continuation, method) (( Task_t1159 * (*) (Task_1_t1323 *, Action_1_t1377 *, const MethodInfo*))Task_1_ContinueWith_m29871_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::RunContinuations()
#define Task_1_RunContinuations_m30680(__this, method) (( void (*) (Task_1_t1323 *, const MethodInfo*))Task_1_RunContinuations_m29873_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetResult(T)
#define Task_1_TrySetResult_m30681(__this, ___result, method) (( bool (*) (Task_1_t1323 *, Tuple_2_t1376 *, const MethodInfo*))Task_1_TrySetResult_m29875_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m30682(__this, method) (( bool (*) (Task_1_t1323 *, const MethodInfo*))Task_1_TrySetCanceled_m29877_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m30683(__this, ___exception, method) (( bool (*) (Task_1_t1323 *, AggregateException_t1289 *, const MethodInfo*))Task_1_TrySetException_m29879_gshared)(__this, ___exception, method)
