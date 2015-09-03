#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>
struct TaskCompletionSource_1_t8838;
// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t1570;
// System.AggregateException
struct AggregateException_t1355;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m63955_gshared (TaskCompletionSource_1_t8838 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m63955(__this, method) (( void (*) (TaskCompletionSource_1_t8838 *, const MethodInfo*))TaskCompletionSource_1__ctor_m63955_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::get_Task()
extern "C" Task_1_t1570 * TaskCompletionSource_1_get_Task_m63956_gshared (TaskCompletionSource_1_t8838 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m63956(__this, method) (( Task_1_t1570 * (*) (TaskCompletionSource_1_t8838 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m63956_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m63957_gshared (TaskCompletionSource_1_t8838 * __this, Task_1_t1570 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m63957(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8838 *, Task_1_t1570 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m63957_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m63958_gshared (TaskCompletionSource_1_t8838 * __this, uint16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m63958(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8838 *, uint16_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m63958_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m63959_gshared (TaskCompletionSource_1_t8838 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m63959(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8838 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m63959_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m63960_gshared (TaskCompletionSource_1_t8838 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m63960(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8838 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m63960_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m63961_gshared (TaskCompletionSource_1_t8838 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m63961(__this, method) (( bool (*) (TaskCompletionSource_1_t8838 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m63961_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m63962_gshared (TaskCompletionSource_1_t8838 * __this, uint16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m63962(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8838 *, uint16_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m63962_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m63963_gshared (TaskCompletionSource_1_t8838 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m63963(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8838 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_SetException_m63963_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m63964_gshared (TaskCompletionSource_1_t8838 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m63964(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8838 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m63964_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m63965_gshared (TaskCompletionSource_1_t8838 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m63965(__this, method) (( void (*) (TaskCompletionSource_1_t8838 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m63965_gshared)(__this, method)
