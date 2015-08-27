#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Byte>
struct TaskCompletionSource_1_t5974;
// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1419;
// System.AggregateException
struct AggregateException_t1339;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m30813_gshared (TaskCompletionSource_1_t5974 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m30813(__this, method) (( void (*) (TaskCompletionSource_1_t5974 *, const MethodInfo*))TaskCompletionSource_1__ctor_m30813_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::get_Task()
extern "C" Task_1_t1419 * TaskCompletionSource_1_get_Task_m30814_gshared (TaskCompletionSource_1_t5974 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m30814(__this, method) (( Task_1_t1419 * (*) (TaskCompletionSource_1_t5974 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m30814_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m30815_gshared (TaskCompletionSource_1_t5974 * __this, Task_1_t1419 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m30815(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t5974 *, Task_1_t1419 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m30815_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m30816_gshared (TaskCompletionSource_1_t5974 * __this, uint8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m30816(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t5974 *, uint8_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m30816_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m30817_gshared (TaskCompletionSource_1_t5974 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m30817(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t5974 *, AggregateException_t1339 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30817_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m30818_gshared (TaskCompletionSource_1_t5974 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m30818(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t5974 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30818_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m30819_gshared (TaskCompletionSource_1_t5974 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m30819(__this, method) (( bool (*) (TaskCompletionSource_1_t5974 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m30819_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m30820_gshared (TaskCompletionSource_1_t5974 * __this, uint8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m30820(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t5974 *, uint8_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m30820_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m30821_gshared (TaskCompletionSource_1_t5974 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m30821(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t5974 *, AggregateException_t1339 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30821_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m30822_gshared (TaskCompletionSource_1_t5974 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m30822(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t5974 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30822_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m30823_gshared (TaskCompletionSource_1_t5974 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m30823(__this, method) (( void (*) (TaskCompletionSource_1_t5974 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m30823_gshared)(__this, method)
