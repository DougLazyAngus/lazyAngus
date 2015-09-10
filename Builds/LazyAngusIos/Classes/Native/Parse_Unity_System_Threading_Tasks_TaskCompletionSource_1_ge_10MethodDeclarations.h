#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int64>
struct TaskCompletionSource_1_t8875;
// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1583;
// System.AggregateException
struct AggregateException_t1366;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m64153_gshared (TaskCompletionSource_1_t8875 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m64153(__this, method) (( void (*) (TaskCompletionSource_1_t8875 *, const MethodInfo*))TaskCompletionSource_1__ctor_m64153_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::get_Task()
extern "C" Task_1_t1583 * TaskCompletionSource_1_get_Task_m64154_gshared (TaskCompletionSource_1_t8875 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m64154(__this, method) (( Task_1_t1583 * (*) (TaskCompletionSource_1_t8875 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m64154_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m64155_gshared (TaskCompletionSource_1_t8875 * __this, Task_1_t1583 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m64155(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8875 *, Task_1_t1583 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m64155_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m64156_gshared (TaskCompletionSource_1_t8875 * __this, int64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m64156(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8875 *, int64_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m64156_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m64157_gshared (TaskCompletionSource_1_t8875 * __this, AggregateException_t1366 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64157(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8875 *, AggregateException_t1366 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64157_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m64158_gshared (TaskCompletionSource_1_t8875 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64158(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8875 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64158_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m64159_gshared (TaskCompletionSource_1_t8875 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m64159(__this, method) (( bool (*) (TaskCompletionSource_1_t8875 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m64159_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m64160_gshared (TaskCompletionSource_1_t8875 * __this, int64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m64160(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8875 *, int64_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m64160_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m64161_gshared (TaskCompletionSource_1_t8875 * __this, AggregateException_t1366 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64161(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8875 *, AggregateException_t1366 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64161_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m64162_gshared (TaskCompletionSource_1_t8875 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64162(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8875 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64162_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m64163_gshared (TaskCompletionSource_1_t8875 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m64163(__this, method) (( void (*) (TaskCompletionSource_1_t8875 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m64163_gshared)(__this, method)
