#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t1280;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1343;
// System.Object
struct Object_t;
// System.AggregateException
struct AggregateException_t1288;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m7049_gshared (TaskCompletionSource_1_t1280 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m7049(__this, method) (( void (*) (TaskCompletionSource_1_t1280 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7049_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
extern "C" Task_1_t1343 * TaskCompletionSource_1_get_Task_m7051_gshared (TaskCompletionSource_1_t1280 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m7051(__this, method) (( Task_1_t1343 * (*) (TaskCompletionSource_1_t1280 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7051_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m29893_gshared (TaskCompletionSource_1_t1280 * __this, Task_1_t1343 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m29893(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1280 *, Task_1_t1343 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m29893_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m29894_gshared (TaskCompletionSource_1_t1280 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m29894(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1280 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m29894_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m29895_gshared (TaskCompletionSource_1_t1280 * __this, AggregateException_t1288 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m29895(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1280 *, AggregateException_t1288 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29895_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m29896_gshared (TaskCompletionSource_1_t1280 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m29896(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1280 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29896_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m29897_gshared (TaskCompletionSource_1_t1280 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m29897(__this, method) (( bool (*) (TaskCompletionSource_1_t1280 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m29897_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m7493_gshared (TaskCompletionSource_1_t1280 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m7493(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1280 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7493_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m29898_gshared (TaskCompletionSource_1_t1280 * __this, AggregateException_t1288 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m29898(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1280 *, AggregateException_t1288 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29898_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m29899_gshared (TaskCompletionSource_1_t1280 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m29899(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1280 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29899_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m7050_gshared (TaskCompletionSource_1_t1280 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m7050(__this, method) (( void (*) (TaskCompletionSource_1_t1280 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7050_gshared)(__this, method)
