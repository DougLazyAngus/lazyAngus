#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Single>
struct TaskCompletionSource_1_t8899;
// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t1577;
// System.AggregateException
struct AggregateException_t1356;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m64265_gshared (TaskCompletionSource_1_t8899 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m64265(__this, method) (( void (*) (TaskCompletionSource_1_t8899 *, const MethodInfo*))TaskCompletionSource_1__ctor_m64265_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Single>::get_Task()
extern "C" Task_1_t1577 * TaskCompletionSource_1_get_Task_m64266_gshared (TaskCompletionSource_1_t8899 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m64266(__this, method) (( Task_1_t1577 * (*) (TaskCompletionSource_1_t8899 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m64266_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m64267_gshared (TaskCompletionSource_1_t8899 * __this, Task_1_t1577 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m64267(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8899 *, Task_1_t1577 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m64267_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m64268_gshared (TaskCompletionSource_1_t8899 * __this, float ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m64268(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8899 *, float, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m64268_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m64269_gshared (TaskCompletionSource_1_t8899 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64269(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8899 *, AggregateException_t1356 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64269_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m64270_gshared (TaskCompletionSource_1_t8899 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64270(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8899 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64270_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m64271_gshared (TaskCompletionSource_1_t8899 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m64271(__this, method) (( bool (*) (TaskCompletionSource_1_t8899 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m64271_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m64272_gshared (TaskCompletionSource_1_t8899 * __this, float ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m64272(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8899 *, float, const MethodInfo*))TaskCompletionSource_1_SetResult_m64272_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m64273_gshared (TaskCompletionSource_1_t8899 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64273(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8899 *, AggregateException_t1356 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64273_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m64274_gshared (TaskCompletionSource_1_t8899 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64274(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8899 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64274_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m64275_gshared (TaskCompletionSource_1_t8899 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m64275(__this, method) (( void (*) (TaskCompletionSource_1_t8899 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m64275_gshared)(__this, method)
