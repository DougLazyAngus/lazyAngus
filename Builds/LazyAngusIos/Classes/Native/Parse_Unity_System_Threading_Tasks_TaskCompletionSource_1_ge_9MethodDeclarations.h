#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>
struct TaskCompletionSource_1_t8198;
// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t1495;
// System.AggregateException
struct AggregateException_t1279;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58551_gshared (TaskCompletionSource_1_t8198 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58551(__this, method) (( void (*) (TaskCompletionSource_1_t8198 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58551_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::get_Task()
extern "C" Task_1_t1495 * TaskCompletionSource_1_get_Task_m58552_gshared (TaskCompletionSource_1_t8198 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58552(__this, method) (( Task_1_t1495 * (*) (TaskCompletionSource_1_t8198 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58552_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58553_gshared (TaskCompletionSource_1_t8198 * __this, Task_1_t1495 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58553(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8198 *, Task_1_t1495 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58553_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58554_gshared (TaskCompletionSource_1_t8198 * __this, uint32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58554(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8198 *, uint32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58554_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58555_gshared (TaskCompletionSource_1_t8198 * __this, AggregateException_t1279 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58555(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8198 *, AggregateException_t1279 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58555_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58556_gshared (TaskCompletionSource_1_t8198 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58556(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8198 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58556_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58557_gshared (TaskCompletionSource_1_t8198 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58557(__this, method) (( bool (*) (TaskCompletionSource_1_t8198 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58557_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58558_gshared (TaskCompletionSource_1_t8198 * __this, uint32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58558(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8198 *, uint32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m58558_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58559_gshared (TaskCompletionSource_1_t8198 * __this, AggregateException_t1279 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58559(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8198 *, AggregateException_t1279 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58559_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58560_gshared (TaskCompletionSource_1_t8198 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58560(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8198 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58560_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58561_gshared (TaskCompletionSource_1_t8198 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58561(__this, method) (( void (*) (TaskCompletionSource_1_t8198 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58561_gshared)(__this, method)
