#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>
struct TaskCompletionSource_1_t8851;
// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t1572;
// System.AggregateException
struct AggregateException_t1356;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m64026_gshared (TaskCompletionSource_1_t8851 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m64026(__this, method) (( void (*) (TaskCompletionSource_1_t8851 *, const MethodInfo*))TaskCompletionSource_1__ctor_m64026_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::get_Task()
extern "C" Task_1_t1572 * TaskCompletionSource_1_get_Task_m64027_gshared (TaskCompletionSource_1_t8851 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m64027(__this, method) (( Task_1_t1572 * (*) (TaskCompletionSource_1_t8851 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m64027_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m64028_gshared (TaskCompletionSource_1_t8851 * __this, Task_1_t1572 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m64028(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8851 *, Task_1_t1572 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m64028_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m64029_gshared (TaskCompletionSource_1_t8851 * __this, uint32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m64029(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8851 *, uint32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m64029_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m64030_gshared (TaskCompletionSource_1_t8851 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64030(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8851 *, AggregateException_t1356 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64030_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m64031_gshared (TaskCompletionSource_1_t8851 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64031(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8851 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64031_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m64032_gshared (TaskCompletionSource_1_t8851 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m64032(__this, method) (( bool (*) (TaskCompletionSource_1_t8851 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m64032_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m64033_gshared (TaskCompletionSource_1_t8851 * __this, uint32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m64033(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8851 *, uint32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m64033_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m64034_gshared (TaskCompletionSource_1_t8851 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64034(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8851 *, AggregateException_t1356 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64034_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m64035_gshared (TaskCompletionSource_1_t8851 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64035(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8851 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64035_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m64036_gshared (TaskCompletionSource_1_t8851 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m64036(__this, method) (( void (*) (TaskCompletionSource_1_t8851 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m64036_gshared)(__this, method)
