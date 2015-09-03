#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Single>
struct TaskCompletionSource_1_t8898;
// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t1576;
// System.AggregateException
struct AggregateException_t1355;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m64252_gshared (TaskCompletionSource_1_t8898 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m64252(__this, method) (( void (*) (TaskCompletionSource_1_t8898 *, const MethodInfo*))TaskCompletionSource_1__ctor_m64252_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Single>::get_Task()
extern "C" Task_1_t1576 * TaskCompletionSource_1_get_Task_m64253_gshared (TaskCompletionSource_1_t8898 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m64253(__this, method) (( Task_1_t1576 * (*) (TaskCompletionSource_1_t8898 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m64253_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m64254_gshared (TaskCompletionSource_1_t8898 * __this, Task_1_t1576 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m64254(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8898 *, Task_1_t1576 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m64254_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m64255_gshared (TaskCompletionSource_1_t8898 * __this, float ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m64255(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8898 *, float, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m64255_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m64256_gshared (TaskCompletionSource_1_t8898 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64256(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8898 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64256_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m64257_gshared (TaskCompletionSource_1_t8898 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64257(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8898 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64257_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m64258_gshared (TaskCompletionSource_1_t8898 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m64258(__this, method) (( bool (*) (TaskCompletionSource_1_t8898 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m64258_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m64259_gshared (TaskCompletionSource_1_t8898 * __this, float ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m64259(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8898 *, float, const MethodInfo*))TaskCompletionSource_1_SetResult_m64259_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m64260_gshared (TaskCompletionSource_1_t8898 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64260(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8898 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64260_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m64261_gshared (TaskCompletionSource_1_t8898 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64261(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8898 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64261_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m64262_gshared (TaskCompletionSource_1_t8898 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m64262(__this, method) (( void (*) (TaskCompletionSource_1_t8898 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m64262_gshared)(__this, method)
