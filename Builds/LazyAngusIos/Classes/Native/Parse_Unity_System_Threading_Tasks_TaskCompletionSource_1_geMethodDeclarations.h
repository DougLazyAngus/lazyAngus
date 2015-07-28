#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
struct TaskCompletionSource_1_t1284;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1311;
// System.AggregateException
struct AggregateException_t1279;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m6978_gshared (TaskCompletionSource_1_t1284 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m6978(__this, method) (( void (*) (TaskCompletionSource_1_t1284 *, const MethodInfo*))TaskCompletionSource_1__ctor_m6978_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::get_Task()
extern "C" Task_1_t1311 * TaskCompletionSource_1_get_Task_m6980_gshared (TaskCompletionSource_1_t1284 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m6980(__this, method) (( Task_1_t1311 * (*) (TaskCompletionSource_1_t1284 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m6980_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m29877_gshared (TaskCompletionSource_1_t1284 * __this, Task_1_t1311 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m29877(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1284 *, Task_1_t1311 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m29877_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m7489_gshared (TaskCompletionSource_1_t1284 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m7489(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1284 *, int32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m7489_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m7510_gshared (TaskCompletionSource_1_t1284 * __this, AggregateException_t1279 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m7510(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1284 *, AggregateException_t1279 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m7510_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m29878_gshared (TaskCompletionSource_1_t1284 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m29878(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1284 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29878_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m7511_gshared (TaskCompletionSource_1_t1284 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m7511(__this, method) (( bool (*) (TaskCompletionSource_1_t1284 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m7511_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m7487_gshared (TaskCompletionSource_1_t1284 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m7487(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1284 *, int32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m7487_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m7486_gshared (TaskCompletionSource_1_t1284 * __this, AggregateException_t1279 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m7486(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1284 *, AggregateException_t1279 *, const MethodInfo*))TaskCompletionSource_1_SetException_m7486_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m29879_gshared (TaskCompletionSource_1_t1284 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m29879(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1284 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29879_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m6979_gshared (TaskCompletionSource_1_t1284 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m6979(__this, method) (( void (*) (TaskCompletionSource_1_t1284 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m6979_gshared)(__this, method)
