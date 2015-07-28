#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseInstallation>
struct Task_1_t6192;
// Parse.ParseInstallation
struct ParseInstallation_t1228;
// System.Threading.Tasks.Task
struct Task_t1149;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseInstallation>>
struct Action_1_t9075;
// System.AggregateException
struct AggregateException_t1279;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseInstallation>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m33835(__this, method) (( void (*) (Task_1_t6192 *, const MethodInfo*))Task_1__ctor_m29790_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseInstallation>::get_Result()
#define Task_1_get_Result_m33836(__this, method) (( ParseInstallation_t1228 * (*) (Task_1_t6192 *, const MethodInfo*))Task_1_get_Result_m29791_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseInstallation>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m33837(__this, ___continuation, method) (( Task_t1149 * (*) (Task_1_t6192 *, Action_1_t9075 *, const MethodInfo*))Task_1_ContinueWith_m29793_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseInstallation>::RunContinuations()
#define Task_1_RunContinuations_m33838(__this, method) (( void (*) (Task_1_t6192 *, const MethodInfo*))Task_1_RunContinuations_m29795_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseInstallation>::TrySetResult(T)
#define Task_1_TrySetResult_m33839(__this, ___result, method) (( bool (*) (Task_1_t6192 *, ParseInstallation_t1228 *, const MethodInfo*))Task_1_TrySetResult_m29797_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseInstallation>::TrySetCanceled()
#define Task_1_TrySetCanceled_m33840(__this, method) (( bool (*) (Task_1_t6192 *, const MethodInfo*))Task_1_TrySetCanceled_m29799_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseInstallation>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m33841(__this, ___exception, method) (( bool (*) (Task_1_t6192 *, AggregateException_t1279 *, const MethodInfo*))Task_1_TrySetException_m29801_gshared)(__this, ___exception, method)
