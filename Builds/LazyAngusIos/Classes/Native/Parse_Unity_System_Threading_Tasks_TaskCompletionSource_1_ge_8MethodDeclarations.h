#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>
struct TaskCompletionSource_1_t8271;
// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t1551;
// System.AggregateException
struct AggregateException_t1336;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59328_gshared (TaskCompletionSource_1_t8271 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59328(__this, method) (( void (*) (TaskCompletionSource_1_t8271 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59328_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::get_Task()
extern "C" Task_1_t1551 * TaskCompletionSource_1_get_Task_m59329_gshared (TaskCompletionSource_1_t8271 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59329(__this, method) (( Task_1_t1551 * (*) (TaskCompletionSource_1_t8271 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59329_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59330_gshared (TaskCompletionSource_1_t8271 * __this, Task_1_t1551 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59330(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8271 *, Task_1_t1551 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59330_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59331_gshared (TaskCompletionSource_1_t8271 * __this, uint16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59331(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8271 *, uint16_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59331_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59332_gshared (TaskCompletionSource_1_t8271 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59332(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8271 *, AggregateException_t1336 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59332_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59333_gshared (TaskCompletionSource_1_t8271 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59333(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8271 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59333_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59334_gshared (TaskCompletionSource_1_t8271 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59334(__this, method) (( bool (*) (TaskCompletionSource_1_t8271 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59334_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59335_gshared (TaskCompletionSource_1_t8271 * __this, uint16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59335(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8271 *, uint16_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m59335_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59336_gshared (TaskCompletionSource_1_t8271 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59336(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8271 *, AggregateException_t1336 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59336_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59337_gshared (TaskCompletionSource_1_t8271 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59337(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8271 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59337_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m59338_gshared (TaskCompletionSource_1_t8271 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m59338(__this, method) (( void (*) (TaskCompletionSource_1_t8271 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m59338_gshared)(__this, method)
