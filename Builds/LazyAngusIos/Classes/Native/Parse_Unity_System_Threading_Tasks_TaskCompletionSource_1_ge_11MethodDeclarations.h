#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>
struct TaskCompletionSource_1_t8887;
// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t1584;
// System.AggregateException
struct AggregateException_t1366;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m64211_gshared (TaskCompletionSource_1_t8887 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m64211(__this, method) (( void (*) (TaskCompletionSource_1_t8887 *, const MethodInfo*))TaskCompletionSource_1__ctor_m64211_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::get_Task()
extern "C" Task_1_t1584 * TaskCompletionSource_1_get_Task_m64212_gshared (TaskCompletionSource_1_t8887 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m64212(__this, method) (( Task_1_t1584 * (*) (TaskCompletionSource_1_t8887 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m64212_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m64213_gshared (TaskCompletionSource_1_t8887 * __this, Task_1_t1584 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m64213(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8887 *, Task_1_t1584 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m64213_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m64214_gshared (TaskCompletionSource_1_t8887 * __this, uint64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m64214(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8887 *, uint64_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m64214_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m64215_gshared (TaskCompletionSource_1_t8887 * __this, AggregateException_t1366 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64215(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8887 *, AggregateException_t1366 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64215_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m64216_gshared (TaskCompletionSource_1_t8887 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64216(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8887 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64216_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m64217_gshared (TaskCompletionSource_1_t8887 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m64217(__this, method) (( bool (*) (TaskCompletionSource_1_t8887 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m64217_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m64218_gshared (TaskCompletionSource_1_t8887 * __this, uint64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m64218(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8887 *, uint64_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m64218_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m64219_gshared (TaskCompletionSource_1_t8887 * __this, AggregateException_t1366 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64219(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8887 *, AggregateException_t1366 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64219_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m64220_gshared (TaskCompletionSource_1_t8887 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64220(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8887 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64220_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m64221_gshared (TaskCompletionSource_1_t8887 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m64221(__this, method) (( void (*) (TaskCompletionSource_1_t8887 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m64221_gshared)(__this, method)
