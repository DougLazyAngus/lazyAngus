#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>
struct TaskCompletionSource_1_t8185;
// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t1493;
// System.AggregateException
struct AggregateException_t1278;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58493_gshared (TaskCompletionSource_1_t8185 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58493(__this, method) (( void (*) (TaskCompletionSource_1_t8185 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58493_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::get_Task()
extern "C" Task_1_t1493 * TaskCompletionSource_1_get_Task_m58494_gshared (TaskCompletionSource_1_t8185 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58494(__this, method) (( Task_1_t1493 * (*) (TaskCompletionSource_1_t8185 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58494_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58495_gshared (TaskCompletionSource_1_t8185 * __this, Task_1_t1493 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58495(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8185 *, Task_1_t1493 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58495_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58496_gshared (TaskCompletionSource_1_t8185 * __this, uint16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58496(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8185 *, uint16_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58496_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58497_gshared (TaskCompletionSource_1_t8185 * __this, AggregateException_t1278 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58497(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8185 *, AggregateException_t1278 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58497_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58498_gshared (TaskCompletionSource_1_t8185 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58498(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8185 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58498_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58499_gshared (TaskCompletionSource_1_t8185 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58499(__this, method) (( bool (*) (TaskCompletionSource_1_t8185 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58499_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58500_gshared (TaskCompletionSource_1_t8185 * __this, uint16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58500(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8185 *, uint16_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m58500_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58501_gshared (TaskCompletionSource_1_t8185 * __this, AggregateException_t1278 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58501(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8185 *, AggregateException_t1278 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58501_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58502_gshared (TaskCompletionSource_1_t8185 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58502(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8185 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58502_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58503_gshared (TaskCompletionSource_1_t8185 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58503(__this, method) (( void (*) (TaskCompletionSource_1_t8185 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58503_gshared)(__this, method)
