#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>
struct TaskCompletionSource_1_t1345;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t1355;
// System.Threading.Tasks.Task
struct Task_t1208;
// System.AggregateException
struct AggregateException_t1336;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m7805(__this, method) (( void (*) (TaskCompletionSource_1_t1345 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7289_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::get_Task()
#define TaskCompletionSource_1_get_Task_m7806(__this, method) (( Task_1_t1355 * (*) (TaskCompletionSource_1_t1345 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7291_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m59992(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1345 *, Task_1_t1355 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m30665_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m7794(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1345 *, Task_t1208 *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m30666_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m59993(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1345 *, AggregateException_t1336 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30667_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m59994(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1345 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30668_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m59995(__this, method) (( bool (*) (TaskCompletionSource_1_t1345 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m30669_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m59996(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1345 *, Task_t1208 *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7733_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m59997(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1345 *, AggregateException_t1336 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30670_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m59998(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1345 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30671_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m59999(__this, method) (( void (*) (TaskCompletionSource_1_t1345 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7290_gshared)(__this, method)
