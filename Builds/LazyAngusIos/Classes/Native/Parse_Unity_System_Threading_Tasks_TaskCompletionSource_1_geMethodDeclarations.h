#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
struct TaskCompletionSource_1_t1371;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1398;
// System.AggregateException
struct AggregateException_t1366;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m7524_gshared (TaskCompletionSource_1_t1371 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m7524(__this, method) (( void (*) (TaskCompletionSource_1_t1371 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7524_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::get_Task()
extern "C" Task_1_t1398 * TaskCompletionSource_1_get_Task_m7526_gshared (TaskCompletionSource_1_t1371 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m7526(__this, method) (( Task_1_t1398 * (*) (TaskCompletionSource_1_t1371 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7526_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m35389_gshared (TaskCompletionSource_1_t1371 * __this, Task_1_t1398 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m35389(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1371 *, Task_1_t1398 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m35389_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m8034_gshared (TaskCompletionSource_1_t1371 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m8034(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1371 *, int32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m8034_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m8055_gshared (TaskCompletionSource_1_t1371 * __this, AggregateException_t1366 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m8055(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1371 *, AggregateException_t1366 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m8055_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m35390_gshared (TaskCompletionSource_1_t1371 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m35390(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1371 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35390_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m8056_gshared (TaskCompletionSource_1_t1371 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m8056(__this, method) (( bool (*) (TaskCompletionSource_1_t1371 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m8056_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m8032_gshared (TaskCompletionSource_1_t1371 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m8032(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1371 *, int32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m8032_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m8031_gshared (TaskCompletionSource_1_t1371 * __this, AggregateException_t1366 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m8031(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1371 *, AggregateException_t1366 *, const MethodInfo*))TaskCompletionSource_1_SetException_m8031_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m35391_gshared (TaskCompletionSource_1_t1371 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m35391(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1371 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35391_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m7525_gshared (TaskCompletionSource_1_t1371 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m7525(__this, method) (( void (*) (TaskCompletionSource_1_t1371 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7525_gshared)(__this, method)
