#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int64>
struct TaskCompletionSource_1_t8863;
// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1573;
// System.AggregateException
struct AggregateException_t1356;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m64084_gshared (TaskCompletionSource_1_t8863 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m64084(__this, method) (( void (*) (TaskCompletionSource_1_t8863 *, const MethodInfo*))TaskCompletionSource_1__ctor_m64084_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::get_Task()
extern "C" Task_1_t1573 * TaskCompletionSource_1_get_Task_m64085_gshared (TaskCompletionSource_1_t8863 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m64085(__this, method) (( Task_1_t1573 * (*) (TaskCompletionSource_1_t8863 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m64085_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m64086_gshared (TaskCompletionSource_1_t8863 * __this, Task_1_t1573 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m64086(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8863 *, Task_1_t1573 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m64086_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m64087_gshared (TaskCompletionSource_1_t8863 * __this, int64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m64087(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8863 *, int64_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m64087_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m64088_gshared (TaskCompletionSource_1_t8863 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64088(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8863 *, AggregateException_t1356 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64088_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m64089_gshared (TaskCompletionSource_1_t8863 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64089(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8863 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64089_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m64090_gshared (TaskCompletionSource_1_t8863 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m64090(__this, method) (( bool (*) (TaskCompletionSource_1_t8863 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m64090_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m64091_gshared (TaskCompletionSource_1_t8863 * __this, int64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m64091(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8863 *, int64_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m64091_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m64092_gshared (TaskCompletionSource_1_t8863 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64092(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8863 *, AggregateException_t1356 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64092_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m64093_gshared (TaskCompletionSource_1_t8863 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64093(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8863 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64093_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m64094_gshared (TaskCompletionSource_1_t8863 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m64094(__this, method) (( void (*) (TaskCompletionSource_1_t8863 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m64094_gshared)(__this, method)
