#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct TaskCompletionSource_1_t1344;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t1389;
// System.Tuple`2<System.Net.HttpStatusCode,System.String>
struct Tuple_2_t1442;
// System.AggregateException
struct AggregateException_t1355;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m7929(__this, method) (( void (*) (TaskCompletionSource_1_t1344 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7458_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::get_Task()
#define TaskCompletionSource_1_get_Task_m7901(__this, method) (( Task_1_t1389 * (*) (TaskCompletionSource_1_t1344 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7460_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m63783(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1344 *, Task_1_t1389 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m35253_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m7899(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1344 *, Tuple_2_t1442 *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m35254_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m63784(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1344 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35255_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m63785(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1344 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35256_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m7897(__this, method) (( bool (*) (TaskCompletionSource_1_t1344 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m35257_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m63786(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1344 *, Tuple_2_t1442 *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7902_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m63787(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1344 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35258_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m63788(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1344 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35259_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m63789(__this, method) (( void (*) (TaskCompletionSource_1_t1344 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7459_gshared)(__this, method)
