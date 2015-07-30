#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
struct TaskCompletionSource_1_t1290;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1317;
// System.AggregateException
struct AggregateException_t1285;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m7024_gshared (TaskCompletionSource_1_t1290 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m7024(__this, method) (( void (*) (TaskCompletionSource_1_t1290 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7024_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::get_Task()
extern "C" Task_1_t1317 * TaskCompletionSource_1_get_Task_m7026_gshared (TaskCompletionSource_1_t1290 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m7026(__this, method) (( Task_1_t1317 * (*) (TaskCompletionSource_1_t1290 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7026_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m29924_gshared (TaskCompletionSource_1_t1290 * __this, Task_1_t1317 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m29924(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1290 *, Task_1_t1317 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m29924_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m7535_gshared (TaskCompletionSource_1_t1290 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m7535(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1290 *, int32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m7535_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m7556_gshared (TaskCompletionSource_1_t1290 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m7556(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1290 *, AggregateException_t1285 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m7556_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m29925_gshared (TaskCompletionSource_1_t1290 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m29925(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1290 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29925_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m7557_gshared (TaskCompletionSource_1_t1290 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m7557(__this, method) (( bool (*) (TaskCompletionSource_1_t1290 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m7557_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m7533_gshared (TaskCompletionSource_1_t1290 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m7533(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1290 *, int32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m7533_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m7532_gshared (TaskCompletionSource_1_t1290 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m7532(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1290 *, AggregateException_t1285 *, const MethodInfo*))TaskCompletionSource_1_SetException_m7532_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m29926_gshared (TaskCompletionSource_1_t1290 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m29926(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1290 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29926_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m7025_gshared (TaskCompletionSource_1_t1290 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m7025(__this, method) (( void (*) (TaskCompletionSource_1_t1290 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7025_gshared)(__this, method)
