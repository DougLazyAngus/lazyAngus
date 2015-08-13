#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t1371;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<System.String>>
struct Action_1_t1511;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<System.String>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m30543(__this, method) (( void (*) (Task_1_t1371 *, const MethodInfo*))Task_1__ctor_m30544_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.String>::get_Result()
#define Task_1_get_Result_m7656(__this, method) (( String_t* (*) (Task_1_t1371 *, const MethodInfo*))Task_1_get_Result_m30545_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.String>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m30546(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t1371 *, Action_1_t1511 *, const MethodInfo*))Task_1_ContinueWith_m30547_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.String>::RunContinuations()
#define Task_1_RunContinuations_m30548(__this, method) (( void (*) (Task_1_t1371 *, const MethodInfo*))Task_1_RunContinuations_m30549_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.String>::TrySetResult(T)
#define Task_1_TrySetResult_m30550(__this, ___result, method) (( bool (*) (Task_1_t1371 *, String_t*, const MethodInfo*))Task_1_TrySetResult_m30551_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.String>::TrySetCanceled()
#define Task_1_TrySetCanceled_m30552(__this, method) (( bool (*) (Task_1_t1371 *, const MethodInfo*))Task_1_TrySetCanceled_m30553_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.String>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m30554(__this, ___exception, method) (( bool (*) (Task_1_t1371 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m30555_gshared)(__this, ___exception, method)
