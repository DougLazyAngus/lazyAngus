#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>
struct TaskCompletionSource_1_t8874;
// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t1573;
// System.AggregateException
struct AggregateException_t1355;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m64129_gshared (TaskCompletionSource_1_t8874 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m64129(__this, method) (( void (*) (TaskCompletionSource_1_t8874 *, const MethodInfo*))TaskCompletionSource_1__ctor_m64129_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::get_Task()
extern "C" Task_1_t1573 * TaskCompletionSource_1_get_Task_m64130_gshared (TaskCompletionSource_1_t8874 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m64130(__this, method) (( Task_1_t1573 * (*) (TaskCompletionSource_1_t8874 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m64130_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m64131_gshared (TaskCompletionSource_1_t8874 * __this, Task_1_t1573 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m64131(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8874 *, Task_1_t1573 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m64131_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m64132_gshared (TaskCompletionSource_1_t8874 * __this, uint64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m64132(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8874 *, uint64_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m64132_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m64133_gshared (TaskCompletionSource_1_t8874 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64133(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8874 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64133_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m64134_gshared (TaskCompletionSource_1_t8874 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64134(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8874 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64134_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m64135_gshared (TaskCompletionSource_1_t8874 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m64135(__this, method) (( bool (*) (TaskCompletionSource_1_t8874 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m64135_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m64136_gshared (TaskCompletionSource_1_t8874 * __this, uint64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m64136(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8874 *, uint64_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m64136_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m64137_gshared (TaskCompletionSource_1_t8874 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64137(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8874 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64137_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m64138_gshared (TaskCompletionSource_1_t8874 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64138(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8874 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64138_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m64139_gshared (TaskCompletionSource_1_t8874 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m64139(__this, method) (( void (*) (TaskCompletionSource_1_t8874 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m64139_gshared)(__this, method)
