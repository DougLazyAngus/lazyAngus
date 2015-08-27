#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>
struct Task_1_t1539;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t1391;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>>
struct Action_1_t9200;
// System.AggregateException
struct AggregateException_t1339;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m35155(__this, method) (( void (*) (Task_1_t1539 *, const MethodInfo*))Task_1__ctor_m30665_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::get_Result()
#define Task_1_get_Result_m35156(__this, method) (( Task_1_t1391 * (*) (Task_1_t1539 *, const MethodInfo*))Task_1_get_Result_m30666_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m35157(__this, ___continuation, method) (( Task_t1211 * (*) (Task_1_t1539 *, Action_1_t9200 *, const MethodInfo*))Task_1_ContinueWith_m30668_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::RunContinuations()
#define Task_1_RunContinuations_m35158(__this, method) (( void (*) (Task_1_t1539 *, const MethodInfo*))Task_1_RunContinuations_m30670_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::TrySetResult(T)
#define Task_1_TrySetResult_m35159(__this, ___result, method) (( bool (*) (Task_1_t1539 *, Task_1_t1391 *, const MethodInfo*))Task_1_TrySetResult_m30672_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m35160(__this, method) (( bool (*) (Task_1_t1539 *, const MethodInfo*))Task_1_TrySetCanceled_m30674_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m35161(__this, ___exception, method) (( bool (*) (Task_1_t1539 *, AggregateException_t1339 *, const MethodInfo*))Task_1_TrySetException_m30676_gshared)(__this, ___exception, method)
