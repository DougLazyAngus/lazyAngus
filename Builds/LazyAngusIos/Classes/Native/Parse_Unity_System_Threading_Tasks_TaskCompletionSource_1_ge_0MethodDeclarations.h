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
extern "C" void TaskCompletionSource_1__ctor_m7458_gshared (TaskCompletionSource_1_t1347 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m7458(__this, method) (( void (*) (TaskCompletionSource_1_t1347 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7458_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
extern "C" Task_1_t1410 * TaskCompletionSource_1_get_Task_m7460_gshared (TaskCompletionSource_1_t1347 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m7460(__this, method) (( Task_1_t1410 * (*) (TaskCompletionSource_1_t1347 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7460_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m35253_gshared (TaskCompletionSource_1_t1347 * __this, Task_1_t1410 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m35253(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1347 *, Task_1_t1410 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m35253_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m35254_gshared (TaskCompletionSource_1_t1347 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m35254(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1347 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m35254_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m35255_gshared (TaskCompletionSource_1_t1347 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m35255(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1347 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35255_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m35256_gshared (TaskCompletionSource_1_t1347 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m35256(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1347 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35256_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m35257_gshared (TaskCompletionSource_1_t1347 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m35257(__this, method) (( bool (*) (TaskCompletionSource_1_t1347 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m35257_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m7902_gshared (TaskCompletionSource_1_t1347 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m7902(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1347 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7902_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m35258_gshared (TaskCompletionSource_1_t1347 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m35258(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1347 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35258_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m35259_gshared (TaskCompletionSource_1_t1347 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m35259(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1347 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35259_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m7459_gshared (TaskCompletionSource_1_t1347 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m7459(__this, method) (( void (*) (TaskCompletionSource_1_t1347 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7459_gshared)(__this, method)
