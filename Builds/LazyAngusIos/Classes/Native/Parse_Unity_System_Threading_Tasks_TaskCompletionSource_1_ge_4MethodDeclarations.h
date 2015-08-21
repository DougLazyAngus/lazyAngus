#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>
struct TaskCompletionSource_1_t1360;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>
struct Task_1_t1413;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1340;
// System.AggregateException
struct AggregateException_t1336;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m7826(__this, method) (( void (*) (TaskCompletionSource_1_t1360 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7290_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::get_Task()
#define TaskCompletionSource_1_get_Task_m7827(__this, method) (( Task_1_t1413 * (*) (TaskCompletionSource_1_t1360 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7292_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m60056(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1360 *, Task_1_t1413 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m30666_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m7823(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1360 *, TaskU5BU5D_t1340*, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m30667_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m60057(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1360 *, AggregateException_t1336 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30668_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m60058(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1360 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30669_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m60059(__this, method) (( bool (*) (TaskCompletionSource_1_t1360 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m30670_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m60060(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1360 *, TaskU5BU5D_t1340*, const MethodInfo*))TaskCompletionSource_1_SetResult_m7734_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m60061(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1360 *, AggregateException_t1336 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30671_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m60062(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1360 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30672_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m60063(__this, method) (( void (*) (TaskCompletionSource_1_t1360 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7291_gshared)(__this, method)
