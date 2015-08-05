#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int16>
struct TaskCompletionSource_1_t8184;
// System.Threading.Tasks.Task`1<System.Int16>
struct Task_1_t1502;
// System.AggregateException
struct AggregateException_t1288;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58505_gshared (TaskCompletionSource_1_t8184 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58505(__this, method) (( void (*) (TaskCompletionSource_1_t8184 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58505_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::get_Task()
extern "C" Task_1_t1502 * TaskCompletionSource_1_get_Task_m58506_gshared (TaskCompletionSource_1_t8184 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58506(__this, method) (( Task_1_t1502 * (*) (TaskCompletionSource_1_t8184 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58506_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58507_gshared (TaskCompletionSource_1_t8184 * __this, Task_1_t1502 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58507(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8184 *, Task_1_t1502 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58507_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58508_gshared (TaskCompletionSource_1_t8184 * __this, int16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58508(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8184 *, int16_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58508_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58509_gshared (TaskCompletionSource_1_t8184 * __this, AggregateException_t1288 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58509(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8184 *, AggregateException_t1288 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58509_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58510_gshared (TaskCompletionSource_1_t8184 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58510(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8184 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58510_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58511_gshared (TaskCompletionSource_1_t8184 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58511(__this, method) (( bool (*) (TaskCompletionSource_1_t8184 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58511_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58512_gshared (TaskCompletionSource_1_t8184 * __this, int16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58512(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8184 *, int16_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m58512_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58513_gshared (TaskCompletionSource_1_t8184 * __this, AggregateException_t1288 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58513(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8184 *, AggregateException_t1288 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58513_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58514_gshared (TaskCompletionSource_1_t8184 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58514(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8184 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58514_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58515_gshared (TaskCompletionSource_1_t8184 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58515(__this, method) (( void (*) (TaskCompletionSource_1_t8184 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58515_gshared)(__this, method)
