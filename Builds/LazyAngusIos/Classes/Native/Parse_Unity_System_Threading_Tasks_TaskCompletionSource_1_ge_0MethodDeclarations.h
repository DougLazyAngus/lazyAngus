#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t1271;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1334;
// System.Object
struct Object_t;
// System.AggregateException
struct AggregateException_t1279;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m6983_gshared (TaskCompletionSource_1_t1271 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m6983(__this, method) (( void (*) (TaskCompletionSource_1_t1271 *, const MethodInfo*))TaskCompletionSource_1__ctor_m6983_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
extern "C" Task_1_t1334 * TaskCompletionSource_1_get_Task_m6985_gshared (TaskCompletionSource_1_t1271 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m6985(__this, method) (( Task_1_t1334 * (*) (TaskCompletionSource_1_t1271 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m6985_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m29823_gshared (TaskCompletionSource_1_t1271 * __this, Task_1_t1334 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m29823(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1271 *, Task_1_t1334 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m29823_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m29824_gshared (TaskCompletionSource_1_t1271 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m29824(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1271 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m29824_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m29825_gshared (TaskCompletionSource_1_t1271 * __this, AggregateException_t1279 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m29825(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1271 *, AggregateException_t1279 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29825_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m29826_gshared (TaskCompletionSource_1_t1271 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m29826(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1271 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29826_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m29827_gshared (TaskCompletionSource_1_t1271 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m29827(__this, method) (( bool (*) (TaskCompletionSource_1_t1271 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m29827_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m7427_gshared (TaskCompletionSource_1_t1271 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m7427(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1271 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7427_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m29828_gshared (TaskCompletionSource_1_t1271 * __this, AggregateException_t1279 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m29828(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1271 *, AggregateException_t1279 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29828_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m29829_gshared (TaskCompletionSource_1_t1271 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m29829(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1271 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29829_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m6984_gshared (TaskCompletionSource_1_t1271 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m6984(__this, method) (( void (*) (TaskCompletionSource_1_t1271 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m6984_gshared)(__this, method)
