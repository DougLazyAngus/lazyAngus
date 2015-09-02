#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseInstallation>
struct Task_1_t6309;
// Parse.ParseInstallation
struct ParseInstallation_t1305;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseInstallation>>
struct Action_1_t9223;
// System.AggregateException
struct AggregateException_t1355;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseInstallation>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m35035(__this, method) (( void (*) (Task_1_t6309 *, const MethodInfo*))Task_1__ctor_m30997_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseInstallation>::get_Result()
#define Task_1_get_Result_m35036(__this, method) (( ParseInstallation_t1305 * (*) (Task_1_t6309 *, const MethodInfo*))Task_1_get_Result_m30998_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseInstallation>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m35037(__this, ___continuation, method) (( Task_t1227 * (*) (Task_1_t6309 *, Action_1_t9223 *, const MethodInfo*))Task_1_ContinueWith_m31000_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseInstallation>::RunContinuations()
#define Task_1_RunContinuations_m35038(__this, method) (( void (*) (Task_1_t6309 *, const MethodInfo*))Task_1_RunContinuations_m31002_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseInstallation>::TrySetResult(T)
#define Task_1_TrySetResult_m35039(__this, ___result, method) (( bool (*) (Task_1_t6309 *, ParseInstallation_t1305 *, const MethodInfo*))Task_1_TrySetResult_m31004_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseInstallation>::TrySetCanceled()
#define Task_1_TrySetCanceled_m35040(__this, method) (( bool (*) (Task_1_t6309 *, const MethodInfo*))Task_1_TrySetCanceled_m31006_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseInstallation>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m35041(__this, ___exception, method) (( bool (*) (Task_1_t6309 *, AggregateException_t1355 *, const MethodInfo*))Task_1_TrySetException_m31008_gshared)(__this, ___exception, method)
