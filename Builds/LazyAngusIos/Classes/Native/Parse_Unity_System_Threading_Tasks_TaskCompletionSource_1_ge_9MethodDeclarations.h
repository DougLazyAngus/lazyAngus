#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>
struct TaskCompletionSource_1_t8315;
// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t1571;
// System.AggregateException
struct AggregateException_t1355;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59751_gshared (TaskCompletionSource_1_t8315 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59751(__this, method) (( void (*) (TaskCompletionSource_1_t8315 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59751_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::get_Task()
extern "C" Task_1_t1571 * TaskCompletionSource_1_get_Task_m59752_gshared (TaskCompletionSource_1_t8315 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59752(__this, method) (( Task_1_t1571 * (*) (TaskCompletionSource_1_t8315 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59752_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59753_gshared (TaskCompletionSource_1_t8315 * __this, Task_1_t1571 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59753(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8315 *, Task_1_t1571 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59753_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59754_gshared (TaskCompletionSource_1_t8315 * __this, uint32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59754(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8315 *, uint32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59754_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59755_gshared (TaskCompletionSource_1_t8315 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59755(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8315 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59755_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59756_gshared (TaskCompletionSource_1_t8315 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59756(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8315 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59756_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59757_gshared (TaskCompletionSource_1_t8315 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59757(__this, method) (( bool (*) (TaskCompletionSource_1_t8315 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59757_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59758_gshared (TaskCompletionSource_1_t8315 * __this, uint32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59758(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8315 *, uint32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m59758_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59759_gshared (TaskCompletionSource_1_t8315 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59759(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8315 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59759_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59760_gshared (TaskCompletionSource_1_t8315 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59760(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8315 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59760_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m59761_gshared (TaskCompletionSource_1_t8315 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m59761(__this, method) (( void (*) (TaskCompletionSource_1_t8315 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m59761_gshared)(__this, method)
