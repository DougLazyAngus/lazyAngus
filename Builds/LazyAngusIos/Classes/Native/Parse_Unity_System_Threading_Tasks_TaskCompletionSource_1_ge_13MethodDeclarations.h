#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Single>
struct TaskCompletionSource_1_t8255;
// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t1508;
// System.AggregateException
struct AggregateException_t1287;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58853_gshared (TaskCompletionSource_1_t8255 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58853(__this, method) (( void (*) (TaskCompletionSource_1_t8255 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58853_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Single>::get_Task()
extern "C" Task_1_t1508 * TaskCompletionSource_1_get_Task_m58854_gshared (TaskCompletionSource_1_t8255 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58854(__this, method) (( Task_1_t1508 * (*) (TaskCompletionSource_1_t8255 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58854_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58855_gshared (TaskCompletionSource_1_t8255 * __this, Task_1_t1508 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58855(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8255 *, Task_1_t1508 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58855_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58856_gshared (TaskCompletionSource_1_t8255 * __this, float ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58856(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8255 *, float, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58856_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58857_gshared (TaskCompletionSource_1_t8255 * __this, AggregateException_t1287 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58857(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8255 *, AggregateException_t1287 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58857_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58858_gshared (TaskCompletionSource_1_t8255 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58858(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8255 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58858_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58859_gshared (TaskCompletionSource_1_t8255 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58859(__this, method) (( bool (*) (TaskCompletionSource_1_t8255 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58859_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58860_gshared (TaskCompletionSource_1_t8255 * __this, float ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58860(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8255 *, float, const MethodInfo*))TaskCompletionSource_1_SetResult_m58860_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58861_gshared (TaskCompletionSource_1_t8255 * __this, AggregateException_t1287 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58861(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8255 *, AggregateException_t1287 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58861_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58862_gshared (TaskCompletionSource_1_t8255 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58862(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8255 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58862_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58863_gshared (TaskCompletionSource_1_t8255 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58863(__this, method) (( void (*) (TaskCompletionSource_1_t8255 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58863_gshared)(__this, method)
