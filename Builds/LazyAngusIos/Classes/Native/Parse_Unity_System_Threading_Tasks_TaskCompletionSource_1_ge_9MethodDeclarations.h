#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>
struct TaskCompletionSource_1_t8850;
// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t1571;
// System.AggregateException
struct AggregateException_t1355;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m64013_gshared (TaskCompletionSource_1_t8850 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m64013(__this, method) (( void (*) (TaskCompletionSource_1_t8850 *, const MethodInfo*))TaskCompletionSource_1__ctor_m64013_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::get_Task()
extern "C" Task_1_t1571 * TaskCompletionSource_1_get_Task_m64014_gshared (TaskCompletionSource_1_t8850 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m64014(__this, method) (( Task_1_t1571 * (*) (TaskCompletionSource_1_t8850 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m64014_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m64015_gshared (TaskCompletionSource_1_t8850 * __this, Task_1_t1571 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m64015(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8850 *, Task_1_t1571 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m64015_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m64016_gshared (TaskCompletionSource_1_t8850 * __this, uint32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m64016(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8850 *, uint32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m64016_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m64017_gshared (TaskCompletionSource_1_t8850 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64017(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8850 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64017_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m64018_gshared (TaskCompletionSource_1_t8850 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64018(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8850 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64018_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m64019_gshared (TaskCompletionSource_1_t8850 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m64019(__this, method) (( bool (*) (TaskCompletionSource_1_t8850 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m64019_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m64020_gshared (TaskCompletionSource_1_t8850 * __this, uint32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m64020(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8850 *, uint32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m64020_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m64021_gshared (TaskCompletionSource_1_t8850 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64021(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8850 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64021_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m64022_gshared (TaskCompletionSource_1_t8850 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64022(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8850 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64022_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m64023_gshared (TaskCompletionSource_1_t8850 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m64023(__this, method) (( void (*) (TaskCompletionSource_1_t8850 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m64023_gshared)(__this, method)
