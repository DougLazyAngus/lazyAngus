#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseSession>
struct Task_1_t1428;
// Parse.ParseSession
struct ParseSession_t1324;
// System.Threading.Tasks.Task
struct Task_t1231;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseSession>>
struct Action_1_t6867;
// System.AggregateException
struct AggregateException_t1359;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseSession>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m39591(__this, method) (( void (*) (Task_1_t1428 *, const MethodInfo*))Task_1__ctor_m35245_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseSession>::get_Result()
#define Task_1_get_Result_m39592(__this, method) (( ParseSession_t1324 * (*) (Task_1_t1428 *, const MethodInfo*))Task_1_get_Result_m35246_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseSession>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m39593(__this, ___continuation, method) (( Task_t1231 * (*) (Task_1_t1428 *, Action_1_t6867 *, const MethodInfo*))Task_1_ContinueWith_m35248_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseSession>::RunContinuations()
#define Task_1_RunContinuations_m39594(__this, method) (( void (*) (Task_1_t1428 *, const MethodInfo*))Task_1_RunContinuations_m35250_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseSession>::TrySetResult(T)
#define Task_1_TrySetResult_m39595(__this, ___result, method) (( bool (*) (Task_1_t1428 *, ParseSession_t1324 *, const MethodInfo*))Task_1_TrySetResult_m35252_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseSession>::TrySetCanceled()
#define Task_1_TrySetCanceled_m39596(__this, method) (( bool (*) (Task_1_t1428 *, const MethodInfo*))Task_1_TrySetCanceled_m35254_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseSession>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m39597(__this, ___exception, method) (( bool (*) (Task_1_t1428 *, AggregateException_t1359 *, const MethodInfo*))Task_1_TrySetException_m35256_gshared)(__this, ___exception, method)
