#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>
struct Task_1_t1576;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t1400;
// System.Threading.Tasks.Task
struct Task_t1238;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>>
struct Action_1_t10215;
// System.AggregateException
struct AggregateException_t1366;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m63875(__this, method) (( void (*) (Task_1_t1576 *, const MethodInfo*))Task_1__ctor_m35302_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::get_Result()
#define Task_1_get_Result_m63876(__this, method) (( Task_1_t1400 * (*) (Task_1_t1576 *, const MethodInfo*))Task_1_get_Result_m35303_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m63877(__this, ___continuation, method) (( Task_t1238 * (*) (Task_1_t1576 *, Action_1_t10215 *, const MethodInfo*))Task_1_ContinueWith_m35305_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::RunContinuations()
#define Task_1_RunContinuations_m63878(__this, method) (( void (*) (Task_1_t1576 *, const MethodInfo*))Task_1_RunContinuations_m35307_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::TrySetResult(T)
#define Task_1_TrySetResult_m63879(__this, ___result, method) (( bool (*) (Task_1_t1576 *, Task_1_t1400 *, const MethodInfo*))Task_1_TrySetResult_m35309_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m63880(__this, method) (( bool (*) (Task_1_t1576 *, const MethodInfo*))Task_1_TrySetCanceled_m35311_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m63881(__this, ___exception, method) (( bool (*) (Task_1_t1576 *, AggregateException_t1366 *, const MethodInfo*))Task_1_TrySetException_m35313_gshared)(__this, ___exception, method)
