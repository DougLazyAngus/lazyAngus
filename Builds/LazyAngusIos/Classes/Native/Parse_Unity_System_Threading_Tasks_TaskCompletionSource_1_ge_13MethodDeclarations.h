#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Single>
struct TaskCompletionSource_1_t8245;
// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t1499;
// System.AggregateException
struct AggregateException_t1278;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58790_gshared (TaskCompletionSource_1_t8245 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58790(__this, method) (( void (*) (TaskCompletionSource_1_t8245 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58790_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Single>::get_Task()
extern "C" Task_1_t1499 * TaskCompletionSource_1_get_Task_m58791_gshared (TaskCompletionSource_1_t8245 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58791(__this, method) (( Task_1_t1499 * (*) (TaskCompletionSource_1_t8245 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58791_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58792_gshared (TaskCompletionSource_1_t8245 * __this, Task_1_t1499 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58792(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8245 *, Task_1_t1499 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58792_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58793_gshared (TaskCompletionSource_1_t8245 * __this, float ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58793(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8245 *, float, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58793_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58794_gshared (TaskCompletionSource_1_t8245 * __this, AggregateException_t1278 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58794(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8245 *, AggregateException_t1278 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58794_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58795_gshared (TaskCompletionSource_1_t8245 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58795(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8245 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58795_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58796_gshared (TaskCompletionSource_1_t8245 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58796(__this, method) (( bool (*) (TaskCompletionSource_1_t8245 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58796_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58797_gshared (TaskCompletionSource_1_t8245 * __this, float ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58797(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8245 *, float, const MethodInfo*))TaskCompletionSource_1_SetResult_m58797_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58798_gshared (TaskCompletionSource_1_t8245 * __this, AggregateException_t1278 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58798(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8245 *, AggregateException_t1278 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58798_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58799_gshared (TaskCompletionSource_1_t8245 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58799(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8245 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58799_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58800_gshared (TaskCompletionSource_1_t8245 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58800(__this, method) (( void (*) (TaskCompletionSource_1_t8245 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58800_gshared)(__this, method)
