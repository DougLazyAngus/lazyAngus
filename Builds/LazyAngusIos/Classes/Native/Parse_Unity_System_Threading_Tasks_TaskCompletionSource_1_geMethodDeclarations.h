#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
struct TaskCompletionSource_1_t1293;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1320;
// System.AggregateException
struct AggregateException_t1288;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m7044_gshared (TaskCompletionSource_1_t1293 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m7044(__this, method) (( void (*) (TaskCompletionSource_1_t1293 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7044_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::get_Task()
extern "C" Task_1_t1320 * TaskCompletionSource_1_get_Task_m7046_gshared (TaskCompletionSource_1_t1293 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m7046(__this, method) (( Task_1_t1320 * (*) (TaskCompletionSource_1_t1293 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7046_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m29947_gshared (TaskCompletionSource_1_t1293 * __this, Task_1_t1320 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m29947(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1293 *, Task_1_t1320 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m29947_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m7555_gshared (TaskCompletionSource_1_t1293 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m7555(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1293 *, int32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m7555_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m7576_gshared (TaskCompletionSource_1_t1293 * __this, AggregateException_t1288 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m7576(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1293 *, AggregateException_t1288 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m7576_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m29948_gshared (TaskCompletionSource_1_t1293 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m29948(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1293 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29948_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m7577_gshared (TaskCompletionSource_1_t1293 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m7577(__this, method) (( bool (*) (TaskCompletionSource_1_t1293 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m7577_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m7553_gshared (TaskCompletionSource_1_t1293 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m7553(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1293 *, int32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m7553_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m7552_gshared (TaskCompletionSource_1_t1293 * __this, AggregateException_t1288 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m7552(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1293 *, AggregateException_t1288 *, const MethodInfo*))TaskCompletionSource_1_SetException_m7552_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m29949_gshared (TaskCompletionSource_1_t1293 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m29949(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1293 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29949_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m7045_gshared (TaskCompletionSource_1_t1293 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m7045(__this, method) (( void (*) (TaskCompletionSource_1_t1293 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7045_gshared)(__this, method)
