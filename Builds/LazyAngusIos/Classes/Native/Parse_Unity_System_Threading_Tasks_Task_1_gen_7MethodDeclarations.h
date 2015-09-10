#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseConfig>
struct Task_1_t1417;
// Parse.ParseConfig
struct ParseConfig_t1263;
// System.Threading.Tasks.Task
struct Task_t1238;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseConfig>>
struct Action_1_t6687;
// System.AggregateException
struct AggregateException_t1366;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseConfig>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m37167(__this, method) (( void (*) (Task_1_t1417 *, const MethodInfo*))Task_1__ctor_m35302_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseConfig>::get_Result()
#define Task_1_get_Result_m37168(__this, method) (( ParseConfig_t1263 * (*) (Task_1_t1417 *, const MethodInfo*))Task_1_get_Result_m35303_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseConfig>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m37169(__this, ___continuation, method) (( Task_t1238 * (*) (Task_1_t1417 *, Action_1_t6687 *, const MethodInfo*))Task_1_ContinueWith_m35305_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseConfig>::RunContinuations()
#define Task_1_RunContinuations_m37170(__this, method) (( void (*) (Task_1_t1417 *, const MethodInfo*))Task_1_RunContinuations_m35307_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseConfig>::TrySetResult(T)
#define Task_1_TrySetResult_m37171(__this, ___result, method) (( bool (*) (Task_1_t1417 *, ParseConfig_t1263 *, const MethodInfo*))Task_1_TrySetResult_m35309_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseConfig>::TrySetCanceled()
#define Task_1_TrySetCanceled_m37172(__this, method) (( bool (*) (Task_1_t1417 *, const MethodInfo*))Task_1_TrySetCanceled_m35311_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseConfig>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m37173(__this, ___exception, method) (( bool (*) (Task_1_t1417 *, AggregateException_t1366 *, const MethodInfo*))Task_1_TrySetException_m35313_gshared)(__this, ___exception, method)
