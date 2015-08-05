#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseRole>
struct Task_1_t6215;
// Parse.ParseRole
struct ParseRole_t1250;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseRole>>
struct Action_1_t9091;
// System.AggregateException
struct AggregateException_t1289;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseRole>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m34115(__this, method) (( void (*) (Task_1_t6215 *, const MethodInfo*))Task_1__ctor_m29865_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseRole>::get_Result()
#define Task_1_get_Result_m34116(__this, method) (( ParseRole_t1250 * (*) (Task_1_t6215 *, const MethodInfo*))Task_1_get_Result_m29866_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseRole>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m34117(__this, ___continuation, method) (( Task_t1159 * (*) (Task_1_t6215 *, Action_1_t9091 *, const MethodInfo*))Task_1_ContinueWith_m29868_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseRole>::RunContinuations()
#define Task_1_RunContinuations_m34118(__this, method) (( void (*) (Task_1_t6215 *, const MethodInfo*))Task_1_RunContinuations_m29870_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseRole>::TrySetResult(T)
#define Task_1_TrySetResult_m34119(__this, ___result, method) (( bool (*) (Task_1_t6215 *, ParseRole_t1250 *, const MethodInfo*))Task_1_TrySetResult_m29872_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseRole>::TrySetCanceled()
#define Task_1_TrySetCanceled_m34120(__this, method) (( bool (*) (Task_1_t6215 *, const MethodInfo*))Task_1_TrySetCanceled_m29874_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseRole>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m34121(__this, ___exception, method) (( bool (*) (Task_1_t6215 *, AggregateException_t1289 *, const MethodInfo*))Task_1_TrySetException_m29876_gshared)(__this, ___exception, method)
