#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int64>
struct TaskCompletionSource_1_t8868;
// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1576;
// System.AggregateException
struct AggregateException_t1359;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m64096_gshared (TaskCompletionSource_1_t8868 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m64096(__this, method) (( void (*) (TaskCompletionSource_1_t8868 *, const MethodInfo*))TaskCompletionSource_1__ctor_m64096_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::get_Task()
extern "C" Task_1_t1576 * TaskCompletionSource_1_get_Task_m64097_gshared (TaskCompletionSource_1_t8868 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m64097(__this, method) (( Task_1_t1576 * (*) (TaskCompletionSource_1_t8868 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m64097_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m64098_gshared (TaskCompletionSource_1_t8868 * __this, Task_1_t1576 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m64098(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8868 *, Task_1_t1576 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m64098_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m64099_gshared (TaskCompletionSource_1_t8868 * __this, int64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m64099(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8868 *, int64_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m64099_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m64100_gshared (TaskCompletionSource_1_t8868 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64100(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8868 *, AggregateException_t1359 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64100_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m64101_gshared (TaskCompletionSource_1_t8868 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64101(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8868 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64101_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m64102_gshared (TaskCompletionSource_1_t8868 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m64102(__this, method) (( bool (*) (TaskCompletionSource_1_t8868 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m64102_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m64103_gshared (TaskCompletionSource_1_t8868 * __this, int64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m64103(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8868 *, int64_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m64103_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m64104_gshared (TaskCompletionSource_1_t8868 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64104(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8868 *, AggregateException_t1359 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64104_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m64105_gshared (TaskCompletionSource_1_t8868 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64105(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8868 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64105_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m64106_gshared (TaskCompletionSource_1_t8868 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m64106(__this, method) (( void (*) (TaskCompletionSource_1_t8868 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m64106_gshared)(__this, method)
