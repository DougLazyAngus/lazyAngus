#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>
struct TaskCompletionSource_1_t8844;
// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t1574;
// System.AggregateException
struct AggregateException_t1359;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m63980_gshared (TaskCompletionSource_1_t8844 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m63980(__this, method) (( void (*) (TaskCompletionSource_1_t8844 *, const MethodInfo*))TaskCompletionSource_1__ctor_m63980_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::get_Task()
extern "C" Task_1_t1574 * TaskCompletionSource_1_get_Task_m63981_gshared (TaskCompletionSource_1_t8844 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m63981(__this, method) (( Task_1_t1574 * (*) (TaskCompletionSource_1_t8844 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m63981_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m63982_gshared (TaskCompletionSource_1_t8844 * __this, Task_1_t1574 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m63982(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8844 *, Task_1_t1574 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m63982_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m63983_gshared (TaskCompletionSource_1_t8844 * __this, uint16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m63983(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8844 *, uint16_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m63983_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m63984_gshared (TaskCompletionSource_1_t8844 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m63984(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8844 *, AggregateException_t1359 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m63984_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m63985_gshared (TaskCompletionSource_1_t8844 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m63985(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8844 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m63985_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m63986_gshared (TaskCompletionSource_1_t8844 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m63986(__this, method) (( bool (*) (TaskCompletionSource_1_t8844 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m63986_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m63987_gshared (TaskCompletionSource_1_t8844 * __this, uint16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m63987(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8844 *, uint16_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m63987_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m63988_gshared (TaskCompletionSource_1_t8844 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m63988(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8844 *, AggregateException_t1359 *, const MethodInfo*))TaskCompletionSource_1_SetException_m63988_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m63989_gshared (TaskCompletionSource_1_t8844 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m63989(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8844 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m63989_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m63990_gshared (TaskCompletionSource_1_t8844 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m63990(__this, method) (( void (*) (TaskCompletionSource_1_t8844 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m63990_gshared)(__this, method)
