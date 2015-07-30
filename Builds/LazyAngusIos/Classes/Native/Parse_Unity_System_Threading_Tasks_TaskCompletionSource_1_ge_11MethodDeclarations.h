#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>
struct TaskCompletionSource_1_t8229;
// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t1503;
// System.AggregateException
struct AggregateException_t1285;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58714_gshared (TaskCompletionSource_1_t8229 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58714(__this, method) (( void (*) (TaskCompletionSource_1_t8229 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58714_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::get_Task()
extern "C" Task_1_t1503 * TaskCompletionSource_1_get_Task_m58715_gshared (TaskCompletionSource_1_t8229 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58715(__this, method) (( Task_1_t1503 * (*) (TaskCompletionSource_1_t8229 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58715_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58716_gshared (TaskCompletionSource_1_t8229 * __this, Task_1_t1503 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58716(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8229 *, Task_1_t1503 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58716_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58717_gshared (TaskCompletionSource_1_t8229 * __this, uint64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58717(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8229 *, uint64_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58717_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58718_gshared (TaskCompletionSource_1_t8229 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58718(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8229 *, AggregateException_t1285 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58718_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58719_gshared (TaskCompletionSource_1_t8229 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58719(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8229 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58719_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58720_gshared (TaskCompletionSource_1_t8229 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58720(__this, method) (( bool (*) (TaskCompletionSource_1_t8229 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58720_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58721_gshared (TaskCompletionSource_1_t8229 * __this, uint64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58721(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8229 *, uint64_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m58721_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58722_gshared (TaskCompletionSource_1_t8229 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58722(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8229 *, AggregateException_t1285 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58722_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58723_gshared (TaskCompletionSource_1_t8229 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58723(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8229 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58723_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58724_gshared (TaskCompletionSource_1_t8229 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58724(__this, method) (( void (*) (TaskCompletionSource_1_t8229 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58724_gshared)(__this, method)
