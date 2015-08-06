#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>
struct TaskCompletionSource_1_t8231;
// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t1505;
// System.AggregateException
struct AggregateException_t1287;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58730_gshared (TaskCompletionSource_1_t8231 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58730(__this, method) (( void (*) (TaskCompletionSource_1_t8231 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58730_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::get_Task()
extern "C" Task_1_t1505 * TaskCompletionSource_1_get_Task_m58731_gshared (TaskCompletionSource_1_t8231 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58731(__this, method) (( Task_1_t1505 * (*) (TaskCompletionSource_1_t8231 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58731_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58732_gshared (TaskCompletionSource_1_t8231 * __this, Task_1_t1505 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58732(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8231 *, Task_1_t1505 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58732_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58733_gshared (TaskCompletionSource_1_t8231 * __this, uint64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58733(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8231 *, uint64_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58733_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58734_gshared (TaskCompletionSource_1_t8231 * __this, AggregateException_t1287 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58734(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8231 *, AggregateException_t1287 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58734_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58735_gshared (TaskCompletionSource_1_t8231 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58735(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8231 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58735_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58736_gshared (TaskCompletionSource_1_t8231 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58736(__this, method) (( bool (*) (TaskCompletionSource_1_t8231 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58736_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58737_gshared (TaskCompletionSource_1_t8231 * __this, uint64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58737(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8231 *, uint64_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m58737_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58738_gshared (TaskCompletionSource_1_t8231 * __this, AggregateException_t1287 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58738(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8231 *, AggregateException_t1287 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58738_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58739_gshared (TaskCompletionSource_1_t8231 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58739(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8231 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58739_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58740_gshared (TaskCompletionSource_1_t8231 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58740(__this, method) (( void (*) (TaskCompletionSource_1_t8231 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58740_gshared)(__this, method)
