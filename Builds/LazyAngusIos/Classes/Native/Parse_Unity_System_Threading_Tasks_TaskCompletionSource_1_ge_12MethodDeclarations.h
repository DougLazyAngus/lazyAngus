#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Double>
struct TaskCompletionSource_1_t8887;
// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1576;
// System.AggregateException
struct AggregateException_t1356;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m64207_gshared (TaskCompletionSource_1_t8887 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m64207(__this, method) (( void (*) (TaskCompletionSource_1_t8887 *, const MethodInfo*))TaskCompletionSource_1__ctor_m64207_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Double>::get_Task()
extern "C" Task_1_t1576 * TaskCompletionSource_1_get_Task_m64208_gshared (TaskCompletionSource_1_t8887 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m64208(__this, method) (( Task_1_t1576 * (*) (TaskCompletionSource_1_t8887 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m64208_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m64209_gshared (TaskCompletionSource_1_t8887 * __this, Task_1_t1576 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m64209(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8887 *, Task_1_t1576 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m64209_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m64210_gshared (TaskCompletionSource_1_t8887 * __this, double ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m64210(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8887 *, double, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m64210_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m64211_gshared (TaskCompletionSource_1_t8887 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64211(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8887 *, AggregateException_t1356 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64211_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m64212_gshared (TaskCompletionSource_1_t8887 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64212(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8887 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64212_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Double>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m64213_gshared (TaskCompletionSource_1_t8887 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m64213(__this, method) (( bool (*) (TaskCompletionSource_1_t8887 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m64213_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m64214_gshared (TaskCompletionSource_1_t8887 * __this, double ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m64214(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8887 *, double, const MethodInfo*))TaskCompletionSource_1_SetResult_m64214_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m64215_gshared (TaskCompletionSource_1_t8887 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64215(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8887 *, AggregateException_t1356 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64215_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m64216_gshared (TaskCompletionSource_1_t8887 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64216(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8887 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64216_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Double>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m64217_gshared (TaskCompletionSource_1_t8887 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m64217(__this, method) (( void (*) (TaskCompletionSource_1_t8887 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m64217_gshared)(__this, method)
