#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int16>
struct TaskCompletionSource_1_t8181;
// System.Threading.Tasks.Task`1<System.Int16>
struct Task_1_t1499;
// System.AggregateException
struct AggregateException_t1285;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58482_gshared (TaskCompletionSource_1_t8181 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58482(__this, method) (( void (*) (TaskCompletionSource_1_t8181 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58482_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::get_Task()
extern "C" Task_1_t1499 * TaskCompletionSource_1_get_Task_m58483_gshared (TaskCompletionSource_1_t8181 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58483(__this, method) (( Task_1_t1499 * (*) (TaskCompletionSource_1_t8181 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58483_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58484_gshared (TaskCompletionSource_1_t8181 * __this, Task_1_t1499 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58484(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8181 *, Task_1_t1499 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58484_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58485_gshared (TaskCompletionSource_1_t8181 * __this, int16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58485(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8181 *, int16_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58485_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58486_gshared (TaskCompletionSource_1_t8181 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58486(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8181 *, AggregateException_t1285 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58486_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58487_gshared (TaskCompletionSource_1_t8181 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58487(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8181 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58487_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58488_gshared (TaskCompletionSource_1_t8181 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58488(__this, method) (( bool (*) (TaskCompletionSource_1_t8181 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58488_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58489_gshared (TaskCompletionSource_1_t8181 * __this, int16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58489(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8181 *, int16_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m58489_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58490_gshared (TaskCompletionSource_1_t8181 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58490(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8181 *, AggregateException_t1285 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58490_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58491_gshared (TaskCompletionSource_1_t8181 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58491(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8181 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58491_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58492_gshared (TaskCompletionSource_1_t8181 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58492(__this, method) (( void (*) (TaskCompletionSource_1_t8181 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58492_gshared)(__this, method)
