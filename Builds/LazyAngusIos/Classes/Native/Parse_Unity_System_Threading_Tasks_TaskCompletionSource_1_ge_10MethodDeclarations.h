#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int64>
struct TaskCompletionSource_1_t8219;
// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1504;
// System.AggregateException
struct AggregateException_t1287;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58672_gshared (TaskCompletionSource_1_t8219 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58672(__this, method) (( void (*) (TaskCompletionSource_1_t8219 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58672_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::get_Task()
extern "C" Task_1_t1504 * TaskCompletionSource_1_get_Task_m58673_gshared (TaskCompletionSource_1_t8219 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58673(__this, method) (( Task_1_t1504 * (*) (TaskCompletionSource_1_t8219 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58673_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58674_gshared (TaskCompletionSource_1_t8219 * __this, Task_1_t1504 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58674(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8219 *, Task_1_t1504 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58674_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58675_gshared (TaskCompletionSource_1_t8219 * __this, int64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58675(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8219 *, int64_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58675_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58676_gshared (TaskCompletionSource_1_t8219 * __this, AggregateException_t1287 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58676(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8219 *, AggregateException_t1287 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58676_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58677_gshared (TaskCompletionSource_1_t8219 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58677(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8219 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58677_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58678_gshared (TaskCompletionSource_1_t8219 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58678(__this, method) (( bool (*) (TaskCompletionSource_1_t8219 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58678_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58679_gshared (TaskCompletionSource_1_t8219 * __this, int64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58679(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8219 *, int64_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m58679_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58680_gshared (TaskCompletionSource_1_t8219 * __this, AggregateException_t1287 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58680(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8219 *, AggregateException_t1287 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58680_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58681_gshared (TaskCompletionSource_1_t8219 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58681(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8219 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58681_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58682_gshared (TaskCompletionSource_1_t8219 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58682(__this, method) (( void (*) (TaskCompletionSource_1_t8219 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58682_gshared)(__this, method)
