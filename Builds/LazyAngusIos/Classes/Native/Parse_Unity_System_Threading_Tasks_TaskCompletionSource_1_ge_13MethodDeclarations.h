#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Single>
struct TaskCompletionSource_1_t8904;
// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t1580;
// System.AggregateException
struct AggregateException_t1359;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m64277_gshared (TaskCompletionSource_1_t8904 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m64277(__this, method) (( void (*) (TaskCompletionSource_1_t8904 *, const MethodInfo*))TaskCompletionSource_1__ctor_m64277_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Single>::get_Task()
extern "C" Task_1_t1580 * TaskCompletionSource_1_get_Task_m64278_gshared (TaskCompletionSource_1_t8904 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m64278(__this, method) (( Task_1_t1580 * (*) (TaskCompletionSource_1_t8904 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m64278_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m64279_gshared (TaskCompletionSource_1_t8904 * __this, Task_1_t1580 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m64279(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8904 *, Task_1_t1580 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m64279_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m64280_gshared (TaskCompletionSource_1_t8904 * __this, float ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m64280(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8904 *, float, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m64280_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m64281_gshared (TaskCompletionSource_1_t8904 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64281(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8904 *, AggregateException_t1359 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64281_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m64282_gshared (TaskCompletionSource_1_t8904 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64282(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8904 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64282_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m64283_gshared (TaskCompletionSource_1_t8904 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m64283(__this, method) (( bool (*) (TaskCompletionSource_1_t8904 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m64283_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m64284_gshared (TaskCompletionSource_1_t8904 * __this, float ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m64284(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8904 *, float, const MethodInfo*))TaskCompletionSource_1_SetResult_m64284_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m64285_gshared (TaskCompletionSource_1_t8904 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64285(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8904 *, AggregateException_t1359 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64285_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m64286_gshared (TaskCompletionSource_1_t8904 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64286(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8904 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64286_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m64287_gshared (TaskCompletionSource_1_t8904 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m64287(__this, method) (( void (*) (TaskCompletionSource_1_t8904 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m64287_gshared)(__this, method)
