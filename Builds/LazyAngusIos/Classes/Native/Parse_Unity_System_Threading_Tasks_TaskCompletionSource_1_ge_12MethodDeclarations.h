#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Double>
struct TaskCompletionSource_1_t8243;
// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1507;
// System.AggregateException
struct AggregateException_t1287;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58795_gshared (TaskCompletionSource_1_t8243 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58795(__this, method) (( void (*) (TaskCompletionSource_1_t8243 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58795_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Double>::get_Task()
extern "C" Task_1_t1507 * TaskCompletionSource_1_get_Task_m58796_gshared (TaskCompletionSource_1_t8243 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58796(__this, method) (( Task_1_t1507 * (*) (TaskCompletionSource_1_t8243 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58796_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58797_gshared (TaskCompletionSource_1_t8243 * __this, Task_1_t1507 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58797(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8243 *, Task_1_t1507 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58797_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58798_gshared (TaskCompletionSource_1_t8243 * __this, double ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58798(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8243 *, double, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58798_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58799_gshared (TaskCompletionSource_1_t8243 * __this, AggregateException_t1287 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58799(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8243 *, AggregateException_t1287 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58799_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58800_gshared (TaskCompletionSource_1_t8243 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58800(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8243 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58800_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58801_gshared (TaskCompletionSource_1_t8243 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58801(__this, method) (( bool (*) (TaskCompletionSource_1_t8243 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58801_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58802_gshared (TaskCompletionSource_1_t8243 * __this, double ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58802(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8243 *, double, const MethodInfo*))TaskCompletionSource_1_SetResult_m58802_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58803_gshared (TaskCompletionSource_1_t8243 * __this, AggregateException_t1287 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58803(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8243 *, AggregateException_t1287 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58803_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58804_gshared (TaskCompletionSource_1_t8243 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58804(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8243 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58804_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58805_gshared (TaskCompletionSource_1_t8243 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58805(__this, method) (( void (*) (TaskCompletionSource_1_t8243 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58805_gshared)(__this, method)
