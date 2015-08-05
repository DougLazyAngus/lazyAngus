#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.SByte>
struct TaskCompletionSource_1_t8172;
// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1501;
// System.AggregateException
struct AggregateException_t1288;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58447_gshared (TaskCompletionSource_1_t8172 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58447(__this, method) (( void (*) (TaskCompletionSource_1_t8172 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58447_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::get_Task()
extern "C" Task_1_t1501 * TaskCompletionSource_1_get_Task_m58448_gshared (TaskCompletionSource_1_t8172 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58448(__this, method) (( Task_1_t1501 * (*) (TaskCompletionSource_1_t8172 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58448_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58449_gshared (TaskCompletionSource_1_t8172 * __this, Task_1_t1501 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58449(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8172 *, Task_1_t1501 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58449_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58450_gshared (TaskCompletionSource_1_t8172 * __this, int8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58450(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8172 *, int8_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58450_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58451_gshared (TaskCompletionSource_1_t8172 * __this, AggregateException_t1288 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58451(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8172 *, AggregateException_t1288 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58451_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58452_gshared (TaskCompletionSource_1_t8172 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58452(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8172 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58452_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58453_gshared (TaskCompletionSource_1_t8172 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58453(__this, method) (( bool (*) (TaskCompletionSource_1_t8172 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58453_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58454_gshared (TaskCompletionSource_1_t8172 * __this, int8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58454(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8172 *, int8_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m58454_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58455_gshared (TaskCompletionSource_1_t8172 * __this, AggregateException_t1288 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58455(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8172 *, AggregateException_t1288 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58455_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58456_gshared (TaskCompletionSource_1_t8172 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58456(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8172 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58456_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58457_gshared (TaskCompletionSource_1_t8172 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58457(__this, method) (( void (*) (TaskCompletionSource_1_t8172 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58457_gshared)(__this, method)
