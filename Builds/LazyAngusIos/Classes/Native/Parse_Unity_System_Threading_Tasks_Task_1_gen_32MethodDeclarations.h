#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>
struct Task_1_t2426;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]
struct IEnumerable_1U5BU5D_t2445;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>>
struct Action_1_t6155;
// System.AggregateException
struct AggregateException_t1339;

// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m33020(__this, method) (( void (*) (Task_1_t2426 *, const MethodInfo*))Task_1__ctor_m30665_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>::get_Result()
#define Task_1_get_Result_m33021(__this, method) (( IEnumerable_1U5BU5D_t2445* (*) (Task_1_t2426 *, const MethodInfo*))Task_1_get_Result_m30666_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m33022(__this, ___continuation, method) (( Task_t1211 * (*) (Task_1_t2426 *, Action_1_t6155 *, const MethodInfo*))Task_1_ContinueWith_m30668_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>::RunContinuations()
#define Task_1_RunContinuations_m33023(__this, method) (( void (*) (Task_1_t2426 *, const MethodInfo*))Task_1_RunContinuations_m30670_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>::TrySetResult(T)
#define Task_1_TrySetResult_m33024(__this, ___result, method) (( bool (*) (Task_1_t2426 *, IEnumerable_1U5BU5D_t2445*, const MethodInfo*))Task_1_TrySetResult_m30672_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>::TrySetCanceled()
#define Task_1_TrySetCanceled_m33025(__this, method) (( bool (*) (Task_1_t2426 *, const MethodInfo*))Task_1_TrySetCanceled_m30674_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>[]>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m33026(__this, ___exception, method) (( bool (*) (Task_1_t2426 *, AggregateException_t1339 *, const MethodInfo*))Task_1_TrySetException_m30676_gshared)(__this, ___exception, method)
