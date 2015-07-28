#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int64>
struct TaskCompletionSource_1_t8209;
// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1495;
// System.AggregateException
struct AggregateException_t1278;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58609_gshared (TaskCompletionSource_1_t8209 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58609(__this, method) (( void (*) (TaskCompletionSource_1_t8209 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58609_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::get_Task()
extern "C" Task_1_t1495 * TaskCompletionSource_1_get_Task_m58610_gshared (TaskCompletionSource_1_t8209 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58610(__this, method) (( Task_1_t1495 * (*) (TaskCompletionSource_1_t8209 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58610_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58611_gshared (TaskCompletionSource_1_t8209 * __this, Task_1_t1495 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58611(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8209 *, Task_1_t1495 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58611_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58612_gshared (TaskCompletionSource_1_t8209 * __this, int64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58612(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8209 *, int64_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58612_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58613_gshared (TaskCompletionSource_1_t8209 * __this, AggregateException_t1278 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58613(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8209 *, AggregateException_t1278 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58613_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58614_gshared (TaskCompletionSource_1_t8209 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58614(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8209 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58614_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58615_gshared (TaskCompletionSource_1_t8209 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58615(__this, method) (( bool (*) (TaskCompletionSource_1_t8209 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58615_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58616_gshared (TaskCompletionSource_1_t8209 * __this, int64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58616(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8209 *, int64_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m58616_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58617_gshared (TaskCompletionSource_1_t8209 * __this, AggregateException_t1278 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58617(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8209 *, AggregateException_t1278 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58617_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58618_gshared (TaskCompletionSource_1_t8209 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58618(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8209 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58618_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58619_gshared (TaskCompletionSource_1_t8209 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58619(__this, method) (( void (*) (TaskCompletionSource_1_t8209 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58619_gshared)(__this, method)
