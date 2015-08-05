#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>
struct TaskCompletionSource_1_t1312;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>
struct Task_1_t1365;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1292;
// System.AggregateException
struct AggregateException_t1288;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m7585(__this, method) (( void (*) (TaskCompletionSource_1_t1312 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7049_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::get_Task()
#define TaskCompletionSource_1_get_Task_m7586(__this, method) (( Task_1_t1365 * (*) (TaskCompletionSource_1_t1312 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7051_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m59290(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1312 *, Task_1_t1365 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m29893_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m7582(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1312 *, TaskU5BU5D_t1292*, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m29894_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m59291(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1312 *, AggregateException_t1288 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29895_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m59292(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1312 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29896_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m59293(__this, method) (( bool (*) (TaskCompletionSource_1_t1312 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m29897_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m59294(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1312 *, TaskU5BU5D_t1292*, const MethodInfo*))TaskCompletionSource_1_SetResult_m7493_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m59295(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1312 *, AggregateException_t1288 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29898_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m59296(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1312 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29899_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m59297(__this, method) (( void (*) (TaskCompletionSource_1_t1312 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7050_gshared)(__this, method)
