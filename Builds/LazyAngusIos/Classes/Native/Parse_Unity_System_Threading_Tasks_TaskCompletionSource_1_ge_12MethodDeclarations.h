#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Double>
struct TaskCompletionSource_1_t8322;
// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1559;
// System.AggregateException
struct AggregateException_t1339;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59600_gshared (TaskCompletionSource_1_t8322 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59600(__this, method) (( void (*) (TaskCompletionSource_1_t8322 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59600_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Double>::get_Task()
extern "C" Task_1_t1559 * TaskCompletionSource_1_get_Task_m59601_gshared (TaskCompletionSource_1_t8322 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59601(__this, method) (( Task_1_t1559 * (*) (TaskCompletionSource_1_t8322 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59601_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59602_gshared (TaskCompletionSource_1_t8322 * __this, Task_1_t1559 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59602(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8322 *, Task_1_t1559 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59602_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59603_gshared (TaskCompletionSource_1_t8322 * __this, double ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59603(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8322 *, double, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59603_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59604_gshared (TaskCompletionSource_1_t8322 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59604(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8322 *, AggregateException_t1339 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59604_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59605_gshared (TaskCompletionSource_1_t8322 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59605(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8322 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59605_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59606_gshared (TaskCompletionSource_1_t8322 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59606(__this, method) (( bool (*) (TaskCompletionSource_1_t8322 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59606_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59607_gshared (TaskCompletionSource_1_t8322 * __this, double ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59607(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8322 *, double, const MethodInfo*))TaskCompletionSource_1_SetResult_m59607_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59608_gshared (TaskCompletionSource_1_t8322 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59608(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8322 *, AggregateException_t1339 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59608_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59609_gshared (TaskCompletionSource_1_t8322 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59609(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8322 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59609_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m59610_gshared (TaskCompletionSource_1_t8322 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m59610(__this, method) (( void (*) (TaskCompletionSource_1_t8322 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m59610_gshared)(__this, method)
