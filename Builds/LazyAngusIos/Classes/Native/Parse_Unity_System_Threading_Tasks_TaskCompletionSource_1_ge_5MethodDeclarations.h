#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Byte>
struct TaskCompletionSource_1_t6549;
// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1446;
// System.AggregateException
struct AggregateException_t1366;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m35450_gshared (TaskCompletionSource_1_t6549 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m35450(__this, method) (( void (*) (TaskCompletionSource_1_t6549 *, const MethodInfo*))TaskCompletionSource_1__ctor_m35450_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::get_Task()
extern "C" Task_1_t1446 * TaskCompletionSource_1_get_Task_m35451_gshared (TaskCompletionSource_1_t6549 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m35451(__this, method) (( Task_1_t1446 * (*) (TaskCompletionSource_1_t6549 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m35451_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m35452_gshared (TaskCompletionSource_1_t6549 * __this, Task_1_t1446 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m35452(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t6549 *, Task_1_t1446 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m35452_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m35453_gshared (TaskCompletionSource_1_t6549 * __this, uint8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m35453(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t6549 *, uint8_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m35453_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m35454_gshared (TaskCompletionSource_1_t6549 * __this, AggregateException_t1366 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m35454(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t6549 *, AggregateException_t1366 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35454_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m35455_gshared (TaskCompletionSource_1_t6549 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m35455(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t6549 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35455_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m35456_gshared (TaskCompletionSource_1_t6549 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m35456(__this, method) (( bool (*) (TaskCompletionSource_1_t6549 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m35456_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m35457_gshared (TaskCompletionSource_1_t6549 * __this, uint8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m35457(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t6549 *, uint8_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m35457_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m35458_gshared (TaskCompletionSource_1_t6549 * __this, AggregateException_t1366 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m35458(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t6549 *, AggregateException_t1366 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35458_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m35459_gshared (TaskCompletionSource_1_t6549 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m35459(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t6549 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35459_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m35460_gshared (TaskCompletionSource_1_t6549 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m35460(__this, method) (( void (*) (TaskCompletionSource_1_t6549 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m35460_gshared)(__this, method)
