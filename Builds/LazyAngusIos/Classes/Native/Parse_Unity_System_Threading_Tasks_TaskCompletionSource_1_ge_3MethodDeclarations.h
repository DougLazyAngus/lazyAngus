#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>
struct TaskCompletionSource_1_t1365;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t1375;
// System.Threading.Tasks.Task
struct Task_t1228;
// System.AggregateException
struct AggregateException_t1356;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m7986(__this, method) (( void (*) (TaskCompletionSource_1_t1365 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7471_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::get_Task()
#define TaskCompletionSource_1_get_Task_m7987(__this, method) (( Task_1_t1375 * (*) (TaskCompletionSource_1_t1365 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7473_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m64633(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1365 *, Task_1_t1375 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m35266_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m7975(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1365 *, Task_t1228 *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m35267_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m64634(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1365 *, AggregateException_t1356 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35268_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m64635(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1365 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35269_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m64636(__this, method) (( bool (*) (TaskCompletionSource_1_t1365 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m35270_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m64637(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1365 *, Task_t1228 *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7915_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m64638(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1365 *, AggregateException_t1356 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35271_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m64639(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1365 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35272_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m64640(__this, method) (( void (*) (TaskCompletionSource_1_t1365 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7472_gshared)(__this, method)
