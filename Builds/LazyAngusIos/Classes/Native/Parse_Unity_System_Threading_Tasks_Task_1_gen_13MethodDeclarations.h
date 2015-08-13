#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>
struct Task_1_t1538;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t1390;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>>
struct Action_1_t9189;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m35034(__this, method) (( void (*) (Task_1_t1538 *, const MethodInfo*))Task_1__ctor_m30544_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::get_Result()
#define Task_1_get_Result_m35035(__this, method) (( Task_1_t1390 * (*) (Task_1_t1538 *, const MethodInfo*))Task_1_get_Result_m30545_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m35036(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t1538 *, Action_1_t9189 *, const MethodInfo*))Task_1_ContinueWith_m30547_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::RunContinuations()
#define Task_1_RunContinuations_m35037(__this, method) (( void (*) (Task_1_t1538 *, const MethodInfo*))Task_1_RunContinuations_m30549_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::TrySetResult(T)
#define Task_1_TrySetResult_m35038(__this, ___result, method) (( bool (*) (Task_1_t1538 *, Task_1_t1390 *, const MethodInfo*))Task_1_TrySetResult_m30551_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m35039(__this, method) (( bool (*) (Task_1_t1538 *, const MethodInfo*))Task_1_TrySetCanceled_m30553_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m35040(__this, ___exception, method) (( bool (*) (Task_1_t1538 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m30555_gshared)(__this, ___exception, method)
