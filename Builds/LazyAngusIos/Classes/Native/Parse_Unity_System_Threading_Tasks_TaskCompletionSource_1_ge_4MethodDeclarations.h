#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>
struct TaskCompletionSource_1_t1363;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>
struct Task_1_t1416;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1343;
// System.AggregateException
struct AggregateException_t1339;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m7858(__this, method) (( void (*) (TaskCompletionSource_1_t1363 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7322_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::get_Task()
#define TaskCompletionSource_1_get_Task_m7859(__this, method) (( Task_1_t1416 * (*) (TaskCompletionSource_1_t1363 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7324_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m60088(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1363 *, Task_1_t1416 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m30698_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m7855(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1363 *, TaskU5BU5D_t1343*, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m30699_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m60089(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1363 *, AggregateException_t1339 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30700_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m60090(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1363 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30701_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m60091(__this, method) (( bool (*) (TaskCompletionSource_1_t1363 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m30702_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m60092(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1363 *, TaskU5BU5D_t1343*, const MethodInfo*))TaskCompletionSource_1_SetResult_m7766_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m60093(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1363 *, AggregateException_t1339 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30703_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m60094(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1363 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30704_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m60095(__this, method) (( void (*) (TaskCompletionSource_1_t1363 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7323_gshared)(__this, method)
