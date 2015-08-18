#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Single>
struct TaskCompletionSource_1_t8327;
// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t1559;
// System.AggregateException
struct AggregateException_t1338;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59534_gshared (TaskCompletionSource_1_t8327 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59534(__this, method) (( void (*) (TaskCompletionSource_1_t8327 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59534_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Single>::get_Task()
extern "C" Task_1_t1559 * TaskCompletionSource_1_get_Task_m59535_gshared (TaskCompletionSource_1_t8327 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59535(__this, method) (( Task_1_t1559 * (*) (TaskCompletionSource_1_t8327 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59535_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59536_gshared (TaskCompletionSource_1_t8327 * __this, Task_1_t1559 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59536(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8327 *, Task_1_t1559 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59536_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59537_gshared (TaskCompletionSource_1_t8327 * __this, float ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59537(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8327 *, float, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59537_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59538_gshared (TaskCompletionSource_1_t8327 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59538(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8327 *, AggregateException_t1338 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59538_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59539_gshared (TaskCompletionSource_1_t8327 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59539(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8327 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59539_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59540_gshared (TaskCompletionSource_1_t8327 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59540(__this, method) (( bool (*) (TaskCompletionSource_1_t8327 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59540_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59541_gshared (TaskCompletionSource_1_t8327 * __this, float ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59541(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8327 *, float, const MethodInfo*))TaskCompletionSource_1_SetResult_m59541_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59542_gshared (TaskCompletionSource_1_t8327 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59542(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8327 *, AggregateException_t1338 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59542_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59543_gshared (TaskCompletionSource_1_t8327 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59543(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8327 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59543_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m59544_gshared (TaskCompletionSource_1_t8327 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m59544(__this, method) (( void (*) (TaskCompletionSource_1_t8327 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m59544_gshared)(__this, method)
