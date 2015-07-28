#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseConfig>
struct Task_1_t1330;
// Parse.ParseConfig
struct ParseConfig_t1174;
// System.Threading.Tasks.Task
struct Task_t1149;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseConfig>>
struct Action_1_t6023;
// System.AggregateException
struct AggregateException_t1279;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseConfig>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m31646(__this, method) (( void (*) (Task_1_t1330 *, const MethodInfo*))Task_1__ctor_m29790_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseConfig>::get_Result()
#define Task_1_get_Result_m31647(__this, method) (( ParseConfig_t1174 * (*) (Task_1_t1330 *, const MethodInfo*))Task_1_get_Result_m29791_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseConfig>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m31648(__this, ___continuation, method) (( Task_t1149 * (*) (Task_1_t1330 *, Action_1_t6023 *, const MethodInfo*))Task_1_ContinueWith_m29793_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseConfig>::RunContinuations()
#define Task_1_RunContinuations_m31649(__this, method) (( void (*) (Task_1_t1330 *, const MethodInfo*))Task_1_RunContinuations_m29795_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseConfig>::TrySetResult(T)
#define Task_1_TrySetResult_m31650(__this, ___result, method) (( bool (*) (Task_1_t1330 *, ParseConfig_t1174 *, const MethodInfo*))Task_1_TrySetResult_m29797_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseConfig>::TrySetCanceled()
#define Task_1_TrySetCanceled_m31651(__this, method) (( bool (*) (Task_1_t1330 *, const MethodInfo*))Task_1_TrySetCanceled_m29799_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseConfig>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m31652(__this, ___exception, method) (( bool (*) (Task_1_t1330 *, AggregateException_t1279 *, const MethodInfo*))Task_1_TrySetException_m29801_gshared)(__this, ___exception, method)
