#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.SByte>
struct TaskCompletionSource_1_t8815;
// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1569;
// System.AggregateException
struct AggregateException_t1356;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m63852_gshared (TaskCompletionSource_1_t8815 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m63852(__this, method) (( void (*) (TaskCompletionSource_1_t8815 *, const MethodInfo*))TaskCompletionSource_1__ctor_m63852_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::get_Task()
extern "C" Task_1_t1569 * TaskCompletionSource_1_get_Task_m63853_gshared (TaskCompletionSource_1_t8815 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m63853(__this, method) (( Task_1_t1569 * (*) (TaskCompletionSource_1_t8815 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m63853_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m63854_gshared (TaskCompletionSource_1_t8815 * __this, Task_1_t1569 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m63854(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8815 *, Task_1_t1569 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m63854_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m63855_gshared (TaskCompletionSource_1_t8815 * __this, int8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m63855(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8815 *, int8_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m63855_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m63856_gshared (TaskCompletionSource_1_t8815 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m63856(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8815 *, AggregateException_t1356 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m63856_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m63857_gshared (TaskCompletionSource_1_t8815 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m63857(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8815 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m63857_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m63858_gshared (TaskCompletionSource_1_t8815 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m63858(__this, method) (( bool (*) (TaskCompletionSource_1_t8815 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m63858_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m63859_gshared (TaskCompletionSource_1_t8815 * __this, int8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m63859(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8815 *, int8_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m63859_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m63860_gshared (TaskCompletionSource_1_t8815 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m63860(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8815 *, AggregateException_t1356 *, const MethodInfo*))TaskCompletionSource_1_SetException_m63860_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m63861_gshared (TaskCompletionSource_1_t8815 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m63861(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8815 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m63861_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m63862_gshared (TaskCompletionSource_1_t8815 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m63862(__this, method) (( void (*) (TaskCompletionSource_1_t8815 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m63862_gshared)(__this, method)
