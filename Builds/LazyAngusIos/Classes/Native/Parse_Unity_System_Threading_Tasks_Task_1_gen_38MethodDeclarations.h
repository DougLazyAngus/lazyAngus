#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseRole>
struct Task_1_t6204;
// Parse.ParseRole
struct ParseRole_t1240;
// System.Threading.Tasks.Task
struct Task_t1149;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseRole>>
struct Action_1_t9080;
// System.AggregateException
struct AggregateException_t1279;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseRole>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m34040(__this, method) (( void (*) (Task_1_t6204 *, const MethodInfo*))Task_1__ctor_m29790_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseRole>::get_Result()
#define Task_1_get_Result_m34041(__this, method) (( ParseRole_t1240 * (*) (Task_1_t6204 *, const MethodInfo*))Task_1_get_Result_m29791_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseRole>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m34042(__this, ___continuation, method) (( Task_t1149 * (*) (Task_1_t6204 *, Action_1_t9080 *, const MethodInfo*))Task_1_ContinueWith_m29793_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseRole>::RunContinuations()
#define Task_1_RunContinuations_m34043(__this, method) (( void (*) (Task_1_t6204 *, const MethodInfo*))Task_1_RunContinuations_m29795_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseRole>::TrySetResult(T)
#define Task_1_TrySetResult_m34044(__this, ___result, method) (( bool (*) (Task_1_t6204 *, ParseRole_t1240 *, const MethodInfo*))Task_1_TrySetResult_m29797_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseRole>::TrySetCanceled()
#define Task_1_TrySetCanceled_m34045(__this, method) (( bool (*) (Task_1_t6204 *, const MethodInfo*))Task_1_TrySetCanceled_m29799_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseRole>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m34046(__this, ___exception, method) (( bool (*) (Task_1_t6204 *, AggregateException_t1279 *, const MethodInfo*))Task_1_TrySetException_m29801_gshared)(__this, ___exception, method)
