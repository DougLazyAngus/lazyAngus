#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>
struct TaskCompletionSource_1_t8222;
// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t1497;
// System.AggregateException
struct AggregateException_t1279;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58667_gshared (TaskCompletionSource_1_t8222 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58667(__this, method) (( void (*) (TaskCompletionSource_1_t8222 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58667_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::get_Task()
extern "C" Task_1_t1497 * TaskCompletionSource_1_get_Task_m58668_gshared (TaskCompletionSource_1_t8222 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58668(__this, method) (( Task_1_t1497 * (*) (TaskCompletionSource_1_t8222 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58668_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58669_gshared (TaskCompletionSource_1_t8222 * __this, Task_1_t1497 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58669(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8222 *, Task_1_t1497 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58669_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58670_gshared (TaskCompletionSource_1_t8222 * __this, uint64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58670(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8222 *, uint64_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58670_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58671_gshared (TaskCompletionSource_1_t8222 * __this, AggregateException_t1279 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58671(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8222 *, AggregateException_t1279 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58671_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58672_gshared (TaskCompletionSource_1_t8222 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58672(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8222 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58672_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58673_gshared (TaskCompletionSource_1_t8222 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58673(__this, method) (( bool (*) (TaskCompletionSource_1_t8222 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58673_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58674_gshared (TaskCompletionSource_1_t8222 * __this, uint64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58674(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8222 *, uint64_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m58674_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58675_gshared (TaskCompletionSource_1_t8222 * __this, AggregateException_t1279 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58675(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8222 *, AggregateException_t1279 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58675_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58676_gshared (TaskCompletionSource_1_t8222 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58676(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8222 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58676_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58677_gshared (TaskCompletionSource_1_t8222 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58677(__this, method) (( void (*) (TaskCompletionSource_1_t8222 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58677_gshared)(__this, method)
