#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int16>
struct TaskCompletionSource_1_t8185;
// System.Threading.Tasks.Task`1<System.Int16>
struct Task_1_t1503;
// System.AggregateException
struct AggregateException_t1289;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58513_gshared (TaskCompletionSource_1_t8185 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58513(__this, method) (( void (*) (TaskCompletionSource_1_t8185 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58513_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::get_Task()
extern "C" Task_1_t1503 * TaskCompletionSource_1_get_Task_m58514_gshared (TaskCompletionSource_1_t8185 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58514(__this, method) (( Task_1_t1503 * (*) (TaskCompletionSource_1_t8185 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58514_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58515_gshared (TaskCompletionSource_1_t8185 * __this, Task_1_t1503 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58515(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8185 *, Task_1_t1503 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58515_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58516_gshared (TaskCompletionSource_1_t8185 * __this, int16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58516(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8185 *, int16_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58516_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58517_gshared (TaskCompletionSource_1_t8185 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58517(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8185 *, AggregateException_t1289 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58517_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58518_gshared (TaskCompletionSource_1_t8185 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58518(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8185 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58518_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58519_gshared (TaskCompletionSource_1_t8185 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58519(__this, method) (( bool (*) (TaskCompletionSource_1_t8185 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58519_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58520_gshared (TaskCompletionSource_1_t8185 * __this, int16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58520(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8185 *, int16_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m58520_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58521_gshared (TaskCompletionSource_1_t8185 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58521(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8185 *, AggregateException_t1289 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58521_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58522_gshared (TaskCompletionSource_1_t8185 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58522(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8185 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58522_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58523_gshared (TaskCompletionSource_1_t8185 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58523(__this, method) (( void (*) (TaskCompletionSource_1_t8185 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58523_gshared)(__this, method)
