#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t1339;
// Parse.ParseUser
struct ParseUser_t1253;
// System.Threading.Tasks.Task
struct Task_t1157;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>
struct Action_1_t6108;
// System.AggregateException
struct AggregateException_t1287;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseUser>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m32483(__this, method) (( void (*) (Task_1_t1339 *, const MethodInfo*))Task_1__ctor_m29853_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseUser>::get_Result()
#define Task_1_get_Result_m7434(__this, method) (( ParseUser_t1253 * (*) (Task_1_t1339 *, const MethodInfo*))Task_1_get_Result_m29854_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseUser>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m32484(__this, ___continuation, method) (( Task_t1157 * (*) (Task_1_t1339 *, Action_1_t6108 *, const MethodInfo*))Task_1_ContinueWith_m29856_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseUser>::RunContinuations()
#define Task_1_RunContinuations_m32485(__this, method) (( void (*) (Task_1_t1339 *, const MethodInfo*))Task_1_RunContinuations_m29858_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseUser>::TrySetResult(T)
#define Task_1_TrySetResult_m32486(__this, ___result, method) (( bool (*) (Task_1_t1339 *, ParseUser_t1253 *, const MethodInfo*))Task_1_TrySetResult_m29860_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseUser>::TrySetCanceled()
#define Task_1_TrySetCanceled_m32487(__this, method) (( bool (*) (Task_1_t1339 *, const MethodInfo*))Task_1_TrySetCanceled_m29862_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseUser>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m32488(__this, ___exception, method) (( bool (*) (Task_1_t1339 *, AggregateException_t1287 *, const MethodInfo*))Task_1_TrySetException_m29864_gshared)(__this, ___exception, method)
