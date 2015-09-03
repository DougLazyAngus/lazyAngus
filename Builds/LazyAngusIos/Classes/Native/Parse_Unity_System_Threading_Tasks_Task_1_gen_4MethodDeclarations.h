#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Task_1_t1390;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t836;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Action_1_t6596;
// System.AggregateException
struct AggregateException_t1355;

// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m36015(__this, method) (( void (*) (Task_1_t1390 *, const MethodInfo*))Task_1__ctor_m35220_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Result()
#define Task_1_get_Result_m7857(__this, method) (( Object_t* (*) (Task_1_t1390 *, const MethodInfo*))Task_1_get_Result_m35221_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m36016(__this, ___continuation, method) (( Task_t1227 * (*) (Task_1_t1390 *, Action_1_t6596 *, const MethodInfo*))Task_1_ContinueWith_m35223_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::RunContinuations()
#define Task_1_RunContinuations_m36017(__this, method) (( void (*) (Task_1_t1390 *, const MethodInfo*))Task_1_RunContinuations_m35225_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::TrySetResult(T)
#define Task_1_TrySetResult_m36018(__this, ___result, method) (( bool (*) (Task_1_t1390 *, Object_t*, const MethodInfo*))Task_1_TrySetResult_m35227_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m36019(__this, method) (( bool (*) (Task_1_t1390 *, const MethodInfo*))Task_1_TrySetCanceled_m35229_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m36020(__this, ___exception, method) (( bool (*) (Task_1_t1390 *, AggregateException_t1355 *, const MethodInfo*))Task_1_TrySetException_m35231_gshared)(__this, ___exception, method)
