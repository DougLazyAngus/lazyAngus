#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Byte>
struct TaskCompletionSource_1_t5885;
// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1359;
// System.AggregateException
struct AggregateException_t1279;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m29938_gshared (TaskCompletionSource_1_t5885 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m29938(__this, method) (( void (*) (TaskCompletionSource_1_t5885 *, const MethodInfo*))TaskCompletionSource_1__ctor_m29938_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::get_Task()
extern "C" Task_1_t1359 * TaskCompletionSource_1_get_Task_m29939_gshared (TaskCompletionSource_1_t5885 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m29939(__this, method) (( Task_1_t1359 * (*) (TaskCompletionSource_1_t5885 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m29939_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m29940_gshared (TaskCompletionSource_1_t5885 * __this, Task_1_t1359 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m29940(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t5885 *, Task_1_t1359 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m29940_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m29941_gshared (TaskCompletionSource_1_t5885 * __this, uint8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m29941(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t5885 *, uint8_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m29941_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m29942_gshared (TaskCompletionSource_1_t5885 * __this, AggregateException_t1279 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m29942(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t5885 *, AggregateException_t1279 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29942_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m29943_gshared (TaskCompletionSource_1_t5885 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m29943(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t5885 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29943_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m29944_gshared (TaskCompletionSource_1_t5885 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m29944(__this, method) (( bool (*) (TaskCompletionSource_1_t5885 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m29944_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m29945_gshared (TaskCompletionSource_1_t5885 * __this, uint8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m29945(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t5885 *, uint8_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m29945_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m29946_gshared (TaskCompletionSource_1_t5885 * __this, AggregateException_t1279 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m29946(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t5885 *, AggregateException_t1279 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29946_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m29947_gshared (TaskCompletionSource_1_t5885 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m29947(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t5885 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29947_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m29948_gshared (TaskCompletionSource_1_t5885 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m29948(__this, method) (( void (*) (TaskCompletionSource_1_t5885 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m29948_gshared)(__this, method)
