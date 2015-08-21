#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Byte>
struct TaskCompletionSource_1_t5971;
// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1416;
// System.AggregateException
struct AggregateException_t1336;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m30780_gshared (TaskCompletionSource_1_t5971 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m30780(__this, method) (( void (*) (TaskCompletionSource_1_t5971 *, const MethodInfo*))TaskCompletionSource_1__ctor_m30780_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::get_Task()
extern "C" Task_1_t1416 * TaskCompletionSource_1_get_Task_m30781_gshared (TaskCompletionSource_1_t5971 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m30781(__this, method) (( Task_1_t1416 * (*) (TaskCompletionSource_1_t5971 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m30781_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m30782_gshared (TaskCompletionSource_1_t5971 * __this, Task_1_t1416 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m30782(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t5971 *, Task_1_t1416 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m30782_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m30783_gshared (TaskCompletionSource_1_t5971 * __this, uint8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m30783(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t5971 *, uint8_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m30783_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m30784_gshared (TaskCompletionSource_1_t5971 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m30784(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t5971 *, AggregateException_t1336 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30784_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m30785_gshared (TaskCompletionSource_1_t5971 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m30785(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t5971 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30785_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m30786_gshared (TaskCompletionSource_1_t5971 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m30786(__this, method) (( bool (*) (TaskCompletionSource_1_t5971 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m30786_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m30787_gshared (TaskCompletionSource_1_t5971 * __this, uint8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m30787(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t5971 *, uint8_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m30787_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m30788_gshared (TaskCompletionSource_1_t5971 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m30788(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t5971 *, AggregateException_t1336 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30788_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m30789_gshared (TaskCompletionSource_1_t5971 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m30789(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t5971 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30789_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m30790_gshared (TaskCompletionSource_1_t5971 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m30790(__this, method) (( void (*) (TaskCompletionSource_1_t5971 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m30790_gshared)(__this, method)
