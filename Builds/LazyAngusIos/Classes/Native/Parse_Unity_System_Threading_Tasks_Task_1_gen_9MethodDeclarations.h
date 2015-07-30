#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t1337;
// Parse.ParseUser
struct ParseUser_t1251;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>
struct Action_1_t6106;
// System.AggregateException
struct AggregateException_t1285;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseUser>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m32467(__this, method) (( void (*) (Task_1_t1337 *, const MethodInfo*))Task_1__ctor_m29837_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseUser>::get_Result()
#define Task_1_get_Result_m7421(__this, method) (( ParseUser_t1251 * (*) (Task_1_t1337 *, const MethodInfo*))Task_1_get_Result_m29838_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseUser>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m32468(__this, ___continuation, method) (( Task_t1155 * (*) (Task_1_t1337 *, Action_1_t6106 *, const MethodInfo*))Task_1_ContinueWith_m29840_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseUser>::RunContinuations()
#define Task_1_RunContinuations_m32469(__this, method) (( void (*) (Task_1_t1337 *, const MethodInfo*))Task_1_RunContinuations_m29842_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseUser>::TrySetResult(T)
#define Task_1_TrySetResult_m32470(__this, ___result, method) (( bool (*) (Task_1_t1337 *, ParseUser_t1251 *, const MethodInfo*))Task_1_TrySetResult_m29844_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseUser>::TrySetCanceled()
#define Task_1_TrySetCanceled_m32471(__this, method) (( bool (*) (Task_1_t1337 *, const MethodInfo*))Task_1_TrySetCanceled_m29846_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseUser>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m32472(__this, ___exception, method) (( bool (*) (Task_1_t1337 *, AggregateException_t1285 *, const MethodInfo*))Task_1_TrySetException_m29848_gshared)(__this, ___exception, method)
