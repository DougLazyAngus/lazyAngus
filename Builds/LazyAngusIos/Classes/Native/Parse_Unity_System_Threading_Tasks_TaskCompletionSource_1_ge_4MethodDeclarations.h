#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>
struct TaskCompletionSource_1_t1309;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>
struct Task_1_t1362;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1289;
// System.AggregateException
struct AggregateException_t1285;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m7565(__this, method) (( void (*) (TaskCompletionSource_1_t1309 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7029_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::get_Task()
#define TaskCompletionSource_1_get_Task_m7566(__this, method) (( Task_1_t1362 * (*) (TaskCompletionSource_1_t1309 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7031_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m59267(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1309 *, Task_1_t1362 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m29870_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m7562(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1309 *, TaskU5BU5D_t1289*, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m29871_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m59268(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1309 *, AggregateException_t1285 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29872_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m59269(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1309 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29873_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m59270(__this, method) (( bool (*) (TaskCompletionSource_1_t1309 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m29874_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m59271(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1309 *, TaskU5BU5D_t1289*, const MethodInfo*))TaskCompletionSource_1_SetResult_m7473_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m59272(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1309 *, AggregateException_t1285 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29875_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m59273(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1309 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29876_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m59274(__this, method) (( void (*) (TaskCompletionSource_1_t1309 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7030_gshared)(__this, method)
