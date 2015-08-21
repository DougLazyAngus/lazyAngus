#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>
struct Task_1_t6110;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t708;
// System.Threading.Tasks.Task
struct Task_t1208;
// System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>>
struct Action_1_t6111;
// System.AggregateException
struct AggregateException_t1336;

// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m32512(__this, method) (( void (*) (Task_1_t6110 *, const MethodInfo*))Task_1__ctor_m30632_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>::get_Result()
#define Task_1_get_Result_m32513(__this, method) (( Object_t* (*) (Task_1_t6110 *, const MethodInfo*))Task_1_get_Result_m30633_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m32514(__this, ___continuation, method) (( Task_t1208 * (*) (Task_1_t6110 *, Action_1_t6111 *, const MethodInfo*))Task_1_ContinueWith_m30635_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>::RunContinuations()
#define Task_1_RunContinuations_m32515(__this, method) (( void (*) (Task_1_t6110 *, const MethodInfo*))Task_1_RunContinuations_m30637_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>::TrySetResult(T)
#define Task_1_TrySetResult_m32516(__this, ___result, method) (( bool (*) (Task_1_t6110 *, Object_t*, const MethodInfo*))Task_1_TrySetResult_m30639_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m32517(__this, method) (( bool (*) (Task_1_t6110 *, const MethodInfo*))Task_1_TrySetCanceled_m30641_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m32518(__this, ___exception, method) (( bool (*) (Task_1_t6110 *, AggregateException_t1336 *, const MethodInfo*))Task_1_TrySetException_m30643_gshared)(__this, ___exception, method)
