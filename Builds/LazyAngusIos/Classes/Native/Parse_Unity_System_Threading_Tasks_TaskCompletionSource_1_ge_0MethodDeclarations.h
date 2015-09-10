#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t1358;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1421;
// System.Object
struct Object_t;
// System.AggregateException
struct AggregateException_t1366;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m7529_gshared (TaskCompletionSource_1_t1358 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m7529(__this, method) (( void (*) (TaskCompletionSource_1_t1358 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7529_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
extern "C" Task_1_t1421 * TaskCompletionSource_1_get_Task_m7531_gshared (TaskCompletionSource_1_t1358 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m7531(__this, method) (( Task_1_t1421 * (*) (TaskCompletionSource_1_t1358 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7531_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m35335_gshared (TaskCompletionSource_1_t1358 * __this, Task_1_t1421 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m35335(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1358 *, Task_1_t1421 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m35335_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m35336_gshared (TaskCompletionSource_1_t1358 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m35336(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1358 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m35336_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m35337_gshared (TaskCompletionSource_1_t1358 * __this, AggregateException_t1366 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m35337(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1358 *, AggregateException_t1366 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35337_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m35338_gshared (TaskCompletionSource_1_t1358 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m35338(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1358 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35338_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m35339_gshared (TaskCompletionSource_1_t1358 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m35339(__this, method) (( bool (*) (TaskCompletionSource_1_t1358 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m35339_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m7973_gshared (TaskCompletionSource_1_t1358 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m7973(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1358 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7973_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m35340_gshared (TaskCompletionSource_1_t1358 * __this, AggregateException_t1366 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m35340(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1358 *, AggregateException_t1366 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35340_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m35341_gshared (TaskCompletionSource_1_t1358 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m35341(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1358 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35341_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m7530_gshared (TaskCompletionSource_1_t1358 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m7530(__this, method) (( void (*) (TaskCompletionSource_1_t1358 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7530_gshared)(__this, method)
