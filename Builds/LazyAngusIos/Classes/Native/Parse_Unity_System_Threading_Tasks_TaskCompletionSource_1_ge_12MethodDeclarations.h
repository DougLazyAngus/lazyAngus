#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Double>
struct TaskCompletionSource_1_t8886;
// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1575;
// System.AggregateException
struct AggregateException_t1355;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m64194_gshared (TaskCompletionSource_1_t8886 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m64194(__this, method) (( void (*) (TaskCompletionSource_1_t8886 *, const MethodInfo*))TaskCompletionSource_1__ctor_m64194_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Double>::get_Task()
extern "C" Task_1_t1575 * TaskCompletionSource_1_get_Task_m64195_gshared (TaskCompletionSource_1_t8886 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m64195(__this, method) (( Task_1_t1575 * (*) (TaskCompletionSource_1_t8886 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m64195_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m64196_gshared (TaskCompletionSource_1_t8886 * __this, Task_1_t1575 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m64196(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8886 *, Task_1_t1575 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m64196_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m64197_gshared (TaskCompletionSource_1_t8886 * __this, double ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m64197(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8886 *, double, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m64197_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m64198_gshared (TaskCompletionSource_1_t8886 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64198(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8886 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64198_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m64199_gshared (TaskCompletionSource_1_t8886 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64199(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8886 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64199_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m64200_gshared (TaskCompletionSource_1_t8886 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m64200(__this, method) (( bool (*) (TaskCompletionSource_1_t8886 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m64200_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m64201_gshared (TaskCompletionSource_1_t8886 * __this, double ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m64201(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8886 *, double, const MethodInfo*))TaskCompletionSource_1_SetResult_m64201_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m64202_gshared (TaskCompletionSource_1_t8886 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64202(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8886 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64202_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m64203_gshared (TaskCompletionSource_1_t8886 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64203(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8886 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64203_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m64204_gshared (TaskCompletionSource_1_t8886 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m64204(__this, method) (( void (*) (TaskCompletionSource_1_t8886 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m64204_gshared)(__this, method)
