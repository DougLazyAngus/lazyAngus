﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseRole>
struct Task_1_t6292;
// Parse.ParseRole
struct ParseRole_t1301;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseRole>>
struct Action_1_t9191;
// System.AggregateException
struct AggregateException_t1339;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseRole>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m34908(__this, method) (( void (*) (Task_1_t6292 *, const MethodInfo*))Task_1__ctor_m30665_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseRole>::get_Result()
#define Task_1_get_Result_m34909(__this, method) (( ParseRole_t1301 * (*) (Task_1_t6292 *, const MethodInfo*))Task_1_get_Result_m30666_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseRole>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m34910(__this, ___continuation, method) (( Task_t1211 * (*) (Task_1_t6292 *, Action_1_t9191 *, const MethodInfo*))Task_1_ContinueWith_m30668_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseRole>::RunContinuations()
#define Task_1_RunContinuations_m34911(__this, method) (( void (*) (Task_1_t6292 *, const MethodInfo*))Task_1_RunContinuations_m30670_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseRole>::TrySetResult(T)
#define Task_1_TrySetResult_m34912(__this, ___result, method) (( bool (*) (Task_1_t6292 *, ParseRole_t1301 *, const MethodInfo*))Task_1_TrySetResult_m30672_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseRole>::TrySetCanceled()
#define Task_1_TrySetCanceled_m34913(__this, method) (( bool (*) (Task_1_t6292 *, const MethodInfo*))Task_1_TrySetCanceled_m30674_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseRole>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m34914(__this, ___exception, method) (( bool (*) (Task_1_t6292 *, AggregateException_t1339 *, const MethodInfo*))Task_1_TrySetException_m30676_gshared)(__this, ___exception, method)
