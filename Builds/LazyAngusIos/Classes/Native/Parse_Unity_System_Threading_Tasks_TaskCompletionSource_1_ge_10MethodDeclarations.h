#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int64>
struct TaskCompletionSource_1_t8298;
// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1556;
// System.AggregateException
struct AggregateException_t1339;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59477_gshared (TaskCompletionSource_1_t8298 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59477(__this, method) (( void (*) (TaskCompletionSource_1_t8298 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59477_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::get_Task()
extern "C" Task_1_t1556 * TaskCompletionSource_1_get_Task_m59478_gshared (TaskCompletionSource_1_t8298 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59478(__this, method) (( Task_1_t1556 * (*) (TaskCompletionSource_1_t8298 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59478_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59479_gshared (TaskCompletionSource_1_t8298 * __this, Task_1_t1556 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59479(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8298 *, Task_1_t1556 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59479_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59480_gshared (TaskCompletionSource_1_t8298 * __this, int64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59480(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8298 *, int64_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59480_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59481_gshared (TaskCompletionSource_1_t8298 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59481(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8298 *, AggregateException_t1339 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59481_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59482_gshared (TaskCompletionSource_1_t8298 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59482(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8298 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59482_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59483_gshared (TaskCompletionSource_1_t8298 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59483(__this, method) (( bool (*) (TaskCompletionSource_1_t8298 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59483_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59484_gshared (TaskCompletionSource_1_t8298 * __this, int64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59484(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8298 *, int64_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m59484_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59485_gshared (TaskCompletionSource_1_t8298 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59485(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8298 *, AggregateException_t1339 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59485_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59486_gshared (TaskCompletionSource_1_t8298 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59486(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8298 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59486_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int64>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m59487_gshared (TaskCompletionSource_1_t8298 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m59487(__this, method) (( void (*) (TaskCompletionSource_1_t8298 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m59487_gshared)(__this, method)
