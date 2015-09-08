#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseInstallation>
struct Task_1_t6848;
// Parse.ParseInstallation
struct ParseInstallation_t1309;
// System.Threading.Tasks.Task
struct Task_t1231;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseInstallation>>
struct Action_1_t9816;
// System.AggregateException
struct AggregateException_t1359;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseInstallation>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m39306(__this, method) (( void (*) (Task_1_t6848 *, const MethodInfo*))Task_1__ctor_m35245_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseInstallation>::get_Result()
#define Task_1_get_Result_m39307(__this, method) (( ParseInstallation_t1309 * (*) (Task_1_t6848 *, const MethodInfo*))Task_1_get_Result_m35246_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseInstallation>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m39308(__this, ___continuation, method) (( Task_t1231 * (*) (Task_1_t6848 *, Action_1_t9816 *, const MethodInfo*))Task_1_ContinueWith_m35248_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseInstallation>::RunContinuations()
#define Task_1_RunContinuations_m39309(__this, method) (( void (*) (Task_1_t6848 *, const MethodInfo*))Task_1_RunContinuations_m35250_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseInstallation>::TrySetResult(T)
#define Task_1_TrySetResult_m39310(__this, ___result, method) (( bool (*) (Task_1_t6848 *, ParseInstallation_t1309 *, const MethodInfo*))Task_1_TrySetResult_m35252_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseInstallation>::TrySetCanceled()
#define Task_1_TrySetCanceled_m39311(__this, method) (( bool (*) (Task_1_t6848 *, const MethodInfo*))Task_1_TrySetCanceled_m35254_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseInstallation>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m39312(__this, ___exception, method) (( bool (*) (Task_1_t6848 *, AggregateException_t1359 *, const MethodInfo*))Task_1_TrySetException_m35256_gshared)(__this, ___exception, method)
