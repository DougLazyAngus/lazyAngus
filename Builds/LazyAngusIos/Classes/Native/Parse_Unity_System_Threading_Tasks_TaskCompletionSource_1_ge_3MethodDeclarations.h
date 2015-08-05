#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>
struct TaskCompletionSource_1_t1298;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t1308;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.AggregateException
struct AggregateException_t1289;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m7573(__this, method) (( void (*) (TaskCompletionSource_1_t1298 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7057_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::get_Task()
#define TaskCompletionSource_1_get_Task_m7574(__this, method) (( Task_1_t1308 * (*) (TaskCompletionSource_1_t1298 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7059_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m59235(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1298 *, Task_1_t1308 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m29901_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m7562(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1298 *, Task_t1159 *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m29902_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m59236(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1298 *, AggregateException_t1289 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29903_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m59237(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1298 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29904_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m59238(__this, method) (( bool (*) (TaskCompletionSource_1_t1298 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m29905_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m59239(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1298 *, Task_t1159 *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7501_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m59240(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1298 *, AggregateException_t1289 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29906_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m59241(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1298 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29907_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m59242(__this, method) (( void (*) (TaskCompletionSource_1_t1298 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7058_gshared)(__this, method)
