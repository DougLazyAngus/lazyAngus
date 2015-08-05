#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Double>
struct TaskCompletionSource_1_t8244;
// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1508;
// System.AggregateException
struct AggregateException_t1288;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58802_gshared (TaskCompletionSource_1_t8244 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58802(__this, method) (( void (*) (TaskCompletionSource_1_t8244 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58802_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Double>::get_Task()
extern "C" Task_1_t1508 * TaskCompletionSource_1_get_Task_m58803_gshared (TaskCompletionSource_1_t8244 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58803(__this, method) (( Task_1_t1508 * (*) (TaskCompletionSource_1_t8244 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58803_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58804_gshared (TaskCompletionSource_1_t8244 * __this, Task_1_t1508 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58804(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8244 *, Task_1_t1508 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58804_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58805_gshared (TaskCompletionSource_1_t8244 * __this, double ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58805(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8244 *, double, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58805_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58806_gshared (TaskCompletionSource_1_t8244 * __this, AggregateException_t1288 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58806(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8244 *, AggregateException_t1288 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58806_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58807_gshared (TaskCompletionSource_1_t8244 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58807(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8244 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58807_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58808_gshared (TaskCompletionSource_1_t8244 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58808(__this, method) (( bool (*) (TaskCompletionSource_1_t8244 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58808_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58809_gshared (TaskCompletionSource_1_t8244 * __this, double ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58809(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8244 *, double, const MethodInfo*))TaskCompletionSource_1_SetResult_m58809_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58810_gshared (TaskCompletionSource_1_t8244 * __this, AggregateException_t1288 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58810(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8244 *, AggregateException_t1288 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58810_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58811_gshared (TaskCompletionSource_1_t8244 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58811(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8244 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58811_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58812_gshared (TaskCompletionSource_1_t8244 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58812(__this, method) (( void (*) (TaskCompletionSource_1_t8244 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58812_gshared)(__this, method)
