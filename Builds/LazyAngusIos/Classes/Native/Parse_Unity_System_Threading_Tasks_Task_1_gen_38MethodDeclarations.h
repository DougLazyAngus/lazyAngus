#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseRole>
struct Task_1_t6285;
// Parse.ParseRole
struct ParseRole_t1300;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseRole>>
struct Action_1_t9180;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseRole>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m34784(__this, method) (( void (*) (Task_1_t6285 *, const MethodInfo*))Task_1__ctor_m30541_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseRole>::get_Result()
#define Task_1_get_Result_m34785(__this, method) (( ParseRole_t1300 * (*) (Task_1_t6285 *, const MethodInfo*))Task_1_get_Result_m30542_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseRole>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m34786(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t6285 *, Action_1_t9180 *, const MethodInfo*))Task_1_ContinueWith_m30544_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseRole>::RunContinuations()
#define Task_1_RunContinuations_m34787(__this, method) (( void (*) (Task_1_t6285 *, const MethodInfo*))Task_1_RunContinuations_m30546_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseRole>::TrySetResult(T)
#define Task_1_TrySetResult_m34788(__this, ___result, method) (( bool (*) (Task_1_t6285 *, ParseRole_t1300 *, const MethodInfo*))Task_1_TrySetResult_m30548_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseRole>::TrySetCanceled()
#define Task_1_TrySetCanceled_m34789(__this, method) (( bool (*) (Task_1_t6285 *, const MethodInfo*))Task_1_TrySetCanceled_m30550_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseRole>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m34790(__this, ___exception, method) (( bool (*) (Task_1_t6285 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m30552_gshared)(__this, ___exception, method)
