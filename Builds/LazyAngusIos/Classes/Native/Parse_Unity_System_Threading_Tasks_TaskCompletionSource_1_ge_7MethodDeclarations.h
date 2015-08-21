#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int16>
struct TaskCompletionSource_1_t8259;
// System.Threading.Tasks.Task`1<System.Int16>
struct Task_1_t1550;
// System.AggregateException
struct AggregateException_t1336;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59270_gshared (TaskCompletionSource_1_t8259 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59270(__this, method) (( void (*) (TaskCompletionSource_1_t8259 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59270_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::get_Task()
extern "C" Task_1_t1550 * TaskCompletionSource_1_get_Task_m59271_gshared (TaskCompletionSource_1_t8259 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59271(__this, method) (( Task_1_t1550 * (*) (TaskCompletionSource_1_t8259 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59271_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59272_gshared (TaskCompletionSource_1_t8259 * __this, Task_1_t1550 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59272(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8259 *, Task_1_t1550 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59272_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59273_gshared (TaskCompletionSource_1_t8259 * __this, int16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59273(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8259 *, int16_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59273_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59274_gshared (TaskCompletionSource_1_t8259 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59274(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8259 *, AggregateException_t1336 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59274_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59275_gshared (TaskCompletionSource_1_t8259 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59275(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8259 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59275_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59276_gshared (TaskCompletionSource_1_t8259 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59276(__this, method) (( bool (*) (TaskCompletionSource_1_t8259 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59276_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59277_gshared (TaskCompletionSource_1_t8259 * __this, int16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59277(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8259 *, int16_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m59277_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59278_gshared (TaskCompletionSource_1_t8259 * __this, AggregateException_t1336 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59278(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8259 *, AggregateException_t1336 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59278_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59279_gshared (TaskCompletionSource_1_t8259 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59279(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8259 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59279_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m59280_gshared (TaskCompletionSource_1_t8259 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m59280(__this, method) (( void (*) (TaskCompletionSource_1_t8259 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m59280_gshared)(__this, method)
