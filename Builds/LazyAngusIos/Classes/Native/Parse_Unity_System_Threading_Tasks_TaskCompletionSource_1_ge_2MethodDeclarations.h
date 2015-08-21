#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct TaskCompletionSource_1_t1325;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t1370;
// System.Tuple`2<System.Net.HttpStatusCode,System.String>
struct Tuple_2_t1423;
// System.AggregateException
struct AggregateException_t1336;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m7760(__this, method) (( void (*) (TaskCompletionSource_1_t1325 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7289_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::get_Task()
#define TaskCompletionSource_1_get_Task_m7732(__this, method) (( Task_1_t1370 * (*) (TaskCompletionSource_1_t1325 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7291_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m59156(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1325 *, Task_1_t1370 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m30665_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m7730(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1325 *, Tuple_2_t1423 *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m30666_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m59157(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1325 *, AggregateException_t1336 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30667_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m59158(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1325 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30668_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m7728(__this, method) (( bool (*) (TaskCompletionSource_1_t1325 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m30669_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m59159(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1325 *, Tuple_2_t1423 *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7733_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m59160(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1325 *, AggregateException_t1336 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30670_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m59161(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1325 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30671_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m59162(__this, method) (( void (*) (TaskCompletionSource_1_t1325 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7290_gshared)(__this, method)
