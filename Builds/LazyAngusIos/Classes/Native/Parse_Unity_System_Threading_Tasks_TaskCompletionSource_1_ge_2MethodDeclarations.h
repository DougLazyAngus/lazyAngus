#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct TaskCompletionSource_1_t1275;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t1321;
// System.Tuple`2<System.Net.HttpStatusCode,System.String>
struct Tuple_2_t1374;
// System.AggregateException
struct AggregateException_t1287;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m7513(__this, method) (( void (*) (TaskCompletionSource_1_t1275 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7042_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::get_Task()
#define TaskCompletionSource_1_get_Task_m7485(__this, method) (( Task_1_t1321 * (*) (TaskCompletionSource_1_t1275 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7044_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m58384(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1275 *, Task_1_t1321 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m29886_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m7483(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1275 *, Tuple_2_t1374 *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m29887_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m58385(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1275 *, AggregateException_t1287 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29888_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m58386(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1275 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29889_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m7481(__this, method) (( bool (*) (TaskCompletionSource_1_t1275 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m29890_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m58387(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1275 *, Tuple_2_t1374 *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7486_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m58388(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1275 *, AggregateException_t1287 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29891_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m58389(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1275 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29892_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m58390(__this, method) (( void (*) (TaskCompletionSource_1_t1275 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7043_gshared)(__this, method)
