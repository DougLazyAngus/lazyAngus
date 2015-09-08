#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int16>
struct TaskCompletionSource_1_t8827;
// System.Threading.Tasks.Task`1<System.Int16>
struct Task_1_t1570;
// System.AggregateException
struct AggregateException_t1356;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m63910_gshared (TaskCompletionSource_1_t8827 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m63910(__this, method) (( void (*) (TaskCompletionSource_1_t8827 *, const MethodInfo*))TaskCompletionSource_1__ctor_m63910_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::get_Task()
extern "C" Task_1_t1570 * TaskCompletionSource_1_get_Task_m63911_gshared (TaskCompletionSource_1_t8827 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m63911(__this, method) (( Task_1_t1570 * (*) (TaskCompletionSource_1_t8827 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m63911_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m63912_gshared (TaskCompletionSource_1_t8827 * __this, Task_1_t1570 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m63912(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8827 *, Task_1_t1570 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m63912_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m63913_gshared (TaskCompletionSource_1_t8827 * __this, int16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m63913(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8827 *, int16_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m63913_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m63914_gshared (TaskCompletionSource_1_t8827 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m63914(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8827 *, AggregateException_t1356 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m63914_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m63915_gshared (TaskCompletionSource_1_t8827 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m63915(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8827 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m63915_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m63916_gshared (TaskCompletionSource_1_t8827 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m63916(__this, method) (( bool (*) (TaskCompletionSource_1_t8827 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m63916_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m63917_gshared (TaskCompletionSource_1_t8827 * __this, int16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m63917(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8827 *, int16_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m63917_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m63918_gshared (TaskCompletionSource_1_t8827 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m63918(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8827 *, AggregateException_t1356 *, const MethodInfo*))TaskCompletionSource_1_SetException_m63918_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m63919_gshared (TaskCompletionSource_1_t8827 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m63919(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8827 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m63919_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m63920_gshared (TaskCompletionSource_1_t8827 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m63920(__this, method) (( void (*) (TaskCompletionSource_1_t8827 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m63920_gshared)(__this, method)
