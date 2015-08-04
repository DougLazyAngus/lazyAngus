#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>
struct Task_1_t1509;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1324;
// System.Threading.Tasks.Task
struct Task_t1157;
// System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>>
struct Action_1_t9478;
// System.AggregateException
struct AggregateException_t1287;

// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m58882(__this, method) (( void (*) (Task_1_t1509 *, const MethodInfo*))Task_1__ctor_m29853_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::get_Result()
#define Task_1_get_Result_m58883(__this, method) (( Object_t* (*) (Task_1_t1509 *, const MethodInfo*))Task_1_get_Result_m29854_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m58884(__this, ___continuation, method) (( Task_t1157 * (*) (Task_1_t1509 *, Action_1_t9478 *, const MethodInfo*))Task_1_ContinueWith_m29856_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::RunContinuations()
#define Task_1_RunContinuations_m58885(__this, method) (( void (*) (Task_1_t1509 *, const MethodInfo*))Task_1_RunContinuations_m29858_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::TrySetResult(T)
#define Task_1_TrySetResult_m58886(__this, ___result, method) (( bool (*) (Task_1_t1509 *, Object_t*, const MethodInfo*))Task_1_TrySetResult_m29860_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m58887(__this, method) (( bool (*) (Task_1_t1509 *, const MethodInfo*))Task_1_TrySetCanceled_m29862_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m58888(__this, ___exception, method) (( bool (*) (Task_1_t1509 *, AggregateException_t1287 *, const MethodInfo*))Task_1_TrySetException_m29864_gshared)(__this, ___exception, method)
