#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>
struct TaskCompletionSource_1_t8283;
// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t1552;
// System.AggregateException
struct AggregateException_t1336;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59386_gshared (TaskCompletionSource_1_t8283 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59386(__this, method) (( void (*) (TaskCompletionSource_1_t8283 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59386_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::get_Task()
extern "C" Task_1_t1552 * TaskCompletionSource_1_get_Task_m59387_gshared (TaskCompletionSource_1_t8283 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59387(__this, method) (( Task_1_t1552 * (*) (TaskCompletionSource_1_t8283 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59387_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59388_gshared (TaskCompletionSource_1_t8283 * __this, Task_1_t1552 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59388(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8283 *, Task_1_t1552 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59388_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59389_gshared (TaskCompletionSource_1_t8283 * __this, uint32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59389(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8283 *, uint32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59389_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59390_gshared (TaskCompletionSource_1_t8283 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59390(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8283 *, AggregateException_t1336 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59390_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59391_gshared (TaskCompletionSource_1_t8283 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59391(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8283 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59391_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59392_gshared (TaskCompletionSource_1_t8283 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59392(__this, method) (( bool (*) (TaskCompletionSource_1_t8283 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59392_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59393_gshared (TaskCompletionSource_1_t8283 * __this, uint32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59393(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8283 *, uint32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m59393_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59394_gshared (TaskCompletionSource_1_t8283 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59394(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8283 *, AggregateException_t1336 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59394_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59395_gshared (TaskCompletionSource_1_t8283 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59395(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8283 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59395_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m59396_gshared (TaskCompletionSource_1_t8283 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m59396(__this, method) (( void (*) (TaskCompletionSource_1_t8283 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m59396_gshared)(__this, method)
