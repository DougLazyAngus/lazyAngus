#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseUser>>
struct Task_1_t6207;
// System.Collections.Generic.IEnumerable`1<Parse.ParseUser>
struct IEnumerable_1_t6208;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseUser>>>
struct Action_1_t9092;
// System.AggregateException
struct AggregateException_t1285;

// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseUser>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m34210(__this, method) (( void (*) (Task_1_t6207 *, const MethodInfo*))Task_1__ctor_m29837_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseUser>>::get_Result()
#define Task_1_get_Result_m34211(__this, method) (( Object_t* (*) (Task_1_t6207 *, const MethodInfo*))Task_1_get_Result_m29838_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseUser>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m34212(__this, ___continuation, method) (( Task_t1155 * (*) (Task_1_t6207 *, Action_1_t9092 *, const MethodInfo*))Task_1_ContinueWith_m29840_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseUser>>::RunContinuations()
#define Task_1_RunContinuations_m34213(__this, method) (( void (*) (Task_1_t6207 *, const MethodInfo*))Task_1_RunContinuations_m29842_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseUser>>::TrySetResult(T)
#define Task_1_TrySetResult_m34214(__this, ___result, method) (( bool (*) (Task_1_t6207 *, Object_t*, const MethodInfo*))Task_1_TrySetResult_m29844_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseUser>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m34215(__this, method) (( bool (*) (Task_1_t6207 *, const MethodInfo*))Task_1_TrySetCanceled_m29846_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseUser>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m34216(__this, ___exception, method) (( bool (*) (Task_1_t6207 *, AggregateException_t1285 *, const MethodInfo*))Task_1_TrySetException_m29848_gshared)(__this, ___exception, method)
