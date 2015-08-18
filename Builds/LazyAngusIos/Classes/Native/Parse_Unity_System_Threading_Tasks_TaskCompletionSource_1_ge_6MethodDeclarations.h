#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.SByte>
struct TaskCompletionSource_1_t8243;
// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1551;
// System.AggregateException
struct AggregateException_t1338;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59121_gshared (TaskCompletionSource_1_t8243 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59121(__this, method) (( void (*) (TaskCompletionSource_1_t8243 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59121_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::get_Task()
extern "C" Task_1_t1551 * TaskCompletionSource_1_get_Task_m59122_gshared (TaskCompletionSource_1_t8243 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59122(__this, method) (( Task_1_t1551 * (*) (TaskCompletionSource_1_t8243 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59122_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59123_gshared (TaskCompletionSource_1_t8243 * __this, Task_1_t1551 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59123(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8243 *, Task_1_t1551 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59123_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59124_gshared (TaskCompletionSource_1_t8243 * __this, int8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59124(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8243 *, int8_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59124_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59125_gshared (TaskCompletionSource_1_t8243 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59125(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8243 *, AggregateException_t1338 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59125_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59126_gshared (TaskCompletionSource_1_t8243 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59126(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8243 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59126_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59127_gshared (TaskCompletionSource_1_t8243 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59127(__this, method) (( bool (*) (TaskCompletionSource_1_t8243 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59127_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59128_gshared (TaskCompletionSource_1_t8243 * __this, int8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59128(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8243 *, int8_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m59128_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59129_gshared (TaskCompletionSource_1_t8243 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59129(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8243 *, AggregateException_t1338 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59129_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59130_gshared (TaskCompletionSource_1_t8243 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59130(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8243 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59130_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m59131_gshared (TaskCompletionSource_1_t8243 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m59131(__this, method) (( void (*) (TaskCompletionSource_1_t8243 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m59131_gshared)(__this, method)
