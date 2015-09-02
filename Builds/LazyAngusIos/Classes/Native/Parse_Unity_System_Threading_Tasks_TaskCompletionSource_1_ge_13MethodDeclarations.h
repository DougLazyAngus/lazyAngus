#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Single>
struct TaskCompletionSource_1_t8363;
// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t1576;
// System.AggregateException
struct AggregateException_t1355;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59990_gshared (TaskCompletionSource_1_t8363 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59990(__this, method) (( void (*) (TaskCompletionSource_1_t8363 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59990_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Single>::get_Task()
extern "C" Task_1_t1576 * TaskCompletionSource_1_get_Task_m59991_gshared (TaskCompletionSource_1_t8363 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59991(__this, method) (( Task_1_t1576 * (*) (TaskCompletionSource_1_t8363 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59991_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59992_gshared (TaskCompletionSource_1_t8363 * __this, Task_1_t1576 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59992(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8363 *, Task_1_t1576 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59992_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59993_gshared (TaskCompletionSource_1_t8363 * __this, float ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59993(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8363 *, float, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59993_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59994_gshared (TaskCompletionSource_1_t8363 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59994(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8363 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59994_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59995_gshared (TaskCompletionSource_1_t8363 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59995(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8363 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59995_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59996_gshared (TaskCompletionSource_1_t8363 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59996(__this, method) (( bool (*) (TaskCompletionSource_1_t8363 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59996_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59997_gshared (TaskCompletionSource_1_t8363 * __this, float ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59997(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8363 *, float, const MethodInfo*))TaskCompletionSource_1_SetResult_m59997_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59998_gshared (TaskCompletionSource_1_t8363 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59998(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8363 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59998_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59999_gshared (TaskCompletionSource_1_t8363 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59999(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8363 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59999_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m60000_gshared (TaskCompletionSource_1_t8363 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m60000(__this, method) (( void (*) (TaskCompletionSource_1_t8363 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m60000_gshared)(__this, method)
