#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Single>
struct TaskCompletionSource_1_t8253;
// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t1506;
// System.AggregateException
struct AggregateException_t1285;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58837_gshared (TaskCompletionSource_1_t8253 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58837(__this, method) (( void (*) (TaskCompletionSource_1_t8253 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58837_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Single>::get_Task()
extern "C" Task_1_t1506 * TaskCompletionSource_1_get_Task_m58838_gshared (TaskCompletionSource_1_t8253 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58838(__this, method) (( Task_1_t1506 * (*) (TaskCompletionSource_1_t8253 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58838_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58839_gshared (TaskCompletionSource_1_t8253 * __this, Task_1_t1506 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58839(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8253 *, Task_1_t1506 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58839_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58840_gshared (TaskCompletionSource_1_t8253 * __this, float ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58840(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8253 *, float, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58840_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58841_gshared (TaskCompletionSource_1_t8253 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58841(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8253 *, AggregateException_t1285 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58841_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58842_gshared (TaskCompletionSource_1_t8253 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58842(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8253 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58842_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58843_gshared (TaskCompletionSource_1_t8253 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58843(__this, method) (( bool (*) (TaskCompletionSource_1_t8253 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58843_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58844_gshared (TaskCompletionSource_1_t8253 * __this, float ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58844(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8253 *, float, const MethodInfo*))TaskCompletionSource_1_SetResult_m58844_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58845_gshared (TaskCompletionSource_1_t8253 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58845(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8253 *, AggregateException_t1285 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58845_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58846_gshared (TaskCompletionSource_1_t8253 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58846(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8253 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58846_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58847_gshared (TaskCompletionSource_1_t8253 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58847(__this, method) (( void (*) (TaskCompletionSource_1_t8253 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58847_gshared)(__this, method)
