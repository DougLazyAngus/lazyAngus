#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct TaskCompletionSource_1_t1345;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t1390;
// System.Tuple`2<System.Net.HttpStatusCode,System.String>
struct Tuple_2_t1443;
// System.AggregateException
struct AggregateException_t1356;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m7942(__this, method) (( void (*) (TaskCompletionSource_1_t1345 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7471_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::get_Task()
#define TaskCompletionSource_1_get_Task_m7914(__this, method) (( Task_1_t1390 * (*) (TaskCompletionSource_1_t1345 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7473_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m63796(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1345 *, Task_1_t1390 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m35266_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m7912(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1345 *, Tuple_2_t1443 *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m35267_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m63797(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1345 *, AggregateException_t1356 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35268_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m63798(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1345 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35269_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m7910(__this, method) (( bool (*) (TaskCompletionSource_1_t1345 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m35270_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m63799(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1345 *, Tuple_2_t1443 *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7915_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m63800(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1345 *, AggregateException_t1356 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35271_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m63801(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1345 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35272_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m63802(__this, method) (( void (*) (TaskCompletionSource_1_t1345 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7472_gshared)(__this, method)
