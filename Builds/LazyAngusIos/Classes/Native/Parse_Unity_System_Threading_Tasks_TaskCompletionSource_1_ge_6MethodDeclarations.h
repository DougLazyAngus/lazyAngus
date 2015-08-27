#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.SByte>
struct TaskCompletionSource_1_t8250;
// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1552;
// System.AggregateException
struct AggregateException_t1339;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59245_gshared (TaskCompletionSource_1_t8250 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59245(__this, method) (( void (*) (TaskCompletionSource_1_t8250 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59245_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::get_Task()
extern "C" Task_1_t1552 * TaskCompletionSource_1_get_Task_m59246_gshared (TaskCompletionSource_1_t8250 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59246(__this, method) (( Task_1_t1552 * (*) (TaskCompletionSource_1_t8250 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59246_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59247_gshared (TaskCompletionSource_1_t8250 * __this, Task_1_t1552 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59247(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8250 *, Task_1_t1552 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59247_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59248_gshared (TaskCompletionSource_1_t8250 * __this, int8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59248(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8250 *, int8_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59248_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59249_gshared (TaskCompletionSource_1_t8250 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59249(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8250 *, AggregateException_t1339 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59249_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59250_gshared (TaskCompletionSource_1_t8250 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59250(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8250 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59250_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59251_gshared (TaskCompletionSource_1_t8250 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59251(__this, method) (( bool (*) (TaskCompletionSource_1_t8250 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59251_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59252_gshared (TaskCompletionSource_1_t8250 * __this, int8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59252(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8250 *, int8_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m59252_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59253_gshared (TaskCompletionSource_1_t8250 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59253(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8250 *, AggregateException_t1339 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59253_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59254_gshared (TaskCompletionSource_1_t8250 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59254(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8250 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59254_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.SByte>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m59255_gshared (TaskCompletionSource_1_t8250 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m59255(__this, method) (( void (*) (TaskCompletionSource_1_t8250 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m59255_gshared)(__this, method)
