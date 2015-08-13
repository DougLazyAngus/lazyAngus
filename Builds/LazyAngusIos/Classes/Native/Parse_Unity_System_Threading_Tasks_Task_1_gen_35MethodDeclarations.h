#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseInstallation>
struct Task_1_t6273;
// Parse.ParseInstallation
struct ParseInstallation_t1288;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseInstallation>>
struct Action_1_t9175;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseInstallation>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m34582(__this, method) (( void (*) (Task_1_t6273 *, const MethodInfo*))Task_1__ctor_m30544_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseInstallation>::get_Result()
#define Task_1_get_Result_m34583(__this, method) (( ParseInstallation_t1288 * (*) (Task_1_t6273 *, const MethodInfo*))Task_1_get_Result_m30545_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseInstallation>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m34584(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t6273 *, Action_1_t9175 *, const MethodInfo*))Task_1_ContinueWith_m30547_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseInstallation>::RunContinuations()
#define Task_1_RunContinuations_m34585(__this, method) (( void (*) (Task_1_t6273 *, const MethodInfo*))Task_1_RunContinuations_m30549_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseInstallation>::TrySetResult(T)
#define Task_1_TrySetResult_m34586(__this, ___result, method) (( bool (*) (Task_1_t6273 *, ParseInstallation_t1288 *, const MethodInfo*))Task_1_TrySetResult_m30551_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseInstallation>::TrySetCanceled()
#define Task_1_TrySetCanceled_m34587(__this, method) (( bool (*) (Task_1_t6273 *, const MethodInfo*))Task_1_TrySetCanceled_m30553_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseInstallation>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m34588(__this, ___exception, method) (( bool (*) (Task_1_t6273 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m30555_gshared)(__this, ___exception, method)
