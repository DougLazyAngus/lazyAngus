#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t1348;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1411;
// System.Object
struct Object_t;
// System.AggregateException
struct AggregateException_t1356;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m7471_gshared (TaskCompletionSource_1_t1348 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m7471(__this, method) (( void (*) (TaskCompletionSource_1_t1348 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7471_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
extern "C" Task_1_t1411 * TaskCompletionSource_1_get_Task_m7473_gshared (TaskCompletionSource_1_t1348 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m7473(__this, method) (( Task_1_t1411 * (*) (TaskCompletionSource_1_t1348 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7473_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m35266_gshared (TaskCompletionSource_1_t1348 * __this, Task_1_t1411 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m35266(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1348 *, Task_1_t1411 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m35266_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m35267_gshared (TaskCompletionSource_1_t1348 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m35267(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1348 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m35267_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m35268_gshared (TaskCompletionSource_1_t1348 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m35268(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1348 *, AggregateException_t1356 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35268_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m35269_gshared (TaskCompletionSource_1_t1348 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m35269(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1348 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35269_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m35270_gshared (TaskCompletionSource_1_t1348 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m35270(__this, method) (( bool (*) (TaskCompletionSource_1_t1348 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m35270_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m7915_gshared (TaskCompletionSource_1_t1348 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m7915(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1348 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7915_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m35271_gshared (TaskCompletionSource_1_t1348 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m35271(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1348 *, AggregateException_t1356 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35271_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m35272_gshared (TaskCompletionSource_1_t1348 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m35272(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1348 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35272_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m7472_gshared (TaskCompletionSource_1_t1348 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m7472(__this, method) (( void (*) (TaskCompletionSource_1_t1348 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7472_gshared)(__this, method)
