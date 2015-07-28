#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int16>
struct TaskCompletionSource_1_t8174;
// System.Threading.Tasks.Task`1<System.Int16>
struct Task_1_t1493;
// System.AggregateException
struct AggregateException_t1279;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58435_gshared (TaskCompletionSource_1_t8174 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58435(__this, method) (( void (*) (TaskCompletionSource_1_t8174 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58435_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::get_Task()
extern "C" Task_1_t1493 * TaskCompletionSource_1_get_Task_m58436_gshared (TaskCompletionSource_1_t8174 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58436(__this, method) (( Task_1_t1493 * (*) (TaskCompletionSource_1_t8174 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58436_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58437_gshared (TaskCompletionSource_1_t8174 * __this, Task_1_t1493 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58437(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8174 *, Task_1_t1493 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58437_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58438_gshared (TaskCompletionSource_1_t8174 * __this, int16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58438(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8174 *, int16_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58438_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58439_gshared (TaskCompletionSource_1_t8174 * __this, AggregateException_t1279 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58439(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8174 *, AggregateException_t1279 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58439_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58440_gshared (TaskCompletionSource_1_t8174 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58440(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8174 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58440_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58441_gshared (TaskCompletionSource_1_t8174 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58441(__this, method) (( bool (*) (TaskCompletionSource_1_t8174 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58441_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58442_gshared (TaskCompletionSource_1_t8174 * __this, int16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58442(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8174 *, int16_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m58442_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58443_gshared (TaskCompletionSource_1_t8174 * __this, AggregateException_t1279 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58443(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8174 *, AggregateException_t1279 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58443_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58444_gshared (TaskCompletionSource_1_t8174 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58444(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8174 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58444_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58445_gshared (TaskCompletionSource_1_t8174 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58445(__this, method) (( void (*) (TaskCompletionSource_1_t8174 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58445_gshared)(__this, method)
