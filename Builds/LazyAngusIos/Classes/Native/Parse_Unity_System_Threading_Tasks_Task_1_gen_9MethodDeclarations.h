#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t1407;
// Parse.ParseUser
struct ParseUser_t1322;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>
struct Action_1_t6217;
// System.AggregateException
struct AggregateException_t1355;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseUser>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m33627(__this, method) (( void (*) (Task_1_t1407 *, const MethodInfo*))Task_1__ctor_m30997_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseUser>::get_Result()
#define Task_1_get_Result_m7846(__this, method) (( ParseUser_t1322 * (*) (Task_1_t1407 *, const MethodInfo*))Task_1_get_Result_m30998_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseUser>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m33628(__this, ___continuation, method) (( Task_t1227 * (*) (Task_1_t1407 *, Action_1_t6217 *, const MethodInfo*))Task_1_ContinueWith_m31000_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseUser>::RunContinuations()
#define Task_1_RunContinuations_m33629(__this, method) (( void (*) (Task_1_t1407 *, const MethodInfo*))Task_1_RunContinuations_m31002_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseUser>::TrySetResult(T)
#define Task_1_TrySetResult_m33630(__this, ___result, method) (( bool (*) (Task_1_t1407 *, ParseUser_t1322 *, const MethodInfo*))Task_1_TrySetResult_m31004_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseUser>::TrySetCanceled()
#define Task_1_TrySetCanceled_m33631(__this, method) (( bool (*) (Task_1_t1407 *, const MethodInfo*))Task_1_TrySetCanceled_m31006_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseUser>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m33632(__this, ___exception, method) (( bool (*) (Task_1_t1407 *, AggregateException_t1355 *, const MethodInfo*))Task_1_TrySetException_m31008_gshared)(__this, ___exception, method)
