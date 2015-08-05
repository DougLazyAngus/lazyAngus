#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>
struct TaskCompletionSource_1_t8197;
// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t1504;
// System.AggregateException
struct AggregateException_t1289;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58568_gshared (TaskCompletionSource_1_t8197 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58568(__this, method) (( void (*) (TaskCompletionSource_1_t8197 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58568_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::get_Task()
extern "C" Task_1_t1504 * TaskCompletionSource_1_get_Task_m58569_gshared (TaskCompletionSource_1_t8197 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58569(__this, method) (( Task_1_t1504 * (*) (TaskCompletionSource_1_t8197 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58569_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58570_gshared (TaskCompletionSource_1_t8197 * __this, Task_1_t1504 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58570(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8197 *, Task_1_t1504 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58570_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58571_gshared (TaskCompletionSource_1_t8197 * __this, uint16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58571(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8197 *, uint16_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58571_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58572_gshared (TaskCompletionSource_1_t8197 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58572(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8197 *, AggregateException_t1289 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58572_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58573_gshared (TaskCompletionSource_1_t8197 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58573(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8197 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58573_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58574_gshared (TaskCompletionSource_1_t8197 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58574(__this, method) (( bool (*) (TaskCompletionSource_1_t8197 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58574_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58575_gshared (TaskCompletionSource_1_t8197 * __this, uint16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58575(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8197 *, uint16_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m58575_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58576_gshared (TaskCompletionSource_1_t8197 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58576(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8197 *, AggregateException_t1289 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58576_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58577_gshared (TaskCompletionSource_1_t8197 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58577(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8197 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58577_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58578_gshared (TaskCompletionSource_1_t8197 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58578(__this, method) (( void (*) (TaskCompletionSource_1_t8197 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58578_gshared)(__this, method)
