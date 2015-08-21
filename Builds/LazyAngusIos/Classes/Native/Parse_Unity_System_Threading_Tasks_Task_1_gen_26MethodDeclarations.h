#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>
struct Task_1_t1558;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1373;
// System.Threading.Tasks.Task
struct Task_t1208;
// System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>>
struct Action_1_t9577;
// System.AggregateException
struct AggregateException_t1336;

// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m59654(__this, method) (( void (*) (Task_1_t1558 *, const MethodInfo*))Task_1__ctor_m30632_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::get_Result()
#define Task_1_get_Result_m59655(__this, method) (( Object_t* (*) (Task_1_t1558 *, const MethodInfo*))Task_1_get_Result_m30633_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m59656(__this, ___continuation, method) (( Task_t1208 * (*) (Task_1_t1558 *, Action_1_t9577 *, const MethodInfo*))Task_1_ContinueWith_m30635_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::RunContinuations()
#define Task_1_RunContinuations_m59657(__this, method) (( void (*) (Task_1_t1558 *, const MethodInfo*))Task_1_RunContinuations_m30637_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::TrySetResult(T)
#define Task_1_TrySetResult_m59658(__this, ___result, method) (( bool (*) (Task_1_t1558 *, Object_t*, const MethodInfo*))Task_1_TrySetResult_m30639_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m59659(__this, method) (( bool (*) (Task_1_t1558 *, const MethodInfo*))Task_1_TrySetCanceled_m30641_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m59660(__this, ___exception, method) (( bool (*) (Task_1_t1558 *, AggregateException_t1336 *, const MethodInfo*))Task_1_TrySetException_m30643_gshared)(__this, ___exception, method)
