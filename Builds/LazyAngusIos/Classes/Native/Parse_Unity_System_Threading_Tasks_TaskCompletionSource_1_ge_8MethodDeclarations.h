#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>
struct TaskCompletionSource_1_t8274;
// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t1554;
// System.AggregateException
struct AggregateException_t1339;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59361_gshared (TaskCompletionSource_1_t8274 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59361(__this, method) (( void (*) (TaskCompletionSource_1_t8274 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59361_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::get_Task()
extern "C" Task_1_t1554 * TaskCompletionSource_1_get_Task_m59362_gshared (TaskCompletionSource_1_t8274 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59362(__this, method) (( Task_1_t1554 * (*) (TaskCompletionSource_1_t8274 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59362_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59363_gshared (TaskCompletionSource_1_t8274 * __this, Task_1_t1554 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59363(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8274 *, Task_1_t1554 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59363_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59364_gshared (TaskCompletionSource_1_t8274 * __this, uint16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59364(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8274 *, uint16_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59364_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59365_gshared (TaskCompletionSource_1_t8274 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59365(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8274 *, AggregateException_t1339 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59365_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59366_gshared (TaskCompletionSource_1_t8274 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59366(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8274 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59366_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59367_gshared (TaskCompletionSource_1_t8274 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59367(__this, method) (( bool (*) (TaskCompletionSource_1_t8274 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59367_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59368_gshared (TaskCompletionSource_1_t8274 * __this, uint16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59368(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8274 *, uint16_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m59368_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59369_gshared (TaskCompletionSource_1_t8274 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59369(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8274 *, AggregateException_t1339 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59369_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59370_gshared (TaskCompletionSource_1_t8274 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59370(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8274 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59370_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m59371_gshared (TaskCompletionSource_1_t8274 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m59371(__this, method) (( void (*) (TaskCompletionSource_1_t8274 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m59371_gshared)(__this, method)
