#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.SByte>
struct TaskCompletionSource_1_t8827;
// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1579;
// System.AggregateException
struct AggregateException_t1366;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m63921_gshared (TaskCompletionSource_1_t8827 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m63921(__this, method) (( void (*) (TaskCompletionSource_1_t8827 *, const MethodInfo*))TaskCompletionSource_1__ctor_m63921_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::get_Task()
extern "C" Task_1_t1579 * TaskCompletionSource_1_get_Task_m63922_gshared (TaskCompletionSource_1_t8827 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m63922(__this, method) (( Task_1_t1579 * (*) (TaskCompletionSource_1_t8827 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m63922_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m63923_gshared (TaskCompletionSource_1_t8827 * __this, Task_1_t1579 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m63923(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8827 *, Task_1_t1579 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m63923_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m63924_gshared (TaskCompletionSource_1_t8827 * __this, int8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m63924(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8827 *, int8_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m63924_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m63925_gshared (TaskCompletionSource_1_t8827 * __this, AggregateException_t1366 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m63925(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8827 *, AggregateException_t1366 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m63925_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m63926_gshared (TaskCompletionSource_1_t8827 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m63926(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8827 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m63926_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m63927_gshared (TaskCompletionSource_1_t8827 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m63927(__this, method) (( bool (*) (TaskCompletionSource_1_t8827 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m63927_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m63928_gshared (TaskCompletionSource_1_t8827 * __this, int8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m63928(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8827 *, int8_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m63928_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m63929_gshared (TaskCompletionSource_1_t8827 * __this, AggregateException_t1366 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m63929(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8827 *, AggregateException_t1366 *, const MethodInfo*))TaskCompletionSource_1_SetException_m63929_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m63930_gshared (TaskCompletionSource_1_t8827 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m63930(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8827 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m63930_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m63931_gshared (TaskCompletionSource_1_t8827 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m63931(__this, method) (( void (*) (TaskCompletionSource_1_t8827 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m63931_gshared)(__this, method)
