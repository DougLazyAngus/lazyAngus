#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
struct TaskCompletionSource_1_t1343;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1370;
// System.AggregateException
struct AggregateException_t1338;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m7297_gshared (TaskCompletionSource_1_t1343 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m7297(__this, method) (( void (*) (TaskCompletionSource_1_t1343 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7297_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::get_Task()
extern "C" Task_1_t1370 * TaskCompletionSource_1_get_Task_m7299_gshared (TaskCompletionSource_1_t1343 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m7299(__this, method) (( Task_1_t1370 * (*) (TaskCompletionSource_1_t1343 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7299_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m30631_gshared (TaskCompletionSource_1_t1343 * __this, Task_1_t1370 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m30631(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1343 *, Task_1_t1370 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m30631_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m7807_gshared (TaskCompletionSource_1_t1343 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m7807(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1343 *, int32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m7807_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m7828_gshared (TaskCompletionSource_1_t1343 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m7828(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1343 *, AggregateException_t1338 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m7828_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m30632_gshared (TaskCompletionSource_1_t1343 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m30632(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1343 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30632_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m7829_gshared (TaskCompletionSource_1_t1343 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m7829(__this, method) (( bool (*) (TaskCompletionSource_1_t1343 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m7829_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m7805_gshared (TaskCompletionSource_1_t1343 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m7805(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1343 *, int32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m7805_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m7804_gshared (TaskCompletionSource_1_t1343 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m7804(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1343 *, AggregateException_t1338 *, const MethodInfo*))TaskCompletionSource_1_SetException_m7804_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m30633_gshared (TaskCompletionSource_1_t1343 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m30633(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1343 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30633_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m7298_gshared (TaskCompletionSource_1_t1343 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m7298(__this, method) (( void (*) (TaskCompletionSource_1_t1343 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7298_gshared)(__this, method)
