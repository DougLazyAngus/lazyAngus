#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int16>
struct TaskCompletionSource_1_t8826;
// System.Threading.Tasks.Task`1<System.Int16>
struct Task_1_t1569;
// System.AggregateException
struct AggregateException_t1355;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m63897_gshared (TaskCompletionSource_1_t8826 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m63897(__this, method) (( void (*) (TaskCompletionSource_1_t8826 *, const MethodInfo*))TaskCompletionSource_1__ctor_m63897_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::get_Task()
extern "C" Task_1_t1569 * TaskCompletionSource_1_get_Task_m63898_gshared (TaskCompletionSource_1_t8826 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m63898(__this, method) (( Task_1_t1569 * (*) (TaskCompletionSource_1_t8826 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m63898_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m63899_gshared (TaskCompletionSource_1_t8826 * __this, Task_1_t1569 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m63899(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8826 *, Task_1_t1569 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m63899_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m63900_gshared (TaskCompletionSource_1_t8826 * __this, int16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m63900(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8826 *, int16_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m63900_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m63901_gshared (TaskCompletionSource_1_t8826 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m63901(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8826 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m63901_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m63902_gshared (TaskCompletionSource_1_t8826 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m63902(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8826 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m63902_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m63903_gshared (TaskCompletionSource_1_t8826 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m63903(__this, method) (( bool (*) (TaskCompletionSource_1_t8826 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m63903_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m63904_gshared (TaskCompletionSource_1_t8826 * __this, int16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m63904(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8826 *, int16_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m63904_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m63905_gshared (TaskCompletionSource_1_t8826 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m63905(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8826 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_SetException_m63905_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m63906_gshared (TaskCompletionSource_1_t8826 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m63906(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8826 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m63906_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m63907_gshared (TaskCompletionSource_1_t8826 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m63907(__this, method) (( void (*) (TaskCompletionSource_1_t8826 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m63907_gshared)(__this, method)
