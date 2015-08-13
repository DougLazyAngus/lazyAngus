#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>
struct TaskCompletionSource_1_t1347;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t1357;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.AggregateException
struct AggregateException_t1338;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m7816(__this, method) (( void (*) (TaskCompletionSource_1_t1347 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7301_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::get_Task()
#define TaskCompletionSource_1_get_Task_m7817(__this, method) (( Task_1_t1357 * (*) (TaskCompletionSource_1_t1347 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7303_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m59904(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1347 *, Task_1_t1357 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m30577_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m7805(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1347 *, Task_t1210 *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m30578_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m59905(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1347 *, AggregateException_t1338 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30579_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m59906(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1347 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30580_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m59907(__this, method) (( bool (*) (TaskCompletionSource_1_t1347 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m30581_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m59908(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1347 *, Task_t1210 *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7745_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m59909(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1347 *, AggregateException_t1338 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30582_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m59910(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1347 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30583_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m59911(__this, method) (( void (*) (TaskCompletionSource_1_t1347 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7302_gshared)(__this, method)
