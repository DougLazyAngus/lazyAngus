#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>
struct TaskCompletionSource_1_t8880;
// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t1577;
// System.AggregateException
struct AggregateException_t1359;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m64154_gshared (TaskCompletionSource_1_t8880 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m64154(__this, method) (( void (*) (TaskCompletionSource_1_t8880 *, const MethodInfo*))TaskCompletionSource_1__ctor_m64154_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::get_Task()
extern "C" Task_1_t1577 * TaskCompletionSource_1_get_Task_m64155_gshared (TaskCompletionSource_1_t8880 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m64155(__this, method) (( Task_1_t1577 * (*) (TaskCompletionSource_1_t8880 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m64155_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m64156_gshared (TaskCompletionSource_1_t8880 * __this, Task_1_t1577 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m64156(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8880 *, Task_1_t1577 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m64156_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m64157_gshared (TaskCompletionSource_1_t8880 * __this, uint64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m64157(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8880 *, uint64_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m64157_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m64158_gshared (TaskCompletionSource_1_t8880 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64158(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8880 *, AggregateException_t1359 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64158_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m64159_gshared (TaskCompletionSource_1_t8880 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64159(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8880 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64159_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m64160_gshared (TaskCompletionSource_1_t8880 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m64160(__this, method) (( bool (*) (TaskCompletionSource_1_t8880 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m64160_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m64161_gshared (TaskCompletionSource_1_t8880 * __this, uint64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m64161(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8880 *, uint64_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m64161_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m64162_gshared (TaskCompletionSource_1_t8880 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64162(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8880 *, AggregateException_t1359 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64162_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m64163_gshared (TaskCompletionSource_1_t8880 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64163(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8880 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64163_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m64164_gshared (TaskCompletionSource_1_t8880 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m64164(__this, method) (( void (*) (TaskCompletionSource_1_t8880 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m64164_gshared)(__this, method)
