#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t1279;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1342;
// System.Object
struct Object_t;
// System.AggregateException
struct AggregateException_t1287;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m7042_gshared (TaskCompletionSource_1_t1279 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m7042(__this, method) (( void (*) (TaskCompletionSource_1_t1279 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7042_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
extern "C" Task_1_t1342 * TaskCompletionSource_1_get_Task_m7044_gshared (TaskCompletionSource_1_t1279 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m7044(__this, method) (( Task_1_t1342 * (*) (TaskCompletionSource_1_t1279 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7044_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m29886_gshared (TaskCompletionSource_1_t1279 * __this, Task_1_t1342 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m29886(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1279 *, Task_1_t1342 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m29886_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m29887_gshared (TaskCompletionSource_1_t1279 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m29887(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1279 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m29887_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m29888_gshared (TaskCompletionSource_1_t1279 * __this, AggregateException_t1287 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m29888(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1279 *, AggregateException_t1287 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29888_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m29889_gshared (TaskCompletionSource_1_t1279 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m29889(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1279 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29889_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m29890_gshared (TaskCompletionSource_1_t1279 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m29890(__this, method) (( bool (*) (TaskCompletionSource_1_t1279 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m29890_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m7486_gshared (TaskCompletionSource_1_t1279 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m7486(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1279 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7486_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m29891_gshared (TaskCompletionSource_1_t1279 * __this, AggregateException_t1287 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m29891(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1279 *, AggregateException_t1287 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29891_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m29892_gshared (TaskCompletionSource_1_t1279 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m29892(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1279 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29892_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m7043_gshared (TaskCompletionSource_1_t1279 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m7043(__this, method) (( void (*) (TaskCompletionSource_1_t1279 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7043_gshared)(__this, method)
