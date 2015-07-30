#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>
struct Task_1_t1495;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t1319;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>>
struct Action_1_t9474;
// System.AggregateException
struct AggregateException_t1285;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m58378(__this, method) (( void (*) (Task_1_t1495 *, const MethodInfo*))Task_1__ctor_m29837_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::get_Result()
#define Task_1_get_Result_m58379(__this, method) (( Task_1_t1319 * (*) (Task_1_t1495 *, const MethodInfo*))Task_1_get_Result_m29838_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m58380(__this, ___continuation, method) (( Task_t1155 * (*) (Task_1_t1495 *, Action_1_t9474 *, const MethodInfo*))Task_1_ContinueWith_m29840_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::RunContinuations()
#define Task_1_RunContinuations_m58381(__this, method) (( void (*) (Task_1_t1495 *, const MethodInfo*))Task_1_RunContinuations_m29842_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::TrySetResult(T)
#define Task_1_TrySetResult_m58382(__this, ___result, method) (( bool (*) (Task_1_t1495 *, Task_1_t1319 *, const MethodInfo*))Task_1_TrySetResult_m29844_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m58383(__this, method) (( bool (*) (Task_1_t1495 *, const MethodInfo*))Task_1_TrySetCanceled_m29846_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m58384(__this, ___exception, method) (( bool (*) (Task_1_t1495 *, AggregateException_t1285 *, const MethodInfo*))Task_1_TrySetException_m29848_gshared)(__this, ___exception, method)
