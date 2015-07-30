#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Double>
struct TaskCompletionSource_1_t8241;
// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1505;
// System.AggregateException
struct AggregateException_t1285;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58779_gshared (TaskCompletionSource_1_t8241 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58779(__this, method) (( void (*) (TaskCompletionSource_1_t8241 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58779_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Double>::get_Task()
extern "C" Task_1_t1505 * TaskCompletionSource_1_get_Task_m58780_gshared (TaskCompletionSource_1_t8241 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58780(__this, method) (( Task_1_t1505 * (*) (TaskCompletionSource_1_t8241 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58780_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58781_gshared (TaskCompletionSource_1_t8241 * __this, Task_1_t1505 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58781(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8241 *, Task_1_t1505 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58781_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58782_gshared (TaskCompletionSource_1_t8241 * __this, double ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58782(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8241 *, double, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58782_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58783_gshared (TaskCompletionSource_1_t8241 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58783(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8241 *, AggregateException_t1285 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58783_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58784_gshared (TaskCompletionSource_1_t8241 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58784(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8241 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58784_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58785_gshared (TaskCompletionSource_1_t8241 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58785(__this, method) (( bool (*) (TaskCompletionSource_1_t8241 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58785_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58786_gshared (TaskCompletionSource_1_t8241 * __this, double ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58786(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8241 *, double, const MethodInfo*))TaskCompletionSource_1_SetResult_m58786_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58787_gshared (TaskCompletionSource_1_t8241 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58787(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8241 *, AggregateException_t1285 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58787_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58788_gshared (TaskCompletionSource_1_t8241 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58788(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8241 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58788_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58789_gshared (TaskCompletionSource_1_t8241 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58789(__this, method) (( void (*) (TaskCompletionSource_1_t8241 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58789_gshared)(__this, method)
