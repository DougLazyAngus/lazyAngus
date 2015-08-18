#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>
struct Task_1_t2425;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]
struct IEnumerable_1U5BU5D_t2444;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>>
struct Action_1_t6148;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m32896(__this, method) (( void (*) (Task_1_t2425 *, const MethodInfo*))Task_1__ctor_m30541_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>::get_Result()
#define Task_1_get_Result_m32897(__this, method) (( IEnumerable_1U5BU5D_t2444* (*) (Task_1_t2425 *, const MethodInfo*))Task_1_get_Result_m30542_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m32898(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t2425 *, Action_1_t6148 *, const MethodInfo*))Task_1_ContinueWith_m30544_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>::RunContinuations()
#define Task_1_RunContinuations_m32899(__this, method) (( void (*) (Task_1_t2425 *, const MethodInfo*))Task_1_RunContinuations_m30546_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>::TrySetResult(T)
#define Task_1_TrySetResult_m32900(__this, ___result, method) (( bool (*) (Task_1_t2425 *, IEnumerable_1U5BU5D_t2444*, const MethodInfo*))Task_1_TrySetResult_m30548_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>::TrySetCanceled()
#define Task_1_TrySetCanceled_m32901(__this, method) (( bool (*) (Task_1_t2425 *, const MethodInfo*))Task_1_TrySetCanceled_m30550_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m32902(__this, ___exception, method) (( bool (*) (Task_1_t2425 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m30552_gshared)(__this, ___exception, method)
