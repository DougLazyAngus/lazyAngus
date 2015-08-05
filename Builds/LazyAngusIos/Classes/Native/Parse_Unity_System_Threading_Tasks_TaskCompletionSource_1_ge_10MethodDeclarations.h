#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int64>
struct TaskCompletionSource_1_t8221;
// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1506;
// System.AggregateException
struct AggregateException_t1289;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58684_gshared (TaskCompletionSource_1_t8221 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58684(__this, method) (( void (*) (TaskCompletionSource_1_t8221 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58684_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::get_Task()
extern "C" Task_1_t1506 * TaskCompletionSource_1_get_Task_m58685_gshared (TaskCompletionSource_1_t8221 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58685(__this, method) (( Task_1_t1506 * (*) (TaskCompletionSource_1_t8221 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58685_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58686_gshared (TaskCompletionSource_1_t8221 * __this, Task_1_t1506 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58686(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8221 *, Task_1_t1506 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58686_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58687_gshared (TaskCompletionSource_1_t8221 * __this, int64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58687(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8221 *, int64_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58687_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58688_gshared (TaskCompletionSource_1_t8221 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58688(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8221 *, AggregateException_t1289 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58688_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58689_gshared (TaskCompletionSource_1_t8221 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58689(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8221 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58689_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58690_gshared (TaskCompletionSource_1_t8221 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58690(__this, method) (( bool (*) (TaskCompletionSource_1_t8221 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58690_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58691_gshared (TaskCompletionSource_1_t8221 * __this, int64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58691(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8221 *, int64_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m58691_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58692_gshared (TaskCompletionSource_1_t8221 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58692(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8221 *, AggregateException_t1289 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58692_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58693_gshared (TaskCompletionSource_1_t8221 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58693(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8221 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58693_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58694_gshared (TaskCompletionSource_1_t8221 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58694(__this, method) (( void (*) (TaskCompletionSource_1_t8221 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58694_gshared)(__this, method)
