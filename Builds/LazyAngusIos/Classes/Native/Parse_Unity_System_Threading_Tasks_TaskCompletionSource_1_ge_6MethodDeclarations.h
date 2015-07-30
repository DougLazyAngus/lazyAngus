#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.SByte>
struct TaskCompletionSource_1_t8169;
// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1498;
// System.AggregateException
struct AggregateException_t1285;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58424_gshared (TaskCompletionSource_1_t8169 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58424(__this, method) (( void (*) (TaskCompletionSource_1_t8169 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58424_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::get_Task()
extern "C" Task_1_t1498 * TaskCompletionSource_1_get_Task_m58425_gshared (TaskCompletionSource_1_t8169 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58425(__this, method) (( Task_1_t1498 * (*) (TaskCompletionSource_1_t8169 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58425_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58426_gshared (TaskCompletionSource_1_t8169 * __this, Task_1_t1498 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58426(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8169 *, Task_1_t1498 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58426_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58427_gshared (TaskCompletionSource_1_t8169 * __this, int8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58427(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8169 *, int8_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58427_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58428_gshared (TaskCompletionSource_1_t8169 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58428(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8169 *, AggregateException_t1285 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58428_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58429_gshared (TaskCompletionSource_1_t8169 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58429(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8169 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58429_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58430_gshared (TaskCompletionSource_1_t8169 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58430(__this, method) (( bool (*) (TaskCompletionSource_1_t8169 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58430_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58431_gshared (TaskCompletionSource_1_t8169 * __this, int8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58431(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8169 *, int8_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m58431_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58432_gshared (TaskCompletionSource_1_t8169 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58432(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8169 *, AggregateException_t1285 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58432_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58433_gshared (TaskCompletionSource_1_t8169 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58433(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8169 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58433_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58434_gshared (TaskCompletionSource_1_t8169 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58434(__this, method) (( void (*) (TaskCompletionSource_1_t8169 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58434_gshared)(__this, method)
