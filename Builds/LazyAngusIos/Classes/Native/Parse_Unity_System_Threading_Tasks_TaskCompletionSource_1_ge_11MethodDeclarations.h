#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>
struct TaskCompletionSource_1_t8303;
// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t1556;
// System.AggregateException
struct AggregateException_t1338;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59411_gshared (TaskCompletionSource_1_t8303 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59411(__this, method) (( void (*) (TaskCompletionSource_1_t8303 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59411_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::get_Task()
extern "C" Task_1_t1556 * TaskCompletionSource_1_get_Task_m59412_gshared (TaskCompletionSource_1_t8303 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59412(__this, method) (( Task_1_t1556 * (*) (TaskCompletionSource_1_t8303 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59412_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59413_gshared (TaskCompletionSource_1_t8303 * __this, Task_1_t1556 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59413(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8303 *, Task_1_t1556 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59413_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59414_gshared (TaskCompletionSource_1_t8303 * __this, uint64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59414(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8303 *, uint64_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59414_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59415_gshared (TaskCompletionSource_1_t8303 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59415(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8303 *, AggregateException_t1338 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59415_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59416_gshared (TaskCompletionSource_1_t8303 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59416(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8303 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59416_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59417_gshared (TaskCompletionSource_1_t8303 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59417(__this, method) (( bool (*) (TaskCompletionSource_1_t8303 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59417_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59418_gshared (TaskCompletionSource_1_t8303 * __this, uint64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59418(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8303 *, uint64_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m59418_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59419_gshared (TaskCompletionSource_1_t8303 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59419(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8303 *, AggregateException_t1338 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59419_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59420_gshared (TaskCompletionSource_1_t8303 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59420(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8303 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59420_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m59421_gshared (TaskCompletionSource_1_t8303 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m59421(__this, method) (( void (*) (TaskCompletionSource_1_t8303 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m59421_gshared)(__this, method)
