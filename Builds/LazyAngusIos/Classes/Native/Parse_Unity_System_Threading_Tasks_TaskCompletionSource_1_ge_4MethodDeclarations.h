#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>
struct TaskCompletionSource_1_t1313;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>
struct Task_1_t1366;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1293;
// System.AggregateException
struct AggregateException_t1289;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m7590(__this, method) (( void (*) (TaskCompletionSource_1_t1313 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7054_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::get_Task()
#define TaskCompletionSource_1_get_Task_m7591(__this, method) (( Task_1_t1366 * (*) (TaskCompletionSource_1_t1313 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7056_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m59295(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1313 *, Task_1_t1366 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m29898_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m7587(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1313 *, TaskU5BU5D_t1293*, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m29899_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m59296(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1313 *, AggregateException_t1289 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29900_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m59297(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1313 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29901_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m59298(__this, method) (( bool (*) (TaskCompletionSource_1_t1313 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m29902_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m59299(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1313 *, TaskU5BU5D_t1293*, const MethodInfo*))TaskCompletionSource_1_SetResult_m7498_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m59300(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1313 *, AggregateException_t1289 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29903_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m59301(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1313 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29904_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m59302(__this, method) (( void (*) (TaskCompletionSource_1_t1313 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7055_gshared)(__this, method)
