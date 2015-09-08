#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>
struct TaskCompletionSource_1_t8839;
// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t1571;
// System.AggregateException
struct AggregateException_t1356;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m63968_gshared (TaskCompletionSource_1_t8839 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m63968(__this, method) (( void (*) (TaskCompletionSource_1_t8839 *, const MethodInfo*))TaskCompletionSource_1__ctor_m63968_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::get_Task()
extern "C" Task_1_t1571 * TaskCompletionSource_1_get_Task_m63969_gshared (TaskCompletionSource_1_t8839 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m63969(__this, method) (( Task_1_t1571 * (*) (TaskCompletionSource_1_t8839 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m63969_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m63970_gshared (TaskCompletionSource_1_t8839 * __this, Task_1_t1571 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m63970(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8839 *, Task_1_t1571 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m63970_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m63971_gshared (TaskCompletionSource_1_t8839 * __this, uint16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m63971(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8839 *, uint16_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m63971_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m63972_gshared (TaskCompletionSource_1_t8839 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m63972(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8839 *, AggregateException_t1356 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m63972_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m63973_gshared (TaskCompletionSource_1_t8839 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m63973(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8839 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m63973_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m63974_gshared (TaskCompletionSource_1_t8839 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m63974(__this, method) (( bool (*) (TaskCompletionSource_1_t8839 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m63974_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m63975_gshared (TaskCompletionSource_1_t8839 * __this, uint16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m63975(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8839 *, uint16_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m63975_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m63976_gshared (TaskCompletionSource_1_t8839 * __this, AggregateException_t1356 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m63976(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8839 *, AggregateException_t1356 *, const MethodInfo*))TaskCompletionSource_1_SetException_m63976_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m63977_gshared (TaskCompletionSource_1_t8839 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m63977(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8839 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m63977_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m63978_gshared (TaskCompletionSource_1_t8839 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m63978(__this, method) (( void (*) (TaskCompletionSource_1_t8839 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m63978_gshared)(__this, method)
