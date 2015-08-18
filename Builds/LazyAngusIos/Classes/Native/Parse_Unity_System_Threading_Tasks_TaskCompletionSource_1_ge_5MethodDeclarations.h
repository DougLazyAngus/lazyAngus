#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Byte>
struct TaskCompletionSource_1_t5967;
// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1418;
// System.AggregateException
struct AggregateException_t1338;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m30689_gshared (TaskCompletionSource_1_t5967 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m30689(__this, method) (( void (*) (TaskCompletionSource_1_t5967 *, const MethodInfo*))TaskCompletionSource_1__ctor_m30689_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::get_Task()
extern "C" Task_1_t1418 * TaskCompletionSource_1_get_Task_m30690_gshared (TaskCompletionSource_1_t5967 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m30690(__this, method) (( Task_1_t1418 * (*) (TaskCompletionSource_1_t5967 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m30690_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m30691_gshared (TaskCompletionSource_1_t5967 * __this, Task_1_t1418 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m30691(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t5967 *, Task_1_t1418 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m30691_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m30692_gshared (TaskCompletionSource_1_t5967 * __this, uint8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m30692(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t5967 *, uint8_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m30692_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m30693_gshared (TaskCompletionSource_1_t5967 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m30693(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t5967 *, AggregateException_t1338 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30693_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m30694_gshared (TaskCompletionSource_1_t5967 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m30694(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t5967 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30694_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m30695_gshared (TaskCompletionSource_1_t5967 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m30695(__this, method) (( bool (*) (TaskCompletionSource_1_t5967 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m30695_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m30696_gshared (TaskCompletionSource_1_t5967 * __this, uint8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m30696(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t5967 *, uint8_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m30696_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m30697_gshared (TaskCompletionSource_1_t5967 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m30697(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t5967 *, AggregateException_t1338 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30697_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m30698_gshared (TaskCompletionSource_1_t5967 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m30698(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t5967 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30698_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m30699_gshared (TaskCompletionSource_1_t5967 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m30699(__this, method) (( void (*) (TaskCompletionSource_1_t5967 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m30699_gshared)(__this, method)
