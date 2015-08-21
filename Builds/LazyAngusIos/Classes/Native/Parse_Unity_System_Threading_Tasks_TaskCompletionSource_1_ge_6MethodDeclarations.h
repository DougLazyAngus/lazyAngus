#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.SByte>
struct TaskCompletionSource_1_t8247;
// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1549;
// System.AggregateException
struct AggregateException_t1336;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59213_gshared (TaskCompletionSource_1_t8247 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59213(__this, method) (( void (*) (TaskCompletionSource_1_t8247 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59213_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::get_Task()
extern "C" Task_1_t1549 * TaskCompletionSource_1_get_Task_m59214_gshared (TaskCompletionSource_1_t8247 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59214(__this, method) (( Task_1_t1549 * (*) (TaskCompletionSource_1_t8247 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59214_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59215_gshared (TaskCompletionSource_1_t8247 * __this, Task_1_t1549 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59215(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8247 *, Task_1_t1549 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59215_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59216_gshared (TaskCompletionSource_1_t8247 * __this, int8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59216(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8247 *, int8_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59216_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59217_gshared (TaskCompletionSource_1_t8247 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59217(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8247 *, AggregateException_t1336 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59217_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59218_gshared (TaskCompletionSource_1_t8247 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59218(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8247 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59218_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59219_gshared (TaskCompletionSource_1_t8247 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59219(__this, method) (( bool (*) (TaskCompletionSource_1_t8247 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59219_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59220_gshared (TaskCompletionSource_1_t8247 * __this, int8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59220(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8247 *, int8_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m59220_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59221_gshared (TaskCompletionSource_1_t8247 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59221(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8247 *, AggregateException_t1336 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59221_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59222_gshared (TaskCompletionSource_1_t8247 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59222(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8247 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59222_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m59223_gshared (TaskCompletionSource_1_t8247 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m59223(__this, method) (( void (*) (TaskCompletionSource_1_t8247 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m59223_gshared)(__this, method)
