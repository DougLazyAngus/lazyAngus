#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseInstallation>
struct Task_1_t6203;
// Parse.ParseInstallation
struct ParseInstallation_t1238;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseInstallation>>
struct Action_1_t9086;
// System.AggregateException
struct AggregateException_t1289;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseInstallation>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m33910(__this, method) (( void (*) (Task_1_t6203 *, const MethodInfo*))Task_1__ctor_m29865_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseInstallation>::get_Result()
#define Task_1_get_Result_m33911(__this, method) (( ParseInstallation_t1238 * (*) (Task_1_t6203 *, const MethodInfo*))Task_1_get_Result_m29866_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseInstallation>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m33912(__this, ___continuation, method) (( Task_t1159 * (*) (Task_1_t6203 *, Action_1_t9086 *, const MethodInfo*))Task_1_ContinueWith_m29868_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseInstallation>::RunContinuations()
#define Task_1_RunContinuations_m33913(__this, method) (( void (*) (Task_1_t6203 *, const MethodInfo*))Task_1_RunContinuations_m29870_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseInstallation>::TrySetResult(T)
#define Task_1_TrySetResult_m33914(__this, ___result, method) (( bool (*) (Task_1_t6203 *, ParseInstallation_t1238 *, const MethodInfo*))Task_1_TrySetResult_m29872_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseInstallation>::TrySetCanceled()
#define Task_1_TrySetCanceled_m33915(__this, method) (( bool (*) (Task_1_t6203 *, const MethodInfo*))Task_1_TrySetCanceled_m29874_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseInstallation>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m33916(__this, ___exception, method) (( bool (*) (Task_1_t6203 *, AggregateException_t1289 *, const MethodInfo*))Task_1_TrySetException_m29876_gshared)(__this, ___exception, method)
