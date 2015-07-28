#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct TaskCompletionSource_1_t1267;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t1313;
// System.Tuple`2<System.Net.HttpStatusCode,System.String>
struct Tuple_2_t1366;
// System.AggregateException
struct AggregateException_t1279;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m7454(__this, method) (( void (*) (TaskCompletionSource_1_t1267 *, const MethodInfo*))TaskCompletionSource_1__ctor_m6983_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::get_Task()
#define TaskCompletionSource_1_get_Task_m7426(__this, method) (( Task_1_t1313 * (*) (TaskCompletionSource_1_t1267 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m6985_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m58321(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1267 *, Task_1_t1313 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m29823_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m7424(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1267 *, Tuple_2_t1366 *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m29824_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m58322(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1267 *, AggregateException_t1279 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29825_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m58323(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1267 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29826_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m7422(__this, method) (( bool (*) (TaskCompletionSource_1_t1267 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m29827_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m58324(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1267 *, Tuple_2_t1366 *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7427_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m58325(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1267 *, AggregateException_t1279 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29828_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m58326(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1267 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29829_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m58327(__this, method) (( void (*) (TaskCompletionSource_1_t1267 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m6984_gshared)(__this, method)
