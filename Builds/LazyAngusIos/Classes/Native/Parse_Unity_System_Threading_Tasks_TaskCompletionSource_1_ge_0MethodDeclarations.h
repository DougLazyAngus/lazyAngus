#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t1277;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1340;
// System.Object
struct Object_t;
// System.AggregateException
struct AggregateException_t1285;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m7029_gshared (TaskCompletionSource_1_t1277 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m7029(__this, method) (( void (*) (TaskCompletionSource_1_t1277 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7029_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
extern "C" Task_1_t1340 * TaskCompletionSource_1_get_Task_m7031_gshared (TaskCompletionSource_1_t1277 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m7031(__this, method) (( Task_1_t1340 * (*) (TaskCompletionSource_1_t1277 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7031_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m29870_gshared (TaskCompletionSource_1_t1277 * __this, Task_1_t1340 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m29870(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1277 *, Task_1_t1340 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m29870_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m29871_gshared (TaskCompletionSource_1_t1277 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m29871(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1277 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m29871_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m29872_gshared (TaskCompletionSource_1_t1277 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m29872(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1277 *, AggregateException_t1285 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29872_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m29873_gshared (TaskCompletionSource_1_t1277 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m29873(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1277 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29873_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m29874_gshared (TaskCompletionSource_1_t1277 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m29874(__this, method) (( bool (*) (TaskCompletionSource_1_t1277 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m29874_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m7473_gshared (TaskCompletionSource_1_t1277 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m7473(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1277 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7473_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m29875_gshared (TaskCompletionSource_1_t1277 * __this, AggregateException_t1285 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m29875(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1277 *, AggregateException_t1285 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29875_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m29876_gshared (TaskCompletionSource_1_t1277 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m29876(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1277 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29876_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m7030_gshared (TaskCompletionSource_1_t1277 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m7030(__this, method) (( void (*) (TaskCompletionSource_1_t1277 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7030_gshared)(__this, method)
