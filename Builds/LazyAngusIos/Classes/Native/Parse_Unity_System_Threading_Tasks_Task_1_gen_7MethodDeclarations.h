#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseConfig>
struct Task_1_t1389;
// Parse.ParseConfig
struct ParseConfig_t1235;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseConfig>>
struct Action_1_t6105;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseConfig>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m32397(__this, method) (( void (*) (Task_1_t1389 *, const MethodInfo*))Task_1__ctor_m30541_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseConfig>::get_Result()
#define Task_1_get_Result_m32398(__this, method) (( ParseConfig_t1235 * (*) (Task_1_t1389 *, const MethodInfo*))Task_1_get_Result_m30542_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseConfig>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m32399(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t1389 *, Action_1_t6105 *, const MethodInfo*))Task_1_ContinueWith_m30544_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseConfig>::RunContinuations()
#define Task_1_RunContinuations_m32400(__this, method) (( void (*) (Task_1_t1389 *, const MethodInfo*))Task_1_RunContinuations_m30546_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseConfig>::TrySetResult(T)
#define Task_1_TrySetResult_m32401(__this, ___result, method) (( bool (*) (Task_1_t1389 *, ParseConfig_t1235 *, const MethodInfo*))Task_1_TrySetResult_m30548_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseConfig>::TrySetCanceled()
#define Task_1_TrySetCanceled_m32402(__this, method) (( bool (*) (Task_1_t1389 *, const MethodInfo*))Task_1_TrySetCanceled_m30550_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseConfig>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m32403(__this, ___exception, method) (( bool (*) (Task_1_t1389 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m30552_gshared)(__this, ___exception, method)
