#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t1330;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1393;
// System.Object
struct Object_t;
// System.AggregateException
struct AggregateException_t1338;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m7300_gshared (TaskCompletionSource_1_t1330 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m7300(__this, method) (( void (*) (TaskCompletionSource_1_t1330 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7300_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
extern "C" Task_1_t1393 * TaskCompletionSource_1_get_Task_m7302_gshared (TaskCompletionSource_1_t1330 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m7302(__this, method) (( Task_1_t1393 * (*) (TaskCompletionSource_1_t1330 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7302_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m30574_gshared (TaskCompletionSource_1_t1330 * __this, Task_1_t1393 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m30574(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1330 *, Task_1_t1393 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m30574_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m30575_gshared (TaskCompletionSource_1_t1330 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m30575(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1330 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m30575_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m30576_gshared (TaskCompletionSource_1_t1330 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m30576(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1330 *, AggregateException_t1338 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30576_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m30577_gshared (TaskCompletionSource_1_t1330 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m30577(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1330 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30577_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m30578_gshared (TaskCompletionSource_1_t1330 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m30578(__this, method) (( bool (*) (TaskCompletionSource_1_t1330 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m30578_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m7744_gshared (TaskCompletionSource_1_t1330 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m7744(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1330 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7744_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m30579_gshared (TaskCompletionSource_1_t1330 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m30579(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1330 *, AggregateException_t1338 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30579_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m30580_gshared (TaskCompletionSource_1_t1330 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m30580(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1330 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30580_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m7301_gshared (TaskCompletionSource_1_t1330 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m7301(__this, method) (( void (*) (TaskCompletionSource_1_t1330 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7301_gshared)(__this, method)
