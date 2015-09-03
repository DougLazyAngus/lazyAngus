#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int64>
struct TaskCompletionSource_1_t8862;
// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1572;
// System.AggregateException
struct AggregateException_t1355;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m64071_gshared (TaskCompletionSource_1_t8862 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m64071(__this, method) (( void (*) (TaskCompletionSource_1_t8862 *, const MethodInfo*))TaskCompletionSource_1__ctor_m64071_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::get_Task()
extern "C" Task_1_t1572 * TaskCompletionSource_1_get_Task_m64072_gshared (TaskCompletionSource_1_t8862 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m64072(__this, method) (( Task_1_t1572 * (*) (TaskCompletionSource_1_t8862 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m64072_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m64073_gshared (TaskCompletionSource_1_t8862 * __this, Task_1_t1572 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m64073(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8862 *, Task_1_t1572 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m64073_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m64074_gshared (TaskCompletionSource_1_t8862 * __this, int64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m64074(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8862 *, int64_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m64074_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m64075_gshared (TaskCompletionSource_1_t8862 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64075(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8862 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64075_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m64076_gshared (TaskCompletionSource_1_t8862 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64076(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8862 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64076_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m64077_gshared (TaskCompletionSource_1_t8862 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m64077(__this, method) (( bool (*) (TaskCompletionSource_1_t8862 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m64077_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m64078_gshared (TaskCompletionSource_1_t8862 * __this, int64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m64078(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8862 *, int64_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m64078_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m64079_gshared (TaskCompletionSource_1_t8862 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64079(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8862 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64079_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m64080_gshared (TaskCompletionSource_1_t8862 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64080(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8862 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64080_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m64081_gshared (TaskCompletionSource_1_t8862 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m64081(__this, method) (( void (*) (TaskCompletionSource_1_t8862 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m64081_gshared)(__this, method)
