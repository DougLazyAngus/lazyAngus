#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Double>
struct TaskCompletionSource_1_t8319;
// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1556;
// System.AggregateException
struct AggregateException_t1336;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59568_gshared (TaskCompletionSource_1_t8319 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59568(__this, method) (( void (*) (TaskCompletionSource_1_t8319 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59568_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Double>::get_Task()
extern "C" Task_1_t1556 * TaskCompletionSource_1_get_Task_m59569_gshared (TaskCompletionSource_1_t8319 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59569(__this, method) (( Task_1_t1556 * (*) (TaskCompletionSource_1_t8319 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59569_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59570_gshared (TaskCompletionSource_1_t8319 * __this, Task_1_t1556 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59570(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8319 *, Task_1_t1556 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59570_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59571_gshared (TaskCompletionSource_1_t8319 * __this, double ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59571(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8319 *, double, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59571_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59572_gshared (TaskCompletionSource_1_t8319 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59572(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8319 *, AggregateException_t1336 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59572_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59573_gshared (TaskCompletionSource_1_t8319 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59573(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8319 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59573_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59574_gshared (TaskCompletionSource_1_t8319 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59574(__this, method) (( bool (*) (TaskCompletionSource_1_t8319 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59574_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59575_gshared (TaskCompletionSource_1_t8319 * __this, double ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59575(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8319 *, double, const MethodInfo*))TaskCompletionSource_1_SetResult_m59575_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59576_gshared (TaskCompletionSource_1_t8319 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59576(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8319 *, AggregateException_t1336 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59576_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59577_gshared (TaskCompletionSource_1_t8319 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59577(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8319 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59577_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m59578_gshared (TaskCompletionSource_1_t8319 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m59578(__this, method) (( void (*) (TaskCompletionSource_1_t8319 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m59578_gshared)(__this, method)
