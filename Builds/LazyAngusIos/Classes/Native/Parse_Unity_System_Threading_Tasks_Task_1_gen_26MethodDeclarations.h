#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>
struct Task_1_t1581;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1396;
// System.Threading.Tasks.Task
struct Task_t1231;
// System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>>
struct Action_1_t10210;
// System.AggregateException
struct AggregateException_t1359;

// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m64306(__this, method) (( void (*) (Task_1_t1581 *, const MethodInfo*))Task_1__ctor_m35245_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::get_Result()
#define Task_1_get_Result_m64307(__this, method) (( Object_t* (*) (Task_1_t1581 *, const MethodInfo*))Task_1_get_Result_m35246_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m64308(__this, ___continuation, method) (( Task_t1231 * (*) (Task_1_t1581 *, Action_1_t10210 *, const MethodInfo*))Task_1_ContinueWith_m35248_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::RunContinuations()
#define Task_1_RunContinuations_m64309(__this, method) (( void (*) (Task_1_t1581 *, const MethodInfo*))Task_1_RunContinuations_m35250_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::TrySetResult(T)
#define Task_1_TrySetResult_m64310(__this, ___result, method) (( bool (*) (Task_1_t1581 *, Object_t*, const MethodInfo*))Task_1_TrySetResult_m35252_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m64311(__this, method) (( bool (*) (Task_1_t1581 *, const MethodInfo*))Task_1_TrySetCanceled_m35254_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m64312(__this, ___exception, method) (( bool (*) (Task_1_t1581 *, AggregateException_t1359 *, const MethodInfo*))Task_1_TrySetException_m35256_gshared)(__this, ___exception, method)
