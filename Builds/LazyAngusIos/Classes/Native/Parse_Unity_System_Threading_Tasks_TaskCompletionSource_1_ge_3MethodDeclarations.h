#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>
struct TaskCompletionSource_1_t1375;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t1385;
// System.Threading.Tasks.Task
struct Task_t1238;
// System.AggregateException
struct AggregateException_t1366;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m8044(__this, method) (( void (*) (TaskCompletionSource_1_t1375 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7529_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::get_Task()
#define TaskCompletionSource_1_get_Task_m8045(__this, method) (( Task_1_t1385 * (*) (TaskCompletionSource_1_t1375 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7531_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m64702(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1375 *, Task_1_t1385 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m35335_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m8033(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1375 *, Task_t1238 *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m35336_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m64703(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1375 *, AggregateException_t1366 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35337_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m64704(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1375 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35338_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m64705(__this, method) (( bool (*) (TaskCompletionSource_1_t1375 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m35339_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m64706(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1375 *, Task_t1238 *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7973_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m64707(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1375 *, AggregateException_t1366 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35340_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m64708(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1375 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35341_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m64709(__this, method) (( void (*) (TaskCompletionSource_1_t1375 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7530_gshared)(__this, method)
