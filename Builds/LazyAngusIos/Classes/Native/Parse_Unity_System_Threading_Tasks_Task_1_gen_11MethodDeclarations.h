#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseSession>
struct Task_1_t1356;
// Parse.ParseSession
struct ParseSession_t1251;
// System.Threading.Tasks.Task
struct Task_t1157;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseSession>>
struct Action_1_t6220;
// System.AggregateException
struct AggregateException_t1287;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseSession>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m34183(__this, method) (( void (*) (Task_1_t1356 *, const MethodInfo*))Task_1__ctor_m29853_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseSession>::get_Result()
#define Task_1_get_Result_m34184(__this, method) (( ParseSession_t1251 * (*) (Task_1_t1356 *, const MethodInfo*))Task_1_get_Result_m29854_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseSession>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m34185(__this, ___continuation, method) (( Task_t1157 * (*) (Task_1_t1356 *, Action_1_t6220 *, const MethodInfo*))Task_1_ContinueWith_m29856_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseSession>::RunContinuations()
#define Task_1_RunContinuations_m34186(__this, method) (( void (*) (Task_1_t1356 *, const MethodInfo*))Task_1_RunContinuations_m29858_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseSession>::TrySetResult(T)
#define Task_1_TrySetResult_m34187(__this, ___result, method) (( bool (*) (Task_1_t1356 *, ParseSession_t1251 *, const MethodInfo*))Task_1_TrySetResult_m29860_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseSession>::TrySetCanceled()
#define Task_1_TrySetCanceled_m34188(__this, method) (( bool (*) (Task_1_t1356 *, const MethodInfo*))Task_1_TrySetCanceled_m29862_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseSession>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m34189(__this, ___exception, method) (( bool (*) (Task_1_t1356 *, AggregateException_t1287 *, const MethodInfo*))Task_1_TrySetException_m29864_gshared)(__this, ___exception, method)
