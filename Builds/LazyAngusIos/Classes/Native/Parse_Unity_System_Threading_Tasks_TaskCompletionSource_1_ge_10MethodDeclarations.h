#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int64>
struct TaskCompletionSource_1_t8291;
// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1555;
// System.AggregateException
struct AggregateException_t1338;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59353_gshared (TaskCompletionSource_1_t8291 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59353(__this, method) (( void (*) (TaskCompletionSource_1_t8291 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59353_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::get_Task()
extern "C" Task_1_t1555 * TaskCompletionSource_1_get_Task_m59354_gshared (TaskCompletionSource_1_t8291 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59354(__this, method) (( Task_1_t1555 * (*) (TaskCompletionSource_1_t8291 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59354_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59355_gshared (TaskCompletionSource_1_t8291 * __this, Task_1_t1555 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59355(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8291 *, Task_1_t1555 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59355_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59356_gshared (TaskCompletionSource_1_t8291 * __this, int64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59356(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8291 *, int64_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59356_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59357_gshared (TaskCompletionSource_1_t8291 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59357(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8291 *, AggregateException_t1338 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59357_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59358_gshared (TaskCompletionSource_1_t8291 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59358(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8291 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59358_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59359_gshared (TaskCompletionSource_1_t8291 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59359(__this, method) (( bool (*) (TaskCompletionSource_1_t8291 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59359_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59360_gshared (TaskCompletionSource_1_t8291 * __this, int64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59360(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8291 *, int64_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m59360_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59361_gshared (TaskCompletionSource_1_t8291 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59361(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8291 *, AggregateException_t1338 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59361_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59362_gshared (TaskCompletionSource_1_t8291 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59362(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8291 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59362_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m59363_gshared (TaskCompletionSource_1_t8291 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m59363(__this, method) (( void (*) (TaskCompletionSource_1_t8291 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m59363_gshared)(__this, method)
