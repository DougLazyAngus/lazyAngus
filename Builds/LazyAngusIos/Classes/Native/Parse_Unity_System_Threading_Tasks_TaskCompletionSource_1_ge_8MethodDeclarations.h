#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>
struct TaskCompletionSource_1_t8193;
// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t1500;
// System.AggregateException
struct AggregateException_t1285;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58540_gshared (TaskCompletionSource_1_t8193 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58540(__this, method) (( void (*) (TaskCompletionSource_1_t8193 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58540_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::get_Task()
extern "C" Task_1_t1500 * TaskCompletionSource_1_get_Task_m58541_gshared (TaskCompletionSource_1_t8193 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58541(__this, method) (( Task_1_t1500 * (*) (TaskCompletionSource_1_t8193 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58541_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58542_gshared (TaskCompletionSource_1_t8193 * __this, Task_1_t1500 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58542(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8193 *, Task_1_t1500 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58542_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58543_gshared (TaskCompletionSource_1_t8193 * __this, uint16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58543(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8193 *, uint16_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58543_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58544_gshared (TaskCompletionSource_1_t8193 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58544(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8193 *, AggregateException_t1285 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58544_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58545_gshared (TaskCompletionSource_1_t8193 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58545(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8193 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58545_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58546_gshared (TaskCompletionSource_1_t8193 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58546(__this, method) (( bool (*) (TaskCompletionSource_1_t8193 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58546_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58547_gshared (TaskCompletionSource_1_t8193 * __this, uint16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58547(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8193 *, uint16_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m58547_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58548_gshared (TaskCompletionSource_1_t8193 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58548(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8193 *, AggregateException_t1285 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58548_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58549_gshared (TaskCompletionSource_1_t8193 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58549(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8193 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58549_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58550_gshared (TaskCompletionSource_1_t8193 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58550(__this, method) (( void (*) (TaskCompletionSource_1_t8193 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58550_gshared)(__this, method)
