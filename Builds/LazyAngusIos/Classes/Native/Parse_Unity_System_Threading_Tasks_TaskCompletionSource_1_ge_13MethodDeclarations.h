#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Single>
struct TaskCompletionSource_1_t8334;
// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t1560;
// System.AggregateException
struct AggregateException_t1339;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59658_gshared (TaskCompletionSource_1_t8334 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59658(__this, method) (( void (*) (TaskCompletionSource_1_t8334 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59658_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Single>::get_Task()
extern "C" Task_1_t1560 * TaskCompletionSource_1_get_Task_m59659_gshared (TaskCompletionSource_1_t8334 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59659(__this, method) (( Task_1_t1560 * (*) (TaskCompletionSource_1_t8334 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59659_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59660_gshared (TaskCompletionSource_1_t8334 * __this, Task_1_t1560 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59660(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8334 *, Task_1_t1560 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59660_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59661_gshared (TaskCompletionSource_1_t8334 * __this, float ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59661(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8334 *, float, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59661_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59662_gshared (TaskCompletionSource_1_t8334 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59662(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8334 *, AggregateException_t1339 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59662_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59663_gshared (TaskCompletionSource_1_t8334 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59663(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8334 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59663_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59664_gshared (TaskCompletionSource_1_t8334 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59664(__this, method) (( bool (*) (TaskCompletionSource_1_t8334 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59664_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59665_gshared (TaskCompletionSource_1_t8334 * __this, float ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59665(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8334 *, float, const MethodInfo*))TaskCompletionSource_1_SetResult_m59665_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59666_gshared (TaskCompletionSource_1_t8334 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59666(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8334 *, AggregateException_t1339 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59666_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59667_gshared (TaskCompletionSource_1_t8334 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59667(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8334 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59667_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m59668_gshared (TaskCompletionSource_1_t8334 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m59668(__this, method) (( void (*) (TaskCompletionSource_1_t8334 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m59668_gshared)(__this, method)
