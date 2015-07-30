#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseSession>
struct Task_1_t1354;
// Parse.ParseSession
struct ParseSession_t1249;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseSession>>
struct Action_1_t6218;
// System.AggregateException
struct AggregateException_t1285;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseSession>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m34167(__this, method) (( void (*) (Task_1_t1354 *, const MethodInfo*))Task_1__ctor_m29837_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseSession>::get_Result()
#define Task_1_get_Result_m34168(__this, method) (( ParseSession_t1249 * (*) (Task_1_t1354 *, const MethodInfo*))Task_1_get_Result_m29838_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseSession>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m34169(__this, ___continuation, method) (( Task_t1155 * (*) (Task_1_t1354 *, Action_1_t6218 *, const MethodInfo*))Task_1_ContinueWith_m29840_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseSession>::RunContinuations()
#define Task_1_RunContinuations_m34170(__this, method) (( void (*) (Task_1_t1354 *, const MethodInfo*))Task_1_RunContinuations_m29842_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseSession>::TrySetResult(T)
#define Task_1_TrySetResult_m34171(__this, ___result, method) (( bool (*) (Task_1_t1354 *, ParseSession_t1249 *, const MethodInfo*))Task_1_TrySetResult_m29844_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseSession>::TrySetCanceled()
#define Task_1_TrySetCanceled_m34172(__this, method) (( bool (*) (Task_1_t1354 *, const MethodInfo*))Task_1_TrySetCanceled_m29846_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseSession>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m34173(__this, ___exception, method) (( bool (*) (Task_1_t1354 *, AggregateException_t1285 *, const MethodInfo*))Task_1_TrySetException_m29848_gshared)(__this, ___exception, method)
