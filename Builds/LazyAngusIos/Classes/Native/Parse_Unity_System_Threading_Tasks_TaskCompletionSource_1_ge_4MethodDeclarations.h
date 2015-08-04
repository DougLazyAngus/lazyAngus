#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>
struct TaskCompletionSource_1_t1311;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>
struct Task_1_t1364;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1291;
// System.AggregateException
struct AggregateException_t1287;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m7578(__this, method) (( void (*) (TaskCompletionSource_1_t1311 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7042_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::get_Task()
#define TaskCompletionSource_1_get_Task_m7579(__this, method) (( Task_1_t1364 * (*) (TaskCompletionSource_1_t1311 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7044_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m59283(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1311 *, Task_1_t1364 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m29886_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m7575(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1311 *, TaskU5BU5D_t1291*, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m29887_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m59284(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1311 *, AggregateException_t1287 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29888_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m59285(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1311 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29889_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m59286(__this, method) (( bool (*) (TaskCompletionSource_1_t1311 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m29890_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m59287(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1311 *, TaskU5BU5D_t1291*, const MethodInfo*))TaskCompletionSource_1_SetResult_m7486_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m59288(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1311 *, AggregateException_t1287 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29891_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m59289(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1311 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29892_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m59290(__this, method) (( void (*) (TaskCompletionSource_1_t1311 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7043_gshared)(__this, method)
