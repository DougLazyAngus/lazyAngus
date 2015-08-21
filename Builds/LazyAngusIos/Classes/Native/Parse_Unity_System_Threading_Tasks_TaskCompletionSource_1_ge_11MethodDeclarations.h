#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>
struct TaskCompletionSource_1_t8307;
// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t1554;
// System.AggregateException
struct AggregateException_t1336;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59503_gshared (TaskCompletionSource_1_t8307 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59503(__this, method) (( void (*) (TaskCompletionSource_1_t8307 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59503_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::get_Task()
extern "C" Task_1_t1554 * TaskCompletionSource_1_get_Task_m59504_gshared (TaskCompletionSource_1_t8307 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59504(__this, method) (( Task_1_t1554 * (*) (TaskCompletionSource_1_t8307 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59504_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59505_gshared (TaskCompletionSource_1_t8307 * __this, Task_1_t1554 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59505(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8307 *, Task_1_t1554 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59505_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59506_gshared (TaskCompletionSource_1_t8307 * __this, uint64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59506(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8307 *, uint64_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59506_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59507_gshared (TaskCompletionSource_1_t8307 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59507(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8307 *, AggregateException_t1336 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59507_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59508_gshared (TaskCompletionSource_1_t8307 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59508(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8307 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59508_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59509_gshared (TaskCompletionSource_1_t8307 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59509(__this, method) (( bool (*) (TaskCompletionSource_1_t8307 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59509_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59510_gshared (TaskCompletionSource_1_t8307 * __this, uint64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59510(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8307 *, uint64_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m59510_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59511_gshared (TaskCompletionSource_1_t8307 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59511(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8307 *, AggregateException_t1336 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59511_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59512_gshared (TaskCompletionSource_1_t8307 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59512(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8307 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59512_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m59513_gshared (TaskCompletionSource_1_t8307 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m59513(__this, method) (( void (*) (TaskCompletionSource_1_t8307 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m59513_gshared)(__this, method)
