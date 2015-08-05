#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Task_1_t1324;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t767;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Action_1_t5956;
// System.AggregateException
struct AggregateException_t1289;

// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m30653(__this, method) (( void (*) (Task_1_t1324 *, const MethodInfo*))Task_1__ctor_m29865_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Result()
#define Task_1_get_Result_m7453(__this, method) (( Object_t* (*) (Task_1_t1324 *, const MethodInfo*))Task_1_get_Result_m29866_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m30654(__this, ___continuation, method) (( Task_t1159 * (*) (Task_1_t1324 *, Action_1_t5956 *, const MethodInfo*))Task_1_ContinueWith_m29868_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::RunContinuations()
#define Task_1_RunContinuations_m30655(__this, method) (( void (*) (Task_1_t1324 *, const MethodInfo*))Task_1_RunContinuations_m29870_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::TrySetResult(T)
#define Task_1_TrySetResult_m30656(__this, ___result, method) (( bool (*) (Task_1_t1324 *, Object_t*, const MethodInfo*))Task_1_TrySetResult_m29872_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m30657(__this, method) (( bool (*) (Task_1_t1324 *, const MethodInfo*))Task_1_TrySetCanceled_m29874_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m30658(__this, ___exception, method) (( bool (*) (Task_1_t1324 *, AggregateException_t1289 *, const MethodInfo*))Task_1_TrySetException_m29876_gshared)(__this, ___exception, method)
