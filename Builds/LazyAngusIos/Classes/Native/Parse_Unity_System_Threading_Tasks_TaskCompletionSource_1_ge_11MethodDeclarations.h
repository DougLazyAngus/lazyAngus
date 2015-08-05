#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>
struct TaskCompletionSource_1_t8232;
// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t1506;
// System.AggregateException
struct AggregateException_t1288;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58737_gshared (TaskCompletionSource_1_t8232 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58737(__this, method) (( void (*) (TaskCompletionSource_1_t8232 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58737_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::get_Task()
extern "C" Task_1_t1506 * TaskCompletionSource_1_get_Task_m58738_gshared (TaskCompletionSource_1_t8232 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58738(__this, method) (( Task_1_t1506 * (*) (TaskCompletionSource_1_t8232 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58738_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58739_gshared (TaskCompletionSource_1_t8232 * __this, Task_1_t1506 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58739(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8232 *, Task_1_t1506 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58739_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58740_gshared (TaskCompletionSource_1_t8232 * __this, uint64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58740(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8232 *, uint64_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58740_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58741_gshared (TaskCompletionSource_1_t8232 * __this, AggregateException_t1288 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58741(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8232 *, AggregateException_t1288 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58741_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58742_gshared (TaskCompletionSource_1_t8232 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58742(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8232 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58742_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58743_gshared (TaskCompletionSource_1_t8232 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58743(__this, method) (( bool (*) (TaskCompletionSource_1_t8232 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58743_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58744_gshared (TaskCompletionSource_1_t8232 * __this, uint64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58744(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8232 *, uint64_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m58744_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58745_gshared (TaskCompletionSource_1_t8232 * __this, AggregateException_t1288 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58745(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8232 *, AggregateException_t1288 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58745_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58746_gshared (TaskCompletionSource_1_t8232 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58746(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8232 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58746_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58747_gshared (TaskCompletionSource_1_t8232 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58747(__this, method) (( void (*) (TaskCompletionSource_1_t8232 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58747_gshared)(__this, method)
