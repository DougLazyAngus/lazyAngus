#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t1328;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1391;
// System.Object
struct Object_t;
// System.AggregateException
struct AggregateException_t1336;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m7290_gshared (TaskCompletionSource_1_t1328 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m7290(__this, method) (( void (*) (TaskCompletionSource_1_t1328 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7290_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
extern "C" Task_1_t1391 * TaskCompletionSource_1_get_Task_m7292_gshared (TaskCompletionSource_1_t1328 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m7292(__this, method) (( Task_1_t1391 * (*) (TaskCompletionSource_1_t1328 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7292_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m30666_gshared (TaskCompletionSource_1_t1328 * __this, Task_1_t1391 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m30666(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1328 *, Task_1_t1391 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m30666_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m30667_gshared (TaskCompletionSource_1_t1328 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m30667(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1328 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m30667_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m30668_gshared (TaskCompletionSource_1_t1328 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m30668(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1328 *, AggregateException_t1336 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30668_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m30669_gshared (TaskCompletionSource_1_t1328 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m30669(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1328 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30669_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m30670_gshared (TaskCompletionSource_1_t1328 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m30670(__this, method) (( bool (*) (TaskCompletionSource_1_t1328 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m30670_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m7734_gshared (TaskCompletionSource_1_t1328 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m7734(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1328 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7734_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m30671_gshared (TaskCompletionSource_1_t1328 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m30671(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1328 *, AggregateException_t1336 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30671_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m30672_gshared (TaskCompletionSource_1_t1328 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m30672(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1328 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30672_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m7291_gshared (TaskCompletionSource_1_t1328 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m7291(__this, method) (( void (*) (TaskCompletionSource_1_t1328 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7291_gshared)(__this, method)
