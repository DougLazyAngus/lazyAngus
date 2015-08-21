#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>
struct Task_1_t1536;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t1388;
// System.Threading.Tasks.Task
struct Task_t1208;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>>
struct Action_1_t9197;
// System.AggregateException
struct AggregateException_t1336;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m35123(__this, method) (( void (*) (Task_1_t1536 *, const MethodInfo*))Task_1__ctor_m30633_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::get_Result()
#define Task_1_get_Result_m35124(__this, method) (( Task_1_t1388 * (*) (Task_1_t1536 *, const MethodInfo*))Task_1_get_Result_m30634_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m35125(__this, ___continuation, method) (( Task_t1208 * (*) (Task_1_t1536 *, Action_1_t9197 *, const MethodInfo*))Task_1_ContinueWith_m30636_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::RunContinuations()
#define Task_1_RunContinuations_m35126(__this, method) (( void (*) (Task_1_t1536 *, const MethodInfo*))Task_1_RunContinuations_m30638_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::TrySetResult(T)
#define Task_1_TrySetResult_m35127(__this, ___result, method) (( bool (*) (Task_1_t1536 *, Task_1_t1388 *, const MethodInfo*))Task_1_TrySetResult_m30640_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m35128(__this, method) (( bool (*) (Task_1_t1536 *, const MethodInfo*))Task_1_TrySetCanceled_m30642_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m35129(__this, ___exception, method) (( bool (*) (Task_1_t1536 *, AggregateException_t1336 *, const MethodInfo*))Task_1_TrySetException_m30644_gshared)(__this, ___exception, method)
