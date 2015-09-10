#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Single>
struct TaskCompletionSource_1_t8911;
// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t1587;
// System.AggregateException
struct AggregateException_t1366;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m64334_gshared (TaskCompletionSource_1_t8911 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m64334(__this, method) (( void (*) (TaskCompletionSource_1_t8911 *, const MethodInfo*))TaskCompletionSource_1__ctor_m64334_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Single>::get_Task()
extern "C" Task_1_t1587 * TaskCompletionSource_1_get_Task_m64335_gshared (TaskCompletionSource_1_t8911 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m64335(__this, method) (( Task_1_t1587 * (*) (TaskCompletionSource_1_t8911 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m64335_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m64336_gshared (TaskCompletionSource_1_t8911 * __this, Task_1_t1587 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m64336(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8911 *, Task_1_t1587 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m64336_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m64337_gshared (TaskCompletionSource_1_t8911 * __this, float ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m64337(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8911 *, float, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m64337_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m64338_gshared (TaskCompletionSource_1_t8911 * __this, AggregateException_t1366 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64338(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8911 *, AggregateException_t1366 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64338_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m64339_gshared (TaskCompletionSource_1_t8911 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64339(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8911 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64339_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m64340_gshared (TaskCompletionSource_1_t8911 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m64340(__this, method) (( bool (*) (TaskCompletionSource_1_t8911 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m64340_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m64341_gshared (TaskCompletionSource_1_t8911 * __this, float ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m64341(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8911 *, float, const MethodInfo*))TaskCompletionSource_1_SetResult_m64341_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m64342_gshared (TaskCompletionSource_1_t8911 * __this, AggregateException_t1366 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64342(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8911 *, AggregateException_t1366 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64342_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m64343_gshared (TaskCompletionSource_1_t8911 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64343(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8911 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64343_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m64344_gshared (TaskCompletionSource_1_t8911 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m64344(__this, method) (( void (*) (TaskCompletionSource_1_t8911 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m64344_gshared)(__this, method)
