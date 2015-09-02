#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int16>
struct TaskCompletionSource_1_t8291;
// System.Threading.Tasks.Task`1<System.Int16>
struct Task_1_t1569;
// System.AggregateException
struct AggregateException_t1355;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59635_gshared (TaskCompletionSource_1_t8291 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59635(__this, method) (( void (*) (TaskCompletionSource_1_t8291 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59635_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::get_Task()
extern "C" Task_1_t1569 * TaskCompletionSource_1_get_Task_m59636_gshared (TaskCompletionSource_1_t8291 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59636(__this, method) (( Task_1_t1569 * (*) (TaskCompletionSource_1_t8291 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59636_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59637_gshared (TaskCompletionSource_1_t8291 * __this, Task_1_t1569 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59637(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8291 *, Task_1_t1569 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59637_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59638_gshared (TaskCompletionSource_1_t8291 * __this, int16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59638(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8291 *, int16_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59638_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59639_gshared (TaskCompletionSource_1_t8291 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59639(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8291 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59639_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59640_gshared (TaskCompletionSource_1_t8291 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59640(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8291 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59640_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59641_gshared (TaskCompletionSource_1_t8291 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59641(__this, method) (( bool (*) (TaskCompletionSource_1_t8291 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59641_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59642_gshared (TaskCompletionSource_1_t8291 * __this, int16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59642(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8291 *, int16_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m59642_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59643_gshared (TaskCompletionSource_1_t8291 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59643(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8291 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59643_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59644_gshared (TaskCompletionSource_1_t8291 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59644(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8291 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59644_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m59645_gshared (TaskCompletionSource_1_t8291 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m59645(__this, method) (( void (*) (TaskCompletionSource_1_t8291 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m59645_gshared)(__this, method)
