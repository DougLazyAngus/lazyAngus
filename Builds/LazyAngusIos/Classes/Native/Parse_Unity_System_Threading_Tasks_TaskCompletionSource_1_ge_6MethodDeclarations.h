#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.SByte>
struct TaskCompletionSource_1_t8161;
// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1491;
// System.AggregateException
struct AggregateException_t1278;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58377_gshared (TaskCompletionSource_1_t8161 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58377(__this, method) (( void (*) (TaskCompletionSource_1_t8161 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58377_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::get_Task()
extern "C" Task_1_t1491 * TaskCompletionSource_1_get_Task_m58378_gshared (TaskCompletionSource_1_t8161 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58378(__this, method) (( Task_1_t1491 * (*) (TaskCompletionSource_1_t8161 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58378_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58379_gshared (TaskCompletionSource_1_t8161 * __this, Task_1_t1491 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58379(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8161 *, Task_1_t1491 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58379_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58380_gshared (TaskCompletionSource_1_t8161 * __this, int8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58380(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8161 *, int8_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58380_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58381_gshared (TaskCompletionSource_1_t8161 * __this, AggregateException_t1278 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58381(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8161 *, AggregateException_t1278 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58381_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58382_gshared (TaskCompletionSource_1_t8161 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58382(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8161 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58382_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58383_gshared (TaskCompletionSource_1_t8161 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58383(__this, method) (( bool (*) (TaskCompletionSource_1_t8161 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58383_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58384_gshared (TaskCompletionSource_1_t8161 * __this, int8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58384(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8161 *, int8_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m58384_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58385_gshared (TaskCompletionSource_1_t8161 * __this, AggregateException_t1278 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58385(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8161 *, AggregateException_t1278 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58385_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58386_gshared (TaskCompletionSource_1_t8161 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58386(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8161 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58386_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58387_gshared (TaskCompletionSource_1_t8161 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58387(__this, method) (( void (*) (TaskCompletionSource_1_t8161 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58387_gshared)(__this, method)
