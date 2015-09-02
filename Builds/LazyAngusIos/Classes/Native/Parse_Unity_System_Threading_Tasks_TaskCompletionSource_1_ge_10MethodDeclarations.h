#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int64>
struct TaskCompletionSource_1_t8327;
// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1572;
// System.AggregateException
struct AggregateException_t1355;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59809_gshared (TaskCompletionSource_1_t8327 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59809(__this, method) (( void (*) (TaskCompletionSource_1_t8327 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59809_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::get_Task()
extern "C" Task_1_t1572 * TaskCompletionSource_1_get_Task_m59810_gshared (TaskCompletionSource_1_t8327 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59810(__this, method) (( Task_1_t1572 * (*) (TaskCompletionSource_1_t8327 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59810_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59811_gshared (TaskCompletionSource_1_t8327 * __this, Task_1_t1572 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59811(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8327 *, Task_1_t1572 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59811_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59812_gshared (TaskCompletionSource_1_t8327 * __this, int64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59812(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8327 *, int64_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59812_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59813_gshared (TaskCompletionSource_1_t8327 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59813(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8327 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59813_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59814_gshared (TaskCompletionSource_1_t8327 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59814(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8327 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59814_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59815_gshared (TaskCompletionSource_1_t8327 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59815(__this, method) (( bool (*) (TaskCompletionSource_1_t8327 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59815_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59816_gshared (TaskCompletionSource_1_t8327 * __this, int64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59816(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8327 *, int64_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m59816_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59817_gshared (TaskCompletionSource_1_t8327 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59817(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8327 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59817_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59818_gshared (TaskCompletionSource_1_t8327 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59818(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8327 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59818_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m59819_gshared (TaskCompletionSource_1_t8327 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m59819(__this, method) (( void (*) (TaskCompletionSource_1_t8327 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m59819_gshared)(__this, method)
