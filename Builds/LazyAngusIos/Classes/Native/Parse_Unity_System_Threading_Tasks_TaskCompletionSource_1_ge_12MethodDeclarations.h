#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Double>
struct TaskCompletionSource_1_t8892;
// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1579;
// System.AggregateException
struct AggregateException_t1359;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m64219_gshared (TaskCompletionSource_1_t8892 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m64219(__this, method) (( void (*) (TaskCompletionSource_1_t8892 *, const MethodInfo*))TaskCompletionSource_1__ctor_m64219_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Double>::get_Task()
extern "C" Task_1_t1579 * TaskCompletionSource_1_get_Task_m64220_gshared (TaskCompletionSource_1_t8892 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m64220(__this, method) (( Task_1_t1579 * (*) (TaskCompletionSource_1_t8892 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m64220_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m64221_gshared (TaskCompletionSource_1_t8892 * __this, Task_1_t1579 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m64221(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8892 *, Task_1_t1579 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m64221_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m64222_gshared (TaskCompletionSource_1_t8892 * __this, double ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m64222(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8892 *, double, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m64222_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m64223_gshared (TaskCompletionSource_1_t8892 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64223(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8892 *, AggregateException_t1359 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64223_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m64224_gshared (TaskCompletionSource_1_t8892 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64224(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8892 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64224_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m64225_gshared (TaskCompletionSource_1_t8892 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m64225(__this, method) (( bool (*) (TaskCompletionSource_1_t8892 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m64225_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m64226_gshared (TaskCompletionSource_1_t8892 * __this, double ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m64226(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8892 *, double, const MethodInfo*))TaskCompletionSource_1_SetResult_m64226_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m64227_gshared (TaskCompletionSource_1_t8892 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64227(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8892 *, AggregateException_t1359 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64227_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m64228_gshared (TaskCompletionSource_1_t8892 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64228(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8892 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64228_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m64229_gshared (TaskCompletionSource_1_t8892 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m64229(__this, method) (( void (*) (TaskCompletionSource_1_t8892 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m64229_gshared)(__this, method)
