#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct TaskCompletionSource_1_t1277;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t1323;
// System.Tuple`2<System.Net.HttpStatusCode,System.String>
struct Tuple_2_t1376;
// System.AggregateException
struct AggregateException_t1289;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m7528(__this, method) (( void (*) (TaskCompletionSource_1_t1277 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7057_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::get_Task()
#define TaskCompletionSource_1_get_Task_m7500(__this, method) (( Task_1_t1323 * (*) (TaskCompletionSource_1_t1277 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7059_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m58399(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1277 *, Task_1_t1323 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m29901_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m7498(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1277 *, Tuple_2_t1376 *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m29902_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m58400(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1277 *, AggregateException_t1289 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29903_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m58401(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1277 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29904_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m7496(__this, method) (( bool (*) (TaskCompletionSource_1_t1277 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m29905_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m58402(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1277 *, Tuple_2_t1376 *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7501_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m58403(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1277 *, AggregateException_t1289 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29906_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m58404(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1277 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29907_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m58405(__this, method) (( void (*) (TaskCompletionSource_1_t1277 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7058_gshared)(__this, method)
