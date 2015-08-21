#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Single>
struct TaskCompletionSource_1_t8331;
// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t1557;
// System.AggregateException
struct AggregateException_t1336;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59625_gshared (TaskCompletionSource_1_t8331 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59625(__this, method) (( void (*) (TaskCompletionSource_1_t8331 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59625_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Single>::get_Task()
extern "C" Task_1_t1557 * TaskCompletionSource_1_get_Task_m59626_gshared (TaskCompletionSource_1_t8331 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59626(__this, method) (( Task_1_t1557 * (*) (TaskCompletionSource_1_t8331 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59626_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59627_gshared (TaskCompletionSource_1_t8331 * __this, Task_1_t1557 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59627(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8331 *, Task_1_t1557 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59627_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59628_gshared (TaskCompletionSource_1_t8331 * __this, float ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59628(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8331 *, float, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59628_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59629_gshared (TaskCompletionSource_1_t8331 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59629(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8331 *, AggregateException_t1336 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59629_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59630_gshared (TaskCompletionSource_1_t8331 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59630(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8331 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59630_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59631_gshared (TaskCompletionSource_1_t8331 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59631(__this, method) (( bool (*) (TaskCompletionSource_1_t8331 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59631_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59632_gshared (TaskCompletionSource_1_t8331 * __this, float ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59632(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8331 *, float, const MethodInfo*))TaskCompletionSource_1_SetResult_m59632_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59633_gshared (TaskCompletionSource_1_t8331 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59633(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8331 *, AggregateException_t1336 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59633_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59634_gshared (TaskCompletionSource_1_t8331 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59634(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8331 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59634_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m59635_gshared (TaskCompletionSource_1_t8331 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m59635(__this, method) (( void (*) (TaskCompletionSource_1_t8331 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m59635_gshared)(__this, method)
