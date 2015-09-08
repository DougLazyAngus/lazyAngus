#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>
struct TaskCompletionSource_1_t1383;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>
struct Task_1_t1436;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1363;
// System.AggregateException
struct AggregateException_t1359;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m8006(__this, method) (( void (*) (TaskCompletionSource_1_t1383 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7471_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::get_Task()
#define TaskCompletionSource_1_get_Task_m8007(__this, method) (( Task_1_t1436 * (*) (TaskCompletionSource_1_t1383 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7473_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m64708(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1383 *, Task_1_t1436 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m35278_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m8003(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1383 *, TaskU5BU5D_t1363*, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m35279_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m64709(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1383 *, AggregateException_t1359 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35280_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m64710(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1383 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35281_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m64711(__this, method) (( bool (*) (TaskCompletionSource_1_t1383 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m35282_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m64712(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1383 *, TaskU5BU5D_t1363*, const MethodInfo*))TaskCompletionSource_1_SetResult_m7915_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m64713(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1383 *, AggregateException_t1359 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35283_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m64714(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1383 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35284_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m64715(__this, method) (( void (*) (TaskCompletionSource_1_t1383 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7472_gshared)(__this, method)
