#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
struct TaskCompletionSource_1_t1294;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1321;
// System.AggregateException
struct AggregateException_t1289;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m7049_gshared (TaskCompletionSource_1_t1294 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m7049(__this, method) (( void (*) (TaskCompletionSource_1_t1294 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7049_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::get_Task()
extern "C" Task_1_t1321 * TaskCompletionSource_1_get_Task_m7051_gshared (TaskCompletionSource_1_t1294 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m7051(__this, method) (( Task_1_t1321 * (*) (TaskCompletionSource_1_t1294 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7051_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m29952_gshared (TaskCompletionSource_1_t1294 * __this, Task_1_t1321 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m29952(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1294 *, Task_1_t1321 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m29952_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m7560_gshared (TaskCompletionSource_1_t1294 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m7560(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1294 *, int32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m7560_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m7581_gshared (TaskCompletionSource_1_t1294 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m7581(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1294 *, AggregateException_t1289 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m7581_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m29953_gshared (TaskCompletionSource_1_t1294 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m29953(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1294 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29953_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m7582_gshared (TaskCompletionSource_1_t1294 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m7582(__this, method) (( bool (*) (TaskCompletionSource_1_t1294 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m7582_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m7558_gshared (TaskCompletionSource_1_t1294 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m7558(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1294 *, int32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m7558_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m7557_gshared (TaskCompletionSource_1_t1294 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m7557(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1294 *, AggregateException_t1289 *, const MethodInfo*))TaskCompletionSource_1_SetException_m7557_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m29954_gshared (TaskCompletionSource_1_t1294 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m29954(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1294 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29954_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m7050_gshared (TaskCompletionSource_1_t1294 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m7050(__this, method) (( void (*) (TaskCompletionSource_1_t1294 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7050_gshared)(__this, method)
