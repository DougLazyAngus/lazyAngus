#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Byte>
struct TaskCompletionSource_1_t6542;
// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1439;
// System.AggregateException
struct AggregateException_t1359;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m35393_gshared (TaskCompletionSource_1_t6542 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m35393(__this, method) (( void (*) (TaskCompletionSource_1_t6542 *, const MethodInfo*))TaskCompletionSource_1__ctor_m35393_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::get_Task()
extern "C" Task_1_t1439 * TaskCompletionSource_1_get_Task_m35394_gshared (TaskCompletionSource_1_t6542 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m35394(__this, method) (( Task_1_t1439 * (*) (TaskCompletionSource_1_t6542 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m35394_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m35395_gshared (TaskCompletionSource_1_t6542 * __this, Task_1_t1439 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m35395(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t6542 *, Task_1_t1439 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m35395_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m35396_gshared (TaskCompletionSource_1_t6542 * __this, uint8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m35396(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t6542 *, uint8_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m35396_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m35397_gshared (TaskCompletionSource_1_t6542 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m35397(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t6542 *, AggregateException_t1359 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35397_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m35398_gshared (TaskCompletionSource_1_t6542 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m35398(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t6542 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35398_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m35399_gshared (TaskCompletionSource_1_t6542 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m35399(__this, method) (( bool (*) (TaskCompletionSource_1_t6542 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m35399_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m35400_gshared (TaskCompletionSource_1_t6542 * __this, uint8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m35400(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t6542 *, uint8_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m35400_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m35401_gshared (TaskCompletionSource_1_t6542 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m35401(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t6542 *, AggregateException_t1359 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35401_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m35402_gshared (TaskCompletionSource_1_t6542 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m35402(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t6542 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35402_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m35403_gshared (TaskCompletionSource_1_t6542 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m35403(__this, method) (( void (*) (TaskCompletionSource_1_t6542 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m35403_gshared)(__this, method)
