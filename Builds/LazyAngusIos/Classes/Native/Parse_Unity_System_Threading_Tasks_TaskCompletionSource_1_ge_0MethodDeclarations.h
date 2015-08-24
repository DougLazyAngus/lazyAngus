#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t1331;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1394;
// System.Object
struct Object_t;
// System.AggregateException
struct AggregateException_t1339;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m7322_gshared (TaskCompletionSource_1_t1331 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m7322(__this, method) (( void (*) (TaskCompletionSource_1_t1331 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7322_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
extern "C" Task_1_t1394 * TaskCompletionSource_1_get_Task_m7324_gshared (TaskCompletionSource_1_t1331 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m7324(__this, method) (( Task_1_t1394 * (*) (TaskCompletionSource_1_t1331 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7324_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m30698_gshared (TaskCompletionSource_1_t1331 * __this, Task_1_t1394 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m30698(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1331 *, Task_1_t1394 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m30698_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m30699_gshared (TaskCompletionSource_1_t1331 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m30699(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1331 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m30699_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m30700_gshared (TaskCompletionSource_1_t1331 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m30700(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1331 *, AggregateException_t1339 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30700_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m30701_gshared (TaskCompletionSource_1_t1331 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m30701(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1331 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30701_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m30702_gshared (TaskCompletionSource_1_t1331 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m30702(__this, method) (( bool (*) (TaskCompletionSource_1_t1331 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m30702_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m7766_gshared (TaskCompletionSource_1_t1331 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m7766(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1331 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7766_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m30703_gshared (TaskCompletionSource_1_t1331 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m30703(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1331 *, AggregateException_t1339 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30703_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m30704_gshared (TaskCompletionSource_1_t1331 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m30704(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1331 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30704_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m7323_gshared (TaskCompletionSource_1_t1331 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m7323(__this, method) (( void (*) (TaskCompletionSource_1_t1331 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7323_gshared)(__this, method)
