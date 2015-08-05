#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>
struct Task_1_t1511;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1326;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>>
struct Action_1_t9480;
// System.AggregateException
struct AggregateException_t1289;

// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m58894(__this, method) (( void (*) (Task_1_t1511 *, const MethodInfo*))Task_1__ctor_m29865_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::get_Result()
#define Task_1_get_Result_m58895(__this, method) (( Object_t* (*) (Task_1_t1511 *, const MethodInfo*))Task_1_get_Result_m29866_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m58896(__this, ___continuation, method) (( Task_t1159 * (*) (Task_1_t1511 *, Action_1_t9480 *, const MethodInfo*))Task_1_ContinueWith_m29868_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::RunContinuations()
#define Task_1_RunContinuations_m58897(__this, method) (( void (*) (Task_1_t1511 *, const MethodInfo*))Task_1_RunContinuations_m29870_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::TrySetResult(T)
#define Task_1_TrySetResult_m58898(__this, ___result, method) (( bool (*) (Task_1_t1511 *, Object_t*, const MethodInfo*))Task_1_TrySetResult_m29872_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m58899(__this, method) (( bool (*) (Task_1_t1511 *, const MethodInfo*))Task_1_TrySetCanceled_m29874_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m58900(__this, ___exception, method) (( bool (*) (Task_1_t1511 *, AggregateException_t1289 *, const MethodInfo*))Task_1_TrySetException_m29876_gshared)(__this, ___exception, method)
