#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>
struct TaskCompletionSource_1_t8875;
// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t1574;
// System.AggregateException
struct AggregateException_t1356;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m64142_gshared (TaskCompletionSource_1_t8875 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m64142(__this, method) (( void (*) (TaskCompletionSource_1_t8875 *, const MethodInfo*))TaskCompletionSource_1__ctor_m64142_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::get_Task()
extern "C" Task_1_t1574 * TaskCompletionSource_1_get_Task_m64143_gshared (TaskCompletionSource_1_t8875 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m64143(__this, method) (( Task_1_t1574 * (*) (TaskCompletionSource_1_t8875 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m64143_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m64144_gshared (TaskCompletionSource_1_t8875 * __this, Task_1_t1574 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m64144(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8875 *, Task_1_t1574 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m64144_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m64145_gshared (TaskCompletionSource_1_t8875 * __this, uint64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m64145(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8875 *, uint64_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m64145_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m64146_gshared (TaskCompletionSource_1_t8875 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64146(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8875 *, AggregateException_t1356 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64146_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m64147_gshared (TaskCompletionSource_1_t8875 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64147(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8875 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64147_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m64148_gshared (TaskCompletionSource_1_t8875 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m64148(__this, method) (( bool (*) (TaskCompletionSource_1_t8875 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m64148_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m64149_gshared (TaskCompletionSource_1_t8875 * __this, uint64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m64149(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8875 *, uint64_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m64149_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m64150_gshared (TaskCompletionSource_1_t8875 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64150(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8875 *, AggregateException_t1356 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64150_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m64151_gshared (TaskCompletionSource_1_t8875 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64151(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8875 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64151_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m64152_gshared (TaskCompletionSource_1_t8875 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m64152(__this, method) (( void (*) (TaskCompletionSource_1_t8875 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m64152_gshared)(__this, method)
