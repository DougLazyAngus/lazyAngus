#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>
struct TaskCompletionSource_1_t8208;
// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t1504;
// System.AggregateException
struct AggregateException_t1288;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58621_gshared (TaskCompletionSource_1_t8208 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58621(__this, method) (( void (*) (TaskCompletionSource_1_t8208 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58621_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::get_Task()
extern "C" Task_1_t1504 * TaskCompletionSource_1_get_Task_m58622_gshared (TaskCompletionSource_1_t8208 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58622(__this, method) (( Task_1_t1504 * (*) (TaskCompletionSource_1_t8208 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58622_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58623_gshared (TaskCompletionSource_1_t8208 * __this, Task_1_t1504 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58623(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8208 *, Task_1_t1504 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58623_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58624_gshared (TaskCompletionSource_1_t8208 * __this, uint32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58624(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8208 *, uint32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58624_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58625_gshared (TaskCompletionSource_1_t8208 * __this, AggregateException_t1288 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58625(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8208 *, AggregateException_t1288 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58625_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58626_gshared (TaskCompletionSource_1_t8208 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58626(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8208 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58626_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58627_gshared (TaskCompletionSource_1_t8208 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58627(__this, method) (( bool (*) (TaskCompletionSource_1_t8208 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58627_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58628_gshared (TaskCompletionSource_1_t8208 * __this, uint32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58628(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8208 *, uint32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m58628_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58629_gshared (TaskCompletionSource_1_t8208 * __this, AggregateException_t1288 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58629(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8208 *, AggregateException_t1288 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58629_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58630_gshared (TaskCompletionSource_1_t8208 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58630(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8208 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58630_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58631_gshared (TaskCompletionSource_1_t8208 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58631(__this, method) (( void (*) (TaskCompletionSource_1_t8208 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58631_gshared)(__this, method)
