#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int64>
struct TaskCompletionSource_1_t8295;
// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1553;
// System.AggregateException
struct AggregateException_t1336;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59445_gshared (TaskCompletionSource_1_t8295 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59445(__this, method) (( void (*) (TaskCompletionSource_1_t8295 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59445_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::get_Task()
extern "C" Task_1_t1553 * TaskCompletionSource_1_get_Task_m59446_gshared (TaskCompletionSource_1_t8295 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59446(__this, method) (( Task_1_t1553 * (*) (TaskCompletionSource_1_t8295 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59446_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59447_gshared (TaskCompletionSource_1_t8295 * __this, Task_1_t1553 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59447(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8295 *, Task_1_t1553 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59447_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59448_gshared (TaskCompletionSource_1_t8295 * __this, int64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59448(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8295 *, int64_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59448_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59449_gshared (TaskCompletionSource_1_t8295 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59449(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8295 *, AggregateException_t1336 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59449_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59450_gshared (TaskCompletionSource_1_t8295 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59450(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8295 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59450_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59451_gshared (TaskCompletionSource_1_t8295 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59451(__this, method) (( bool (*) (TaskCompletionSource_1_t8295 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59451_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59452_gshared (TaskCompletionSource_1_t8295 * __this, int64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59452(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8295 *, int64_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m59452_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59453_gshared (TaskCompletionSource_1_t8295 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59453(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8295 *, AggregateException_t1336 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59453_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59454_gshared (TaskCompletionSource_1_t8295 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59454(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8295 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59454_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m59455_gshared (TaskCompletionSource_1_t8295 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m59455(__this, method) (( void (*) (TaskCompletionSource_1_t8295 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m59455_gshared)(__this, method)
