#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t1351;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1414;
// System.Object
struct Object_t;
// System.AggregateException
struct AggregateException_t1359;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m7471_gshared (TaskCompletionSource_1_t1351 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m7471(__this, method) (( void (*) (TaskCompletionSource_1_t1351 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7471_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
extern "C" Task_1_t1414 * TaskCompletionSource_1_get_Task_m7473_gshared (TaskCompletionSource_1_t1351 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m7473(__this, method) (( Task_1_t1414 * (*) (TaskCompletionSource_1_t1351 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7473_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m35278_gshared (TaskCompletionSource_1_t1351 * __this, Task_1_t1414 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m35278(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1351 *, Task_1_t1414 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m35278_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m35279_gshared (TaskCompletionSource_1_t1351 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m35279(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1351 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m35279_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m35280_gshared (TaskCompletionSource_1_t1351 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m35280(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1351 *, AggregateException_t1359 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35280_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m35281_gshared (TaskCompletionSource_1_t1351 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m35281(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1351 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35281_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m35282_gshared (TaskCompletionSource_1_t1351 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m35282(__this, method) (( bool (*) (TaskCompletionSource_1_t1351 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m35282_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m7915_gshared (TaskCompletionSource_1_t1351 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m7915(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1351 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7915_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m35283_gshared (TaskCompletionSource_1_t1351 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m35283(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1351 *, AggregateException_t1359 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35283_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m35284_gshared (TaskCompletionSource_1_t1351 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m35284(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1351 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35284_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m7472_gshared (TaskCompletionSource_1_t1351 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m7472(__this, method) (( void (*) (TaskCompletionSource_1_t1351 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7472_gshared)(__this, method)
