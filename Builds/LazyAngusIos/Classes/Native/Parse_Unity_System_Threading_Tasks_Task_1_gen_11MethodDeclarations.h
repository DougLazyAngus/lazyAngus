#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseSession>
struct Task_1_t1424;
// Parse.ParseSession
struct ParseSession_t1320;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseSession>>
struct Action_1_t6861;
// System.AggregateException
struct AggregateException_t1355;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseSession>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m39566(__this, method) (( void (*) (Task_1_t1424 *, const MethodInfo*))Task_1__ctor_m35220_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseSession>::get_Result()
#define Task_1_get_Result_m39567(__this, method) (( ParseSession_t1320 * (*) (Task_1_t1424 *, const MethodInfo*))Task_1_get_Result_m35221_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseSession>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m39568(__this, ___continuation, method) (( Task_t1227 * (*) (Task_1_t1424 *, Action_1_t6861 *, const MethodInfo*))Task_1_ContinueWith_m35223_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseSession>::RunContinuations()
#define Task_1_RunContinuations_m39569(__this, method) (( void (*) (Task_1_t1424 *, const MethodInfo*))Task_1_RunContinuations_m35225_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseSession>::TrySetResult(T)
#define Task_1_TrySetResult_m39570(__this, ___result, method) (( bool (*) (Task_1_t1424 *, ParseSession_t1320 *, const MethodInfo*))Task_1_TrySetResult_m35227_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseSession>::TrySetCanceled()
#define Task_1_TrySetCanceled_m39571(__this, method) (( bool (*) (Task_1_t1424 *, const MethodInfo*))Task_1_TrySetCanceled_m35229_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseSession>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m39572(__this, ___exception, method) (( bool (*) (Task_1_t1424 *, AggregateException_t1355 *, const MethodInfo*))Task_1_TrySetException_m35231_gshared)(__this, ___exception, method)
