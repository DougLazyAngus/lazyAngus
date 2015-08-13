#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t1390;
// Parse.ParseUser
struct ParseUser_t1305;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>
struct Action_1_t6181;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseUser>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m33174(__this, method) (( void (*) (Task_1_t1390 *, const MethodInfo*))Task_1__ctor_m30544_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseUser>::get_Result()
#define Task_1_get_Result_m7693(__this, method) (( ParseUser_t1305 * (*) (Task_1_t1390 *, const MethodInfo*))Task_1_get_Result_m30545_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseUser>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m33175(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t1390 *, Action_1_t6181 *, const MethodInfo*))Task_1_ContinueWith_m30547_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseUser>::RunContinuations()
#define Task_1_RunContinuations_m33176(__this, method) (( void (*) (Task_1_t1390 *, const MethodInfo*))Task_1_RunContinuations_m30549_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseUser>::TrySetResult(T)
#define Task_1_TrySetResult_m33177(__this, ___result, method) (( bool (*) (Task_1_t1390 *, ParseUser_t1305 *, const MethodInfo*))Task_1_TrySetResult_m30551_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseUser>::TrySetCanceled()
#define Task_1_TrySetCanceled_m33178(__this, method) (( bool (*) (Task_1_t1390 *, const MethodInfo*))Task_1_TrySetCanceled_m30553_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseUser>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m33179(__this, ___exception, method) (( bool (*) (Task_1_t1390 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m30555_gshared)(__this, ___exception, method)
