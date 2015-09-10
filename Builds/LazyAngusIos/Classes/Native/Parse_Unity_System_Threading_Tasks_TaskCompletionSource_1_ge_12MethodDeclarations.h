#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Double>
struct TaskCompletionSource_1_t8899;
// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1586;
// System.AggregateException
struct AggregateException_t1366;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m64276_gshared (TaskCompletionSource_1_t8899 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m64276(__this, method) (( void (*) (TaskCompletionSource_1_t8899 *, const MethodInfo*))TaskCompletionSource_1__ctor_m64276_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Double>::get_Task()
extern "C" Task_1_t1586 * TaskCompletionSource_1_get_Task_m64277_gshared (TaskCompletionSource_1_t8899 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m64277(__this, method) (( Task_1_t1586 * (*) (TaskCompletionSource_1_t8899 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m64277_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m64278_gshared (TaskCompletionSource_1_t8899 * __this, Task_1_t1586 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m64278(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8899 *, Task_1_t1586 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m64278_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m64279_gshared (TaskCompletionSource_1_t8899 * __this, double ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m64279(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8899 *, double, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m64279_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m64280_gshared (TaskCompletionSource_1_t8899 * __this, AggregateException_t1366 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64280(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8899 *, AggregateException_t1366 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64280_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m64281_gshared (TaskCompletionSource_1_t8899 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64281(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8899 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64281_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m64282_gshared (TaskCompletionSource_1_t8899 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m64282(__this, method) (( bool (*) (TaskCompletionSource_1_t8899 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m64282_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m64283_gshared (TaskCompletionSource_1_t8899 * __this, double ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m64283(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8899 *, double, const MethodInfo*))TaskCompletionSource_1_SetResult_m64283_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m64284_gshared (TaskCompletionSource_1_t8899 * __this, AggregateException_t1366 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64284(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8899 *, AggregateException_t1366 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64284_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m64285_gshared (TaskCompletionSource_1_t8899 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64285(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8899 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64285_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m64286_gshared (TaskCompletionSource_1_t8899 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m64286(__this, method) (( void (*) (TaskCompletionSource_1_t8899 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m64286_gshared)(__this, method)
