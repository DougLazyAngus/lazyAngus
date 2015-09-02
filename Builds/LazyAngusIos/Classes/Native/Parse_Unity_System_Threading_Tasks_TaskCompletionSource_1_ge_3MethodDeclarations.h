#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>
struct TaskCompletionSource_1_t1364;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t1374;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.AggregateException
struct AggregateException_t1355;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m7970(__this, method) (( void (*) (TaskCompletionSource_1_t1364 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7454_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::get_Task()
#define TaskCompletionSource_1_get_Task_m7971(__this, method) (( Task_1_t1374 * (*) (TaskCompletionSource_1_t1364 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7456_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m60357(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1364 *, Task_1_t1374 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m31030_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m7959(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1364 *, Task_t1227 *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m31031_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m60358(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1364 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m31032_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m60359(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1364 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m31033_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m60360(__this, method) (( bool (*) (TaskCompletionSource_1_t1364 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m31034_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m60361(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1364 *, Task_t1227 *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7898_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m60362(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1364 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_SetException_m31035_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m60363(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1364 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m31036_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m60364(__this, method) (( void (*) (TaskCompletionSource_1_t1364 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7455_gshared)(__this, method)
