#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
struct TaskCompletionSource_1_t1292;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1319;
// System.AggregateException
struct AggregateException_t1287;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m7037_gshared (TaskCompletionSource_1_t1292 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m7037(__this, method) (( void (*) (TaskCompletionSource_1_t1292 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7037_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::get_Task()
extern "C" Task_1_t1319 * TaskCompletionSource_1_get_Task_m7039_gshared (TaskCompletionSource_1_t1292 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m7039(__this, method) (( Task_1_t1319 * (*) (TaskCompletionSource_1_t1292 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7039_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m29940_gshared (TaskCompletionSource_1_t1292 * __this, Task_1_t1319 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m29940(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1292 *, Task_1_t1319 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m29940_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m7548_gshared (TaskCompletionSource_1_t1292 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m7548(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1292 *, int32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m7548_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m7569_gshared (TaskCompletionSource_1_t1292 * __this, AggregateException_t1287 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m7569(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1292 *, AggregateException_t1287 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m7569_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m29941_gshared (TaskCompletionSource_1_t1292 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m29941(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1292 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29941_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m7570_gshared (TaskCompletionSource_1_t1292 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m7570(__this, method) (( bool (*) (TaskCompletionSource_1_t1292 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m7570_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m7546_gshared (TaskCompletionSource_1_t1292 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m7546(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1292 *, int32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m7546_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m7545_gshared (TaskCompletionSource_1_t1292 * __this, AggregateException_t1287 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m7545(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1292 *, AggregateException_t1287 *, const MethodInfo*))TaskCompletionSource_1_SetException_m7545_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m29942_gshared (TaskCompletionSource_1_t1292 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m29942(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1292 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29942_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m7038_gshared (TaskCompletionSource_1_t1292 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m7038(__this, method) (( void (*) (TaskCompletionSource_1_t1292 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7038_gshared)(__this, method)
