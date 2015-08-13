#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>
struct TaskCompletionSource_1_t8279;
// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t1554;
// System.AggregateException
struct AggregateException_t1338;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59298_gshared (TaskCompletionSource_1_t8279 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59298(__this, method) (( void (*) (TaskCompletionSource_1_t8279 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59298_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::get_Task()
extern "C" Task_1_t1554 * TaskCompletionSource_1_get_Task_m59299_gshared (TaskCompletionSource_1_t8279 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59299(__this, method) (( Task_1_t1554 * (*) (TaskCompletionSource_1_t8279 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59299_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59300_gshared (TaskCompletionSource_1_t8279 * __this, Task_1_t1554 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59300(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8279 *, Task_1_t1554 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59300_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59301_gshared (TaskCompletionSource_1_t8279 * __this, uint32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59301(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8279 *, uint32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59301_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59302_gshared (TaskCompletionSource_1_t8279 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59302(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8279 *, AggregateException_t1338 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59302_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59303_gshared (TaskCompletionSource_1_t8279 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59303(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8279 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59303_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59304_gshared (TaskCompletionSource_1_t8279 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59304(__this, method) (( bool (*) (TaskCompletionSource_1_t8279 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59304_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59305_gshared (TaskCompletionSource_1_t8279 * __this, uint32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59305(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8279 *, uint32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m59305_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59306_gshared (TaskCompletionSource_1_t8279 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59306(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8279 *, AggregateException_t1338 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59306_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59307_gshared (TaskCompletionSource_1_t8279 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59307(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8279 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59307_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m59308_gshared (TaskCompletionSource_1_t8279 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m59308(__this, method) (( void (*) (TaskCompletionSource_1_t8279 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m59308_gshared)(__this, method)
