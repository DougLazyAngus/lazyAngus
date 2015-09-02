#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.SByte>
struct TaskCompletionSource_1_t8279;
// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1568;
// System.AggregateException
struct AggregateException_t1355;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59577_gshared (TaskCompletionSource_1_t8279 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59577(__this, method) (( void (*) (TaskCompletionSource_1_t8279 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59577_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::get_Task()
extern "C" Task_1_t1568 * TaskCompletionSource_1_get_Task_m59578_gshared (TaskCompletionSource_1_t8279 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59578(__this, method) (( Task_1_t1568 * (*) (TaskCompletionSource_1_t8279 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59578_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59579_gshared (TaskCompletionSource_1_t8279 * __this, Task_1_t1568 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59579(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8279 *, Task_1_t1568 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59579_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59580_gshared (TaskCompletionSource_1_t8279 * __this, int8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59580(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8279 *, int8_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59580_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59581_gshared (TaskCompletionSource_1_t8279 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59581(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8279 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59581_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59582_gshared (TaskCompletionSource_1_t8279 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59582(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8279 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59582_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59583_gshared (TaskCompletionSource_1_t8279 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59583(__this, method) (( bool (*) (TaskCompletionSource_1_t8279 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59583_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59584_gshared (TaskCompletionSource_1_t8279 * __this, int8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59584(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8279 *, int8_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m59584_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59585_gshared (TaskCompletionSource_1_t8279 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59585(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8279 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59585_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59586_gshared (TaskCompletionSource_1_t8279 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59586(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8279 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59586_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m59587_gshared (TaskCompletionSource_1_t8279 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m59587(__this, method) (( void (*) (TaskCompletionSource_1_t8279 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m59587_gshared)(__this, method)
