#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.SByte>
struct TaskCompletionSource_1_t8814;
// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1568;
// System.AggregateException
struct AggregateException_t1355;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m63839_gshared (TaskCompletionSource_1_t8814 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m63839(__this, method) (( void (*) (TaskCompletionSource_1_t8814 *, const MethodInfo*))TaskCompletionSource_1__ctor_m63839_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::get_Task()
extern "C" Task_1_t1568 * TaskCompletionSource_1_get_Task_m63840_gshared (TaskCompletionSource_1_t8814 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m63840(__this, method) (( Task_1_t1568 * (*) (TaskCompletionSource_1_t8814 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m63840_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m63841_gshared (TaskCompletionSource_1_t8814 * __this, Task_1_t1568 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m63841(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8814 *, Task_1_t1568 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m63841_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m63842_gshared (TaskCompletionSource_1_t8814 * __this, int8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m63842(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8814 *, int8_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m63842_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m63843_gshared (TaskCompletionSource_1_t8814 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m63843(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8814 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m63843_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m63844_gshared (TaskCompletionSource_1_t8814 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m63844(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8814 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m63844_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m63845_gshared (TaskCompletionSource_1_t8814 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m63845(__this, method) (( bool (*) (TaskCompletionSource_1_t8814 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m63845_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m63846_gshared (TaskCompletionSource_1_t8814 * __this, int8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m63846(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8814 *, int8_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m63846_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m63847_gshared (TaskCompletionSource_1_t8814 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m63847(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8814 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_SetException_m63847_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m63848_gshared (TaskCompletionSource_1_t8814 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m63848(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8814 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m63848_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m63849_gshared (TaskCompletionSource_1_t8814 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m63849(__this, method) (( void (*) (TaskCompletionSource_1_t8814 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m63849_gshared)(__this, method)
