#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
struct TaskCompletionSource_1_t1364;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1391;
// System.AggregateException
struct AggregateException_t1359;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m7466_gshared (TaskCompletionSource_1_t1364 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m7466(__this, method) (( void (*) (TaskCompletionSource_1_t1364 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7466_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::get_Task()
extern "C" Task_1_t1391 * TaskCompletionSource_1_get_Task_m7468_gshared (TaskCompletionSource_1_t1364 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m7468(__this, method) (( Task_1_t1391 * (*) (TaskCompletionSource_1_t1364 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7468_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m35332_gshared (TaskCompletionSource_1_t1364 * __this, Task_1_t1391 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m35332(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1364 *, Task_1_t1391 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m35332_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m7976_gshared (TaskCompletionSource_1_t1364 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m7976(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1364 *, int32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m7976_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m7997_gshared (TaskCompletionSource_1_t1364 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m7997(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1364 *, AggregateException_t1359 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m7997_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m35333_gshared (TaskCompletionSource_1_t1364 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m35333(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1364 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35333_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m7998_gshared (TaskCompletionSource_1_t1364 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m7998(__this, method) (( bool (*) (TaskCompletionSource_1_t1364 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m7998_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m7974_gshared (TaskCompletionSource_1_t1364 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m7974(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1364 *, int32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m7974_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m7973_gshared (TaskCompletionSource_1_t1364 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m7973(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1364 *, AggregateException_t1359 *, const MethodInfo*))TaskCompletionSource_1_SetException_m7973_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m35334_gshared (TaskCompletionSource_1_t1364 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m35334(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1364 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35334_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m7467_gshared (TaskCompletionSource_1_t1364 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m7467(__this, method) (( void (*) (TaskCompletionSource_1_t1364 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7467_gshared)(__this, method)
