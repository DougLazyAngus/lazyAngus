#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>
struct Task_1_t1507;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1322;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>>
struct Action_1_t9476;
// System.AggregateException
struct AggregateException_t1285;

// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m58866(__this, method) (( void (*) (Task_1_t1507 *, const MethodInfo*))Task_1__ctor_m29837_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::get_Result()
#define Task_1_get_Result_m58867(__this, method) (( Object_t* (*) (Task_1_t1507 *, const MethodInfo*))Task_1_get_Result_m29838_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m58868(__this, ___continuation, method) (( Task_t1155 * (*) (Task_1_t1507 *, Action_1_t9476 *, const MethodInfo*))Task_1_ContinueWith_m29840_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::RunContinuations()
#define Task_1_RunContinuations_m58869(__this, method) (( void (*) (Task_1_t1507 *, const MethodInfo*))Task_1_RunContinuations_m29842_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::TrySetResult(T)
#define Task_1_TrySetResult_m58870(__this, ___result, method) (( bool (*) (Task_1_t1507 *, Object_t*, const MethodInfo*))Task_1_TrySetResult_m29844_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m58871(__this, method) (( bool (*) (Task_1_t1507 *, const MethodInfo*))Task_1_TrySetCanceled_m29846_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m58872(__this, ___exception, method) (( bool (*) (Task_1_t1507 *, AggregateException_t1285 *, const MethodInfo*))Task_1_TrySetException_m29848_gshared)(__this, ___exception, method)
