#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
struct TaskCompletionSource_1_t1344;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1371;
// System.AggregateException
struct AggregateException_t1339;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m7317_gshared (TaskCompletionSource_1_t1344 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m7317(__this, method) (( void (*) (TaskCompletionSource_1_t1344 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7317_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::get_Task()
extern "C" Task_1_t1371 * TaskCompletionSource_1_get_Task_m7319_gshared (TaskCompletionSource_1_t1344 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m7319(__this, method) (( Task_1_t1371 * (*) (TaskCompletionSource_1_t1344 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7319_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m30752_gshared (TaskCompletionSource_1_t1344 * __this, Task_1_t1371 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m30752(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1344 *, Task_1_t1371 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m30752_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m7828_gshared (TaskCompletionSource_1_t1344 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m7828(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1344 *, int32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m7828_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m7849_gshared (TaskCompletionSource_1_t1344 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m7849(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1344 *, AggregateException_t1339 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m7849_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m30753_gshared (TaskCompletionSource_1_t1344 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m30753(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1344 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30753_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m7850_gshared (TaskCompletionSource_1_t1344 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m7850(__this, method) (( bool (*) (TaskCompletionSource_1_t1344 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m7850_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m7826_gshared (TaskCompletionSource_1_t1344 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m7826(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1344 *, int32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m7826_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m7825_gshared (TaskCompletionSource_1_t1344 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m7825(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1344 *, AggregateException_t1339 *, const MethodInfo*))TaskCompletionSource_1_SetException_m7825_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m30754_gshared (TaskCompletionSource_1_t1344 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m30754(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1344 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30754_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m7318_gshared (TaskCompletionSource_1_t1344 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m7318(__this, method) (( void (*) (TaskCompletionSource_1_t1344 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7318_gshared)(__this, method)
