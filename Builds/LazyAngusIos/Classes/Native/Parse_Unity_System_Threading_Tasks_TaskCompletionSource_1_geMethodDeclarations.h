#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
struct TaskCompletionSource_1_t1341;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1368;
// System.AggregateException
struct AggregateException_t1336;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m7284_gshared (TaskCompletionSource_1_t1341 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m7284(__this, method) (( void (*) (TaskCompletionSource_1_t1341 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7284_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::get_Task()
extern "C" Task_1_t1368 * TaskCompletionSource_1_get_Task_m7286_gshared (TaskCompletionSource_1_t1341 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m7286(__this, method) (( Task_1_t1368 * (*) (TaskCompletionSource_1_t1341 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7286_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m30719_gshared (TaskCompletionSource_1_t1341 * __this, Task_1_t1368 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m30719(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1341 *, Task_1_t1368 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m30719_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m7795_gshared (TaskCompletionSource_1_t1341 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m7795(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1341 *, int32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m7795_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m7816_gshared (TaskCompletionSource_1_t1341 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m7816(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1341 *, AggregateException_t1336 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m7816_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m30720_gshared (TaskCompletionSource_1_t1341 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m30720(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1341 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30720_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m7817_gshared (TaskCompletionSource_1_t1341 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m7817(__this, method) (( bool (*) (TaskCompletionSource_1_t1341 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m7817_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m7793_gshared (TaskCompletionSource_1_t1341 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m7793(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1341 *, int32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m7793_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m7792_gshared (TaskCompletionSource_1_t1341 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m7792(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1341 *, AggregateException_t1336 *, const MethodInfo*))TaskCompletionSource_1_SetException_m7792_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m30721_gshared (TaskCompletionSource_1_t1341 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m30721(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1341 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30721_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m7285_gshared (TaskCompletionSource_1_t1341 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m7285(__this, method) (( void (*) (TaskCompletionSource_1_t1341 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7285_gshared)(__this, method)
