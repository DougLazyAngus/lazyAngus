#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.SByte>
struct TaskCompletionSource_1_t8171;
// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1500;
// System.AggregateException
struct AggregateException_t1287;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58440_gshared (TaskCompletionSource_1_t8171 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58440(__this, method) (( void (*) (TaskCompletionSource_1_t8171 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58440_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::get_Task()
extern "C" Task_1_t1500 * TaskCompletionSource_1_get_Task_m58441_gshared (TaskCompletionSource_1_t8171 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58441(__this, method) (( Task_1_t1500 * (*) (TaskCompletionSource_1_t8171 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58441_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58442_gshared (TaskCompletionSource_1_t8171 * __this, Task_1_t1500 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58442(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8171 *, Task_1_t1500 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58442_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58443_gshared (TaskCompletionSource_1_t8171 * __this, int8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58443(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8171 *, int8_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58443_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58444_gshared (TaskCompletionSource_1_t8171 * __this, AggregateException_t1287 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58444(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8171 *, AggregateException_t1287 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58444_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58445_gshared (TaskCompletionSource_1_t8171 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58445(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8171 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58445_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58446_gshared (TaskCompletionSource_1_t8171 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58446(__this, method) (( bool (*) (TaskCompletionSource_1_t8171 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58446_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58447_gshared (TaskCompletionSource_1_t8171 * __this, int8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58447(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8171 *, int8_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m58447_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58448_gshared (TaskCompletionSource_1_t8171 * __this, AggregateException_t1287 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58448(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8171 *, AggregateException_t1287 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58448_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58449_gshared (TaskCompletionSource_1_t8171 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58449(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8171 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58449_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58450_gshared (TaskCompletionSource_1_t8171 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58450(__this, method) (( void (*) (TaskCompletionSource_1_t8171 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58450_gshared)(__this, method)
