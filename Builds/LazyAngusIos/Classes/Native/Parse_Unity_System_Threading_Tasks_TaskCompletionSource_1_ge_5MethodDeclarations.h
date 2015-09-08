#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Byte>
struct TaskCompletionSource_1_t6537;
// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1436;
// System.AggregateException
struct AggregateException_t1356;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m35381_gshared (TaskCompletionSource_1_t6537 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m35381(__this, method) (( void (*) (TaskCompletionSource_1_t6537 *, const MethodInfo*))TaskCompletionSource_1__ctor_m35381_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::get_Task()
extern "C" Task_1_t1436 * TaskCompletionSource_1_get_Task_m35382_gshared (TaskCompletionSource_1_t6537 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m35382(__this, method) (( Task_1_t1436 * (*) (TaskCompletionSource_1_t6537 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m35382_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m35383_gshared (TaskCompletionSource_1_t6537 * __this, Task_1_t1436 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m35383(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t6537 *, Task_1_t1436 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m35383_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m35384_gshared (TaskCompletionSource_1_t6537 * __this, uint8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m35384(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t6537 *, uint8_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m35384_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m35385_gshared (TaskCompletionSource_1_t6537 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m35385(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t6537 *, AggregateException_t1356 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35385_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m35386_gshared (TaskCompletionSource_1_t6537 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m35386(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t6537 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35386_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m35387_gshared (TaskCompletionSource_1_t6537 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m35387(__this, method) (( bool (*) (TaskCompletionSource_1_t6537 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m35387_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m35388_gshared (TaskCompletionSource_1_t6537 * __this, uint8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m35388(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t6537 *, uint8_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m35388_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m35389_gshared (TaskCompletionSource_1_t6537 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m35389(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t6537 *, AggregateException_t1356 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35389_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m35390_gshared (TaskCompletionSource_1_t6537 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m35390(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t6537 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35390_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m35391_gshared (TaskCompletionSource_1_t6537 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m35391(__this, method) (( void (*) (TaskCompletionSource_1_t6537 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m35391_gshared)(__this, method)
