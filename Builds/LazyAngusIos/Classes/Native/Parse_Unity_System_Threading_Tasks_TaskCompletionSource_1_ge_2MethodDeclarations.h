#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct TaskCompletionSource_1_t1273;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t1319;
// System.Tuple`2<System.Net.HttpStatusCode,System.String>
struct Tuple_2_t1372;
// System.AggregateException
struct AggregateException_t1285;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m7500(__this, method) (( void (*) (TaskCompletionSource_1_t1273 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7029_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::get_Task()
#define TaskCompletionSource_1_get_Task_m7472(__this, method) (( Task_1_t1319 * (*) (TaskCompletionSource_1_t1273 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7031_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m58368(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1273 *, Task_1_t1319 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m29870_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m7470(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1273 *, Tuple_2_t1372 *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m29871_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m58369(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1273 *, AggregateException_t1285 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29872_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m58370(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1273 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29873_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m7468(__this, method) (( bool (*) (TaskCompletionSource_1_t1273 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m29874_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m58371(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1273 *, Tuple_2_t1372 *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7473_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m58372(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1273 *, AggregateException_t1285 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29875_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m58373(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1273 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29876_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m58374(__this, method) (( void (*) (TaskCompletionSource_1_t1273 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7030_gshared)(__this, method)
