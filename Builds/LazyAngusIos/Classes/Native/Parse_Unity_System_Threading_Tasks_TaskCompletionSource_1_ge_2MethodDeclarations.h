#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct TaskCompletionSource_1_t1327;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t1372;
// System.Tuple`2<System.Net.HttpStatusCode,System.String>
struct Tuple_2_t1425;
// System.AggregateException
struct AggregateException_t1338;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m7773(__this, method) (( void (*) (TaskCompletionSource_1_t1327 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7302_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::get_Task()
#define TaskCompletionSource_1_get_Task_m7745(__this, method) (( Task_1_t1372 * (*) (TaskCompletionSource_1_t1327 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7304_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m59068(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1327 *, Task_1_t1372 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m30577_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m7743(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1327 *, Tuple_2_t1425 *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m30578_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m59069(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1327 *, AggregateException_t1338 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30579_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m59070(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1327 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30580_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m7741(__this, method) (( bool (*) (TaskCompletionSource_1_t1327 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m30581_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m59071(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1327 *, Tuple_2_t1425 *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7746_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m59072(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1327 *, AggregateException_t1338 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30582_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m59073(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1327 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30583_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m59074(__this, method) (( void (*) (TaskCompletionSource_1_t1327 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7303_gshared)(__this, method)
