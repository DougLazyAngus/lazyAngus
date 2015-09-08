#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.SByte>
struct TaskCompletionSource_1_t8820;
// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1572;
// System.AggregateException
struct AggregateException_t1359;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m63864_gshared (TaskCompletionSource_1_t8820 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m63864(__this, method) (( void (*) (TaskCompletionSource_1_t8820 *, const MethodInfo*))TaskCompletionSource_1__ctor_m63864_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::get_Task()
extern "C" Task_1_t1572 * TaskCompletionSource_1_get_Task_m63865_gshared (TaskCompletionSource_1_t8820 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m63865(__this, method) (( Task_1_t1572 * (*) (TaskCompletionSource_1_t8820 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m63865_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m63866_gshared (TaskCompletionSource_1_t8820 * __this, Task_1_t1572 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m63866(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8820 *, Task_1_t1572 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m63866_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m63867_gshared (TaskCompletionSource_1_t8820 * __this, int8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m63867(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8820 *, int8_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m63867_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m63868_gshared (TaskCompletionSource_1_t8820 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m63868(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8820 *, AggregateException_t1359 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m63868_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m63869_gshared (TaskCompletionSource_1_t8820 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m63869(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8820 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m63869_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m63870_gshared (TaskCompletionSource_1_t8820 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m63870(__this, method) (( bool (*) (TaskCompletionSource_1_t8820 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m63870_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m63871_gshared (TaskCompletionSource_1_t8820 * __this, int8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m63871(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8820 *, int8_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m63871_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m63872_gshared (TaskCompletionSource_1_t8820 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m63872(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8820 *, AggregateException_t1359 *, const MethodInfo*))TaskCompletionSource_1_SetException_m63872_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m63873_gshared (TaskCompletionSource_1_t8820 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m63873(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8820 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m63873_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m63874_gshared (TaskCompletionSource_1_t8820 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m63874(__this, method) (( void (*) (TaskCompletionSource_1_t8820 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m63874_gshared)(__this, method)
