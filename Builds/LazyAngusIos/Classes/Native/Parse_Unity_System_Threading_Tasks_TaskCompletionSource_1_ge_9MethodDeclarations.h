#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>
struct TaskCompletionSource_1_t8209;
// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t1505;
// System.AggregateException
struct AggregateException_t1289;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58629_gshared (TaskCompletionSource_1_t8209 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58629(__this, method) (( void (*) (TaskCompletionSource_1_t8209 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58629_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::get_Task()
extern "C" Task_1_t1505 * TaskCompletionSource_1_get_Task_m58630_gshared (TaskCompletionSource_1_t8209 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58630(__this, method) (( Task_1_t1505 * (*) (TaskCompletionSource_1_t8209 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58630_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58631_gshared (TaskCompletionSource_1_t8209 * __this, Task_1_t1505 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58631(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8209 *, Task_1_t1505 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58631_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58632_gshared (TaskCompletionSource_1_t8209 * __this, uint32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58632(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8209 *, uint32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58632_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58633_gshared (TaskCompletionSource_1_t8209 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58633(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8209 *, AggregateException_t1289 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58633_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58634_gshared (TaskCompletionSource_1_t8209 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58634(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8209 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58634_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58635_gshared (TaskCompletionSource_1_t8209 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58635(__this, method) (( bool (*) (TaskCompletionSource_1_t8209 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58635_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58636_gshared (TaskCompletionSource_1_t8209 * __this, uint32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58636(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8209 *, uint32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m58636_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58637_gshared (TaskCompletionSource_1_t8209 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58637(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8209 *, AggregateException_t1289 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58637_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58638_gshared (TaskCompletionSource_1_t8209 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58638(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8209 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58638_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58639_gshared (TaskCompletionSource_1_t8209 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58639(__this, method) (( void (*) (TaskCompletionSource_1_t8209 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58639_gshared)(__this, method)
