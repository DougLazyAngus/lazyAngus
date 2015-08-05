#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t1281;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1344;
// System.Object
struct Object_t;
// System.AggregateException
struct AggregateException_t1289;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m7054_gshared (TaskCompletionSource_1_t1281 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m7054(__this, method) (( void (*) (TaskCompletionSource_1_t1281 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7054_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
extern "C" Task_1_t1344 * TaskCompletionSource_1_get_Task_m7056_gshared (TaskCompletionSource_1_t1281 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m7056(__this, method) (( Task_1_t1344 * (*) (TaskCompletionSource_1_t1281 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7056_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m29898_gshared (TaskCompletionSource_1_t1281 * __this, Task_1_t1344 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m29898(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1281 *, Task_1_t1344 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m29898_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m29899_gshared (TaskCompletionSource_1_t1281 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m29899(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1281 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m29899_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m29900_gshared (TaskCompletionSource_1_t1281 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m29900(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1281 *, AggregateException_t1289 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29900_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m29901_gshared (TaskCompletionSource_1_t1281 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m29901(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1281 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29901_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m29902_gshared (TaskCompletionSource_1_t1281 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m29902(__this, method) (( bool (*) (TaskCompletionSource_1_t1281 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m29902_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m7498_gshared (TaskCompletionSource_1_t1281 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m7498(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1281 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7498_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m29903_gshared (TaskCompletionSource_1_t1281 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m29903(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1281 *, AggregateException_t1289 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29903_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m29904_gshared (TaskCompletionSource_1_t1281 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m29904(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1281 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29904_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m7055_gshared (TaskCompletionSource_1_t1281 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m7055(__this, method) (( void (*) (TaskCompletionSource_1_t1281 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7055_gshared)(__this, method)
