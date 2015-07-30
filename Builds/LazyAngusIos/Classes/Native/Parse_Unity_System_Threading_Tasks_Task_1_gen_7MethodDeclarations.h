#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseConfig>
struct Task_1_t1336;
// Parse.ParseConfig
struct ParseConfig_t1180;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseConfig>>
struct Action_1_t6030;
// System.AggregateException
struct AggregateException_t1285;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseConfig>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m31693(__this, method) (( void (*) (Task_1_t1336 *, const MethodInfo*))Task_1__ctor_m29837_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseConfig>::get_Result()
#define Task_1_get_Result_m31694(__this, method) (( ParseConfig_t1180 * (*) (Task_1_t1336 *, const MethodInfo*))Task_1_get_Result_m29838_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseConfig>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m31695(__this, ___continuation, method) (( Task_t1155 * (*) (Task_1_t1336 *, Action_1_t6030 *, const MethodInfo*))Task_1_ContinueWith_m29840_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseConfig>::RunContinuations()
#define Task_1_RunContinuations_m31696(__this, method) (( void (*) (Task_1_t1336 *, const MethodInfo*))Task_1_RunContinuations_m29842_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseConfig>::TrySetResult(T)
#define Task_1_TrySetResult_m31697(__this, ___result, method) (( bool (*) (Task_1_t1336 *, ParseConfig_t1180 *, const MethodInfo*))Task_1_TrySetResult_m29844_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseConfig>::TrySetCanceled()
#define Task_1_TrySetCanceled_m31698(__this, method) (( bool (*) (Task_1_t1336 *, const MethodInfo*))Task_1_TrySetCanceled_m29846_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseConfig>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m31699(__this, ___exception, method) (( bool (*) (Task_1_t1336 *, AggregateException_t1285 *, const MethodInfo*))Task_1_TrySetException_m29848_gshared)(__this, ___exception, method)
