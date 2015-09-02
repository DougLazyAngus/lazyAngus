#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>
struct Task_1_t2442;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]
struct IEnumerable_1U5BU5D_t2461;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>>
struct Action_1_t6184;
// System.AggregateException
struct AggregateException_t1355;

// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m33352(__this, method) (( void (*) (Task_1_t2442 *, const MethodInfo*))Task_1__ctor_m30997_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>::get_Result()
#define Task_1_get_Result_m33353(__this, method) (( IEnumerable_1U5BU5D_t2461* (*) (Task_1_t2442 *, const MethodInfo*))Task_1_get_Result_m30998_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m33354(__this, ___continuation, method) (( Task_t1227 * (*) (Task_1_t2442 *, Action_1_t6184 *, const MethodInfo*))Task_1_ContinueWith_m31000_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>::RunContinuations()
#define Task_1_RunContinuations_m33355(__this, method) (( void (*) (Task_1_t2442 *, const MethodInfo*))Task_1_RunContinuations_m31002_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>::TrySetResult(T)
#define Task_1_TrySetResult_m33356(__this, ___result, method) (( bool (*) (Task_1_t2442 *, IEnumerable_1U5BU5D_t2461*, const MethodInfo*))Task_1_TrySetResult_m31004_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>::TrySetCanceled()
#define Task_1_TrySetCanceled_m33357(__this, method) (( bool (*) (Task_1_t2442 *, const MethodInfo*))Task_1_TrySetCanceled_m31006_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m33358(__this, ___exception, method) (( bool (*) (Task_1_t2442 *, AggregateException_t1355 *, const MethodInfo*))Task_1_TrySetException_m31008_gshared)(__this, ___exception, method)
