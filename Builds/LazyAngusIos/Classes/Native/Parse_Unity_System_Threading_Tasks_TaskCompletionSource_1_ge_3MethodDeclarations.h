#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>
struct TaskCompletionSource_1_t1294;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t1304;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.AggregateException
struct AggregateException_t1285;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m7545(__this, method) (( void (*) (TaskCompletionSource_1_t1294 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7029_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::get_Task()
#define TaskCompletionSource_1_get_Task_m7546(__this, method) (( Task_1_t1304 * (*) (TaskCompletionSource_1_t1294 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7031_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m59204(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1294 *, Task_1_t1304 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m29870_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m7534(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1294 *, Task_t1155 *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m29871_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m59205(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1294 *, AggregateException_t1285 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29872_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m59206(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1294 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29873_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m59207(__this, method) (( bool (*) (TaskCompletionSource_1_t1294 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m29874_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m59208(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1294 *, Task_t1155 *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7473_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m59209(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1294 *, AggregateException_t1285 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29875_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m59210(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1294 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29876_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m59211(__this, method) (( void (*) (TaskCompletionSource_1_t1294 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7030_gshared)(__this, method)
