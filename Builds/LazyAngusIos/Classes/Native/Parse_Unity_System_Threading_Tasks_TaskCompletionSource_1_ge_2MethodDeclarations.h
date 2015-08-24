#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct TaskCompletionSource_1_t1328;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t1373;
// System.Tuple`2<System.Net.HttpStatusCode,System.String>
struct Tuple_2_t1426;
// System.AggregateException
struct AggregateException_t1339;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m7793(__this, method) (( void (*) (TaskCompletionSource_1_t1328 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7322_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::get_Task()
#define TaskCompletionSource_1_get_Task_m7765(__this, method) (( Task_1_t1373 * (*) (TaskCompletionSource_1_t1328 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7324_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m59189(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1328 *, Task_1_t1373 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m30698_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m7763(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1328 *, Tuple_2_t1426 *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m30699_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m59190(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1328 *, AggregateException_t1339 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30700_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m59191(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1328 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30701_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m7761(__this, method) (( bool (*) (TaskCompletionSource_1_t1328 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m30702_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m59192(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1328 *, Tuple_2_t1426 *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7766_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m59193(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1328 *, AggregateException_t1339 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30703_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m59194(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1328 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30704_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m59195(__this, method) (( void (*) (TaskCompletionSource_1_t1328 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7323_gshared)(__this, method)
