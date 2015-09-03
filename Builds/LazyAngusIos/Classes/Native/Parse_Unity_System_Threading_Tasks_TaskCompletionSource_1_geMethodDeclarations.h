#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
struct TaskCompletionSource_1_t1360;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1387;
// System.AggregateException
struct AggregateException_t1355;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m7453_gshared (TaskCompletionSource_1_t1360 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m7453(__this, method) (( void (*) (TaskCompletionSource_1_t1360 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7453_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::get_Task()
extern "C" Task_1_t1387 * TaskCompletionSource_1_get_Task_m7455_gshared (TaskCompletionSource_1_t1360 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m7455(__this, method) (( Task_1_t1387 * (*) (TaskCompletionSource_1_t1360 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7455_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m35307_gshared (TaskCompletionSource_1_t1360 * __this, Task_1_t1387 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m35307(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1360 *, Task_1_t1387 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m35307_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m7963_gshared (TaskCompletionSource_1_t1360 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m7963(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1360 *, int32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m7963_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m7984_gshared (TaskCompletionSource_1_t1360 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m7984(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1360 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m7984_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m35308_gshared (TaskCompletionSource_1_t1360 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m35308(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1360 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35308_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m7985_gshared (TaskCompletionSource_1_t1360 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m7985(__this, method) (( bool (*) (TaskCompletionSource_1_t1360 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m7985_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m7961_gshared (TaskCompletionSource_1_t1360 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m7961(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1360 *, int32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m7961_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m7960_gshared (TaskCompletionSource_1_t1360 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m7960(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1360 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_SetException_m7960_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m35309_gshared (TaskCompletionSource_1_t1360 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m35309(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1360 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35309_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m7454_gshared (TaskCompletionSource_1_t1360 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m7454(__this, method) (( void (*) (TaskCompletionSource_1_t1360 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7454_gshared)(__this, method)
