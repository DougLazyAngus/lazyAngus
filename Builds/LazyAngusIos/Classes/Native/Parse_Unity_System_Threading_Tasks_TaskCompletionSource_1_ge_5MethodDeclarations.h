#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Byte>
struct TaskCompletionSource_1_t5892;
// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1365;
// System.AggregateException
struct AggregateException_t1285;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m29985_gshared (TaskCompletionSource_1_t5892 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m29985(__this, method) (( void (*) (TaskCompletionSource_1_t5892 *, const MethodInfo*))TaskCompletionSource_1__ctor_m29985_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::get_Task()
extern "C" Task_1_t1365 * TaskCompletionSource_1_get_Task_m29986_gshared (TaskCompletionSource_1_t5892 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m29986(__this, method) (( Task_1_t1365 * (*) (TaskCompletionSource_1_t5892 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m29986_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m29987_gshared (TaskCompletionSource_1_t5892 * __this, Task_1_t1365 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m29987(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t5892 *, Task_1_t1365 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m29987_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m29988_gshared (TaskCompletionSource_1_t5892 * __this, uint8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m29988(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t5892 *, uint8_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m29988_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m29989_gshared (TaskCompletionSource_1_t5892 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m29989(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t5892 *, AggregateException_t1285 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29989_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m29990_gshared (TaskCompletionSource_1_t5892 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m29990(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t5892 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29990_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m29991_gshared (TaskCompletionSource_1_t5892 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m29991(__this, method) (( bool (*) (TaskCompletionSource_1_t5892 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m29991_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m29992_gshared (TaskCompletionSource_1_t5892 * __this, uint8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m29992(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t5892 *, uint8_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m29992_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m29993_gshared (TaskCompletionSource_1_t5892 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m29993(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t5892 *, AggregateException_t1285 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29993_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m29994_gshared (TaskCompletionSource_1_t5892 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m29994(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t5892 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29994_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m29995_gshared (TaskCompletionSource_1_t5892 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m29995(__this, method) (( void (*) (TaskCompletionSource_1_t5892 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m29995_gshared)(__this, method)
