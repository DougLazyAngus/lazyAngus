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
#define TaskCompletionSource_1__ctor_m7993(__this, method) (( void (*) (TaskCompletionSource_1_t1379 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7458_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::get_Task()
#define TaskCompletionSource_1_get_Task_m7994(__this, method) (( Task_1_t1432 * (*) (TaskCompletionSource_1_t1379 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7460_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m64683(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1379 *, Task_1_t1432 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m35253_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m7990(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1379 *, TaskU5BU5D_t1359*, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m35254_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m64684(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1379 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35255_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m64685(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1379 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35256_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m64686(__this, method) (( bool (*) (TaskCompletionSource_1_t1379 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m35257_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m64687(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1379 *, TaskU5BU5D_t1359*, const MethodInfo*))TaskCompletionSource_1_SetResult_m7902_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m64688(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1379 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35258_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m64689(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1379 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35259_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m64690(__this, method) (( void (*) (TaskCompletionSource_1_t1379 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7459_gshared)(__this, method)
