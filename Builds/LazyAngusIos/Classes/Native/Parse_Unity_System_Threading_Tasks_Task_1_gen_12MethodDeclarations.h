#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseSession>>
struct Task_1_t1527;
// System.Threading.Tasks.Task`1<Parse.ParseSession>
struct Task_1_t1405;
// System.Threading.Tasks.Task
struct Task_t1208;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseSession>>>
struct Action_1_t9192;
// System.AggregateException
struct AggregateException_t1336;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseSession>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m34981(__this, method) (( void (*) (Task_1_t1527 *, const MethodInfo*))Task_1__ctor_m30633_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseSession>>::get_Result()
#define Task_1_get_Result_m34982(__this, method) (( Task_1_t1405 * (*) (Task_1_t1527 *, const MethodInfo*))Task_1_get_Result_m30634_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseSession>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m34983(__this, ___continuation, method) (( Task_t1208 * (*) (Task_1_t1527 *, Action_1_t9192 *, const MethodInfo*))Task_1_ContinueWith_m30636_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseSession>>::RunContinuations()
#define Task_1_RunContinuations_m34984(__this, method) (( void (*) (Task_1_t1527 *, const MethodInfo*))Task_1_RunContinuations_m30638_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseSession>>::TrySetResult(T)
#define Task_1_TrySetResult_m34985(__this, ___result, method) (( bool (*) (Task_1_t1527 *, Task_1_t1405 *, const MethodInfo*))Task_1_TrySetResult_m30640_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseSession>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m34986(__this, method) (( bool (*) (Task_1_t1527 *, const MethodInfo*))Task_1_TrySetCanceled_m30642_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseSession>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m34987(__this, ___exception, method) (( bool (*) (Task_1_t1527 *, AggregateException_t1336 *, const MethodInfo*))Task_1_TrySetException_m30644_gshared)(__this, ___exception, method)
