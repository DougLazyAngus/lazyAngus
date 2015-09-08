#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>
struct Task_1_t6681;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t728;
// System.Threading.Tasks.Task
struct Task_t1231;
// System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>>
struct Action_1_t6682;
// System.AggregateException
struct AggregateException_t1359;

// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m37134(__this, method) (( void (*) (Task_1_t6681 *, const MethodInfo*))Task_1__ctor_m35245_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>::get_Result()
#define Task_1_get_Result_m37135(__this, method) (( Object_t* (*) (Task_1_t6681 *, const MethodInfo*))Task_1_get_Result_m35246_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m37136(__this, ___continuation, method) (( Task_t1231 * (*) (Task_1_t6681 *, Action_1_t6682 *, const MethodInfo*))Task_1_ContinueWith_m35248_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>::RunContinuations()
#define Task_1_RunContinuations_m37137(__this, method) (( void (*) (Task_1_t6681 *, const MethodInfo*))Task_1_RunContinuations_m35250_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>::TrySetResult(T)
#define Task_1_TrySetResult_m37138(__this, ___result, method) (( bool (*) (Task_1_t6681 *, Object_t*, const MethodInfo*))Task_1_TrySetResult_m35252_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m37139(__this, method) (( bool (*) (Task_1_t6681 *, const MethodInfo*))Task_1_TrySetCanceled_m35254_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m37140(__this, ___exception, method) (( bool (*) (Task_1_t6681 *, AggregateException_t1359 *, const MethodInfo*))Task_1_TrySetException_m35256_gshared)(__this, ___exception, method)
