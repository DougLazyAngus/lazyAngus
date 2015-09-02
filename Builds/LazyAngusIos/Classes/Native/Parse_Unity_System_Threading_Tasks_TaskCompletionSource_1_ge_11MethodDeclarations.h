#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>
struct TaskCompletionSource_1_t8339;
// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t1573;
// System.AggregateException
struct AggregateException_t1355;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59867_gshared (TaskCompletionSource_1_t8339 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59867(__this, method) (( void (*) (TaskCompletionSource_1_t8339 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59867_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::get_Task()
extern "C" Task_1_t1573 * TaskCompletionSource_1_get_Task_m59868_gshared (TaskCompletionSource_1_t8339 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59868(__this, method) (( Task_1_t1573 * (*) (TaskCompletionSource_1_t8339 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59868_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59869_gshared (TaskCompletionSource_1_t8339 * __this, Task_1_t1573 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59869(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8339 *, Task_1_t1573 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59869_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59870_gshared (TaskCompletionSource_1_t8339 * __this, uint64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59870(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8339 *, uint64_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59870_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59871_gshared (TaskCompletionSource_1_t8339 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59871(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8339 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59871_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59872_gshared (TaskCompletionSource_1_t8339 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59872(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8339 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59872_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59873_gshared (TaskCompletionSource_1_t8339 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59873(__this, method) (( bool (*) (TaskCompletionSource_1_t8339 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59873_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59874_gshared (TaskCompletionSource_1_t8339 * __this, uint64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59874(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8339 *, uint64_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m59874_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59875_gshared (TaskCompletionSource_1_t8339 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59875(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8339 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59875_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59876_gshared (TaskCompletionSource_1_t8339 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59876(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8339 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59876_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m59877_gshared (TaskCompletionSource_1_t8339 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m59877(__this, method) (( void (*) (TaskCompletionSource_1_t8339 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m59877_gshared)(__this, method)
