#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>
struct TaskCompletionSource_1_t1379;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>
struct Task_1_t1432;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1359;
// System.AggregateException
struct AggregateException_t1355;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m7990(__this, method) (( void (*) (TaskCompletionSource_1_t1379 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7454_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::get_Task()
#define TaskCompletionSource_1_get_Task_m7991(__this, method) (( Task_1_t1432 * (*) (TaskCompletionSource_1_t1379 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7456_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m60420(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1379 *, Task_1_t1432 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m31030_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m7987(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1379 *, TaskU5BU5D_t1359*, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m31031_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m60421(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1379 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m31032_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m60422(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1379 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m31033_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m60423(__this, method) (( bool (*) (TaskCompletionSource_1_t1379 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m31034_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m60424(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1379 *, TaskU5BU5D_t1359*, const MethodInfo*))TaskCompletionSource_1_SetResult_m7898_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m60425(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1379 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_SetException_m31035_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m60426(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1379 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m31036_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m60427(__this, method) (( void (*) (TaskCompletionSource_1_t1379 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7455_gshared)(__this, method)
