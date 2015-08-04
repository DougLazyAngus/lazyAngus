#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t1320;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t1157;
// System.Action`1<System.Threading.Tasks.Task`1<System.String>>
struct Action_1_t1460;
// System.AggregateException
struct AggregateException_t1287;

// System.Void System.Threading.Tasks.Task`1<System.String>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m29852(__this, method) (( void (*) (Task_1_t1320 *, const MethodInfo*))Task_1__ctor_m29853_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.String>::get_Result()
#define Task_1_get_Result_m7397(__this, method) (( String_t* (*) (Task_1_t1320 *, const MethodInfo*))Task_1_get_Result_m29854_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.String>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m29855(__this, ___continuation, method) (( Task_t1157 * (*) (Task_1_t1320 *, Action_1_t1460 *, const MethodInfo*))Task_1_ContinueWith_m29856_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.String>::RunContinuations()
#define Task_1_RunContinuations_m29857(__this, method) (( void (*) (Task_1_t1320 *, const MethodInfo*))Task_1_RunContinuations_m29858_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.String>::TrySetResult(T)
#define Task_1_TrySetResult_m29859(__this, ___result, method) (( bool (*) (Task_1_t1320 *, String_t*, const MethodInfo*))Task_1_TrySetResult_m29860_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.String>::TrySetCanceled()
#define Task_1_TrySetCanceled_m29861(__this, method) (( bool (*) (Task_1_t1320 *, const MethodInfo*))Task_1_TrySetCanceled_m29862_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.String>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m29863(__this, ___exception, method) (( bool (*) (Task_1_t1320 *, AggregateException_t1287 *, const MethodInfo*))Task_1_TrySetException_m29864_gshared)(__this, ___exception, method)
