#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Byte>
struct TaskCompletionSource_1_t5896;
// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1369;
// System.AggregateException
struct AggregateException_t1289;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m30013_gshared (TaskCompletionSource_1_t5896 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m30013(__this, method) (( void (*) (TaskCompletionSource_1_t5896 *, const MethodInfo*))TaskCompletionSource_1__ctor_m30013_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::get_Task()
extern "C" Task_1_t1369 * TaskCompletionSource_1_get_Task_m30014_gshared (TaskCompletionSource_1_t5896 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m30014(__this, method) (( Task_1_t1369 * (*) (TaskCompletionSource_1_t5896 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m30014_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m30015_gshared (TaskCompletionSource_1_t5896 * __this, Task_1_t1369 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m30015(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t5896 *, Task_1_t1369 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m30015_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m30016_gshared (TaskCompletionSource_1_t5896 * __this, uint8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m30016(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t5896 *, uint8_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m30016_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m30017_gshared (TaskCompletionSource_1_t5896 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m30017(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t5896 *, AggregateException_t1289 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30017_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m30018_gshared (TaskCompletionSource_1_t5896 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m30018(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t5896 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30018_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m30019_gshared (TaskCompletionSource_1_t5896 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m30019(__this, method) (( bool (*) (TaskCompletionSource_1_t5896 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m30019_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m30020_gshared (TaskCompletionSource_1_t5896 * __this, uint8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m30020(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t5896 *, uint8_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m30020_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m30021_gshared (TaskCompletionSource_1_t5896 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m30021(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t5896 *, AggregateException_t1289 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30021_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m30022_gshared (TaskCompletionSource_1_t5896 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m30022(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t5896 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30022_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m30023_gshared (TaskCompletionSource_1_t5896 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m30023(__this, method) (( void (*) (TaskCompletionSource_1_t5896 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m30023_gshared)(__this, method)
