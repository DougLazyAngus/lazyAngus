#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t1347;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1410;
// System.Object
struct Object_t;
// System.AggregateException
struct AggregateException_t1355;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m7454_gshared (TaskCompletionSource_1_t1347 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m7454(__this, method) (( void (*) (TaskCompletionSource_1_t1347 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7454_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
extern "C" Task_1_t1410 * TaskCompletionSource_1_get_Task_m7456_gshared (TaskCompletionSource_1_t1347 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m7456(__this, method) (( Task_1_t1410 * (*) (TaskCompletionSource_1_t1347 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7456_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m31030_gshared (TaskCompletionSource_1_t1347 * __this, Task_1_t1410 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m31030(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1347 *, Task_1_t1410 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m31030_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m31031_gshared (TaskCompletionSource_1_t1347 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m31031(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1347 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m31031_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m31032_gshared (TaskCompletionSource_1_t1347 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m31032(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1347 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m31032_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m31033_gshared (TaskCompletionSource_1_t1347 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m31033(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1347 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m31033_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m31034_gshared (TaskCompletionSource_1_t1347 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m31034(__this, method) (( bool (*) (TaskCompletionSource_1_t1347 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m31034_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m7898_gshared (TaskCompletionSource_1_t1347 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m7898(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1347 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7898_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m31035_gshared (TaskCompletionSource_1_t1347 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m31035(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1347 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_SetException_m31035_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m31036_gshared (TaskCompletionSource_1_t1347 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m31036(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1347 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m31036_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m7455_gshared (TaskCompletionSource_1_t1347 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m7455(__this, method) (( void (*) (TaskCompletionSource_1_t1347 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7455_gshared)(__this, method)
