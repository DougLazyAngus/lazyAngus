#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>
struct TaskCompletionSource_1_t8267;
// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t1553;
// System.AggregateException
struct AggregateException_t1338;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59237_gshared (TaskCompletionSource_1_t8267 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59237(__this, method) (( void (*) (TaskCompletionSource_1_t8267 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59237_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::get_Task()
extern "C" Task_1_t1553 * TaskCompletionSource_1_get_Task_m59238_gshared (TaskCompletionSource_1_t8267 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59238(__this, method) (( Task_1_t1553 * (*) (TaskCompletionSource_1_t8267 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59238_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59239_gshared (TaskCompletionSource_1_t8267 * __this, Task_1_t1553 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59239(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8267 *, Task_1_t1553 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59239_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59240_gshared (TaskCompletionSource_1_t8267 * __this, uint16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59240(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8267 *, uint16_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59240_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59241_gshared (TaskCompletionSource_1_t8267 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59241(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8267 *, AggregateException_t1338 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59241_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59242_gshared (TaskCompletionSource_1_t8267 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59242(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8267 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59242_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59243_gshared (TaskCompletionSource_1_t8267 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59243(__this, method) (( bool (*) (TaskCompletionSource_1_t8267 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59243_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59244_gshared (TaskCompletionSource_1_t8267 * __this, uint16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59244(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8267 *, uint16_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m59244_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59245_gshared (TaskCompletionSource_1_t8267 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59245(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8267 *, AggregateException_t1338 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59245_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59246_gshared (TaskCompletionSource_1_t8267 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59246(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8267 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59246_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m59247_gshared (TaskCompletionSource_1_t8267 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m59247(__this, method) (( void (*) (TaskCompletionSource_1_t8267 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m59247_gshared)(__this, method)
