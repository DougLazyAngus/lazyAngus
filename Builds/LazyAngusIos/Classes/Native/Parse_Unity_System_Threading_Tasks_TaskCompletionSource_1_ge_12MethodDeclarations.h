#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Double>
struct TaskCompletionSource_1_t8245;
// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1509;
// System.AggregateException
struct AggregateException_t1289;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58807_gshared (TaskCompletionSource_1_t8245 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58807(__this, method) (( void (*) (TaskCompletionSource_1_t8245 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58807_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Double>::get_Task()
extern "C" Task_1_t1509 * TaskCompletionSource_1_get_Task_m58808_gshared (TaskCompletionSource_1_t8245 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58808(__this, method) (( Task_1_t1509 * (*) (TaskCompletionSource_1_t8245 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58808_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58809_gshared (TaskCompletionSource_1_t8245 * __this, Task_1_t1509 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58809(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8245 *, Task_1_t1509 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58809_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58810_gshared (TaskCompletionSource_1_t8245 * __this, double ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58810(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8245 *, double, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58810_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58811_gshared (TaskCompletionSource_1_t8245 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58811(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8245 *, AggregateException_t1289 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58811_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58812_gshared (TaskCompletionSource_1_t8245 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58812(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8245 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58812_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58813_gshared (TaskCompletionSource_1_t8245 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58813(__this, method) (( bool (*) (TaskCompletionSource_1_t8245 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58813_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58814_gshared (TaskCompletionSource_1_t8245 * __this, double ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58814(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8245 *, double, const MethodInfo*))TaskCompletionSource_1_SetResult_m58814_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58815_gshared (TaskCompletionSource_1_t8245 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58815(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8245 *, AggregateException_t1289 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58815_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58816_gshared (TaskCompletionSource_1_t8245 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58816(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8245 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58816_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58817_gshared (TaskCompletionSource_1_t8245 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58817(__this, method) (( void (*) (TaskCompletionSource_1_t8245 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58817_gshared)(__this, method)
