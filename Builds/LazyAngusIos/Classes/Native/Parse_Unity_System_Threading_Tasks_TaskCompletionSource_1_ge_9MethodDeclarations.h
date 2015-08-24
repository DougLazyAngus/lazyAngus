#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>
struct TaskCompletionSource_1_t8286;
// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t1555;
// System.AggregateException
struct AggregateException_t1339;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59419_gshared (TaskCompletionSource_1_t8286 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59419(__this, method) (( void (*) (TaskCompletionSource_1_t8286 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59419_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::get_Task()
extern "C" Task_1_t1555 * TaskCompletionSource_1_get_Task_m59420_gshared (TaskCompletionSource_1_t8286 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59420(__this, method) (( Task_1_t1555 * (*) (TaskCompletionSource_1_t8286 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59420_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59421_gshared (TaskCompletionSource_1_t8286 * __this, Task_1_t1555 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59421(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8286 *, Task_1_t1555 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59421_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59422_gshared (TaskCompletionSource_1_t8286 * __this, uint32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59422(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8286 *, uint32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59422_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59423_gshared (TaskCompletionSource_1_t8286 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59423(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8286 *, AggregateException_t1339 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59423_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59424_gshared (TaskCompletionSource_1_t8286 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59424(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8286 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59424_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59425_gshared (TaskCompletionSource_1_t8286 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59425(__this, method) (( bool (*) (TaskCompletionSource_1_t8286 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59425_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59426_gshared (TaskCompletionSource_1_t8286 * __this, uint32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59426(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8286 *, uint32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m59426_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59427_gshared (TaskCompletionSource_1_t8286 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59427(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8286 *, AggregateException_t1339 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59427_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59428_gshared (TaskCompletionSource_1_t8286 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59428(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8286 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59428_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m59429_gshared (TaskCompletionSource_1_t8286 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m59429(__this, method) (( void (*) (TaskCompletionSource_1_t8286 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m59429_gshared)(__this, method)
