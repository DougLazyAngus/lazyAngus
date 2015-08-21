#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseConfig>
struct Task_1_t1387;
// Parse.ParseConfig
struct ParseConfig_t1233;
// System.Threading.Tasks.Task
struct Task_t1208;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseConfig>>
struct Action_1_t6109;
// System.AggregateException
struct AggregateException_t1336;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseConfig>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m32489(__this, method) (( void (*) (Task_1_t1387 *, const MethodInfo*))Task_1__ctor_m30633_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseConfig>::get_Result()
#define Task_1_get_Result_m32490(__this, method) (( ParseConfig_t1233 * (*) (Task_1_t1387 *, const MethodInfo*))Task_1_get_Result_m30634_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseConfig>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m32491(__this, ___continuation, method) (( Task_t1208 * (*) (Task_1_t1387 *, Action_1_t6109 *, const MethodInfo*))Task_1_ContinueWith_m30636_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseConfig>::RunContinuations()
#define Task_1_RunContinuations_m32492(__this, method) (( void (*) (Task_1_t1387 *, const MethodInfo*))Task_1_RunContinuations_m30638_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseConfig>::TrySetResult(T)
#define Task_1_TrySetResult_m32493(__this, ___result, method) (( bool (*) (Task_1_t1387 *, ParseConfig_t1233 *, const MethodInfo*))Task_1_TrySetResult_m30640_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseConfig>::TrySetCanceled()
#define Task_1_TrySetCanceled_m32494(__this, method) (( bool (*) (Task_1_t1387 *, const MethodInfo*))Task_1_TrySetCanceled_m30642_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseConfig>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m32495(__this, ___exception, method) (( bool (*) (Task_1_t1387 *, AggregateException_t1336 *, const MethodInfo*))Task_1_TrySetException_m30644_gshared)(__this, ___exception, method)
