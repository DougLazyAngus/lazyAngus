#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>
struct TaskCompletionSource_1_t8233;
// System.Threading.Tasks.Task`1<System.UInt64>
struct Task_1_t1507;
// System.AggregateException
struct AggregateException_t1289;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58745_gshared (TaskCompletionSource_1_t8233 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58745(__this, method) (( void (*) (TaskCompletionSource_1_t8233 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58745_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::get_Task()
extern "C" Task_1_t1507 * TaskCompletionSource_1_get_Task_m58746_gshared (TaskCompletionSource_1_t8233 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58746(__this, method) (( Task_1_t1507 * (*) (TaskCompletionSource_1_t8233 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58746_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58747_gshared (TaskCompletionSource_1_t8233 * __this, Task_1_t1507 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58747(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8233 *, Task_1_t1507 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58747_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58748_gshared (TaskCompletionSource_1_t8233 * __this, uint64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58748(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8233 *, uint64_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58748_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58749_gshared (TaskCompletionSource_1_t8233 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58749(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8233 *, AggregateException_t1289 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58749_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58750_gshared (TaskCompletionSource_1_t8233 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58750(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8233 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58750_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58751_gshared (TaskCompletionSource_1_t8233 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58751(__this, method) (( bool (*) (TaskCompletionSource_1_t8233 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58751_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58752_gshared (TaskCompletionSource_1_t8233 * __this, uint64_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58752(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8233 *, uint64_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m58752_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58753_gshared (TaskCompletionSource_1_t8233 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58753(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8233 *, AggregateException_t1289 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58753_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58754_gshared (TaskCompletionSource_1_t8233 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58754(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8233 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58754_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt64>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58755_gshared (TaskCompletionSource_1_t8233 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58755(__this, method) (( void (*) (TaskCompletionSource_1_t8233 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58755_gshared)(__this, method)
