#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>
struct TaskCompletionSource_1_t8205;
// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t1501;
// System.AggregateException
struct AggregateException_t1285;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58598_gshared (TaskCompletionSource_1_t8205 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58598(__this, method) (( void (*) (TaskCompletionSource_1_t8205 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58598_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::get_Task()
extern "C" Task_1_t1501 * TaskCompletionSource_1_get_Task_m58599_gshared (TaskCompletionSource_1_t8205 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58599(__this, method) (( Task_1_t1501 * (*) (TaskCompletionSource_1_t8205 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58599_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58600_gshared (TaskCompletionSource_1_t8205 * __this, Task_1_t1501 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58600(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8205 *, Task_1_t1501 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58600_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58601_gshared (TaskCompletionSource_1_t8205 * __this, uint32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58601(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8205 *, uint32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58601_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58602_gshared (TaskCompletionSource_1_t8205 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58602(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8205 *, AggregateException_t1285 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58602_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58603_gshared (TaskCompletionSource_1_t8205 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58603(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8205 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58603_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58604_gshared (TaskCompletionSource_1_t8205 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58604(__this, method) (( bool (*) (TaskCompletionSource_1_t8205 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58604_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58605_gshared (TaskCompletionSource_1_t8205 * __this, uint32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58605(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8205 *, uint32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m58605_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58606_gshared (TaskCompletionSource_1_t8205 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58606(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8205 *, AggregateException_t1285 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58606_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58607_gshared (TaskCompletionSource_1_t8205 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58607(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8205 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58607_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58608_gshared (TaskCompletionSource_1_t8205 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58608(__this, method) (( void (*) (TaskCompletionSource_1_t8205 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58608_gshared)(__this, method)
