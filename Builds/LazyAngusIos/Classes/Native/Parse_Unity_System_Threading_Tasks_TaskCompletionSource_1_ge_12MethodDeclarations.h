#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Double>
struct TaskCompletionSource_1_t8351;
// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1575;
// System.AggregateException
struct AggregateException_t1355;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59932_gshared (TaskCompletionSource_1_t8351 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59932(__this, method) (( void (*) (TaskCompletionSource_1_t8351 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59932_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Double>::get_Task()
extern "C" Task_1_t1575 * TaskCompletionSource_1_get_Task_m59933_gshared (TaskCompletionSource_1_t8351 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59933(__this, method) (( Task_1_t1575 * (*) (TaskCompletionSource_1_t8351 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59933_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59934_gshared (TaskCompletionSource_1_t8351 * __this, Task_1_t1575 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59934(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8351 *, Task_1_t1575 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59934_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59935_gshared (TaskCompletionSource_1_t8351 * __this, double ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59935(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8351 *, double, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59935_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59936_gshared (TaskCompletionSource_1_t8351 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59936(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8351 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59936_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59937_gshared (TaskCompletionSource_1_t8351 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59937(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8351 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59937_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59938_gshared (TaskCompletionSource_1_t8351 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59938(__this, method) (( bool (*) (TaskCompletionSource_1_t8351 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59938_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59939_gshared (TaskCompletionSource_1_t8351 * __this, double ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59939(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8351 *, double, const MethodInfo*))TaskCompletionSource_1_SetResult_m59939_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59940_gshared (TaskCompletionSource_1_t8351 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59940(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8351 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59940_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59941_gshared (TaskCompletionSource_1_t8351 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59941(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8351 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59941_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m59942_gshared (TaskCompletionSource_1_t8351 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m59942(__this, method) (( void (*) (TaskCompletionSource_1_t8351 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m59942_gshared)(__this, method)
