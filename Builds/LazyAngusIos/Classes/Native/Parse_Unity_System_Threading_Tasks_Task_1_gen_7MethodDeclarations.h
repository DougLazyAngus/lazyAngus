#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseConfig>
struct Task_1_t1340;
// Parse.ParseConfig
struct ParseConfig_t1184;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseConfig>>
struct Action_1_t6034;
// System.AggregateException
struct AggregateException_t1289;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseConfig>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m31724(__this, method) (( void (*) (Task_1_t1340 *, const MethodInfo*))Task_1__ctor_m29868_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseConfig>::get_Result()
#define Task_1_get_Result_m31725(__this, method) (( ParseConfig_t1184 * (*) (Task_1_t1340 *, const MethodInfo*))Task_1_get_Result_m29869_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseConfig>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m31726(__this, ___continuation, method) (( Task_t1159 * (*) (Task_1_t1340 *, Action_1_t6034 *, const MethodInfo*))Task_1_ContinueWith_m29871_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseConfig>::RunContinuations()
#define Task_1_RunContinuations_m31727(__this, method) (( void (*) (Task_1_t1340 *, const MethodInfo*))Task_1_RunContinuations_m29873_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseConfig>::TrySetResult(T)
#define Task_1_TrySetResult_m31728(__this, ___result, method) (( bool (*) (Task_1_t1340 *, ParseConfig_t1184 *, const MethodInfo*))Task_1_TrySetResult_m29875_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseConfig>::TrySetCanceled()
#define Task_1_TrySetCanceled_m31729(__this, method) (( bool (*) (Task_1_t1340 *, const MethodInfo*))Task_1_TrySetCanceled_m29877_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseConfig>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m31730(__this, ___exception, method) (( bool (*) (Task_1_t1340 *, AggregateException_t1289 *, const MethodInfo*))Task_1_TrySetException_m29879_gshared)(__this, ___exception, method)
