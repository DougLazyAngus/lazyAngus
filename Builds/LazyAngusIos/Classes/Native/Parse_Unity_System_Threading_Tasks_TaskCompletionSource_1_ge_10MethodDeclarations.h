#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int64>
struct TaskCompletionSource_1_t8220;
// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1505;
// System.AggregateException
struct AggregateException_t1288;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58679_gshared (TaskCompletionSource_1_t8220 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58679(__this, method) (( void (*) (TaskCompletionSource_1_t8220 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58679_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::get_Task()
extern "C" Task_1_t1505 * TaskCompletionSource_1_get_Task_m58680_gshared (TaskCompletionSource_1_t8220 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58680(__this, method) (( Task_1_t1505 * (*) (TaskCompletionSource_1_t8220 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58680_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58681_gshared (TaskCompletionSource_1_t8220 * __this, Task_1_t1505 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58681(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8220 *, Task_1_t1505 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58681_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58682_gshared (TaskCompletionSource_1_t8220 * __this, int64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58682(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8220 *, int64_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58682_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58683_gshared (TaskCompletionSource_1_t8220 * __this, AggregateException_t1288 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58683(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8220 *, AggregateException_t1288 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58683_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58684_gshared (TaskCompletionSource_1_t8220 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58684(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8220 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58684_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58685_gshared (TaskCompletionSource_1_t8220 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58685(__this, method) (( bool (*) (TaskCompletionSource_1_t8220 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58685_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58686_gshared (TaskCompletionSource_1_t8220 * __this, int64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58686(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8220 *, int64_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m58686_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58687_gshared (TaskCompletionSource_1_t8220 * __this, AggregateException_t1288 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58687(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8220 *, AggregateException_t1288 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58687_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58688_gshared (TaskCompletionSource_1_t8220 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58688(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8220 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58688_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58689_gshared (TaskCompletionSource_1_t8220 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58689(__this, method) (( void (*) (TaskCompletionSource_1_t8220 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58689_gshared)(__this, method)
