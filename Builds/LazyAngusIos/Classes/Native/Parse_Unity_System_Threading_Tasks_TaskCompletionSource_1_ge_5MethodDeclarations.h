#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Byte>
struct TaskCompletionSource_1_t6003;
// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1435;
// System.AggregateException
struct AggregateException_t1355;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m31145_gshared (TaskCompletionSource_1_t6003 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m31145(__this, method) (( void (*) (TaskCompletionSource_1_t6003 *, const MethodInfo*))TaskCompletionSource_1__ctor_m31145_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::get_Task()
extern "C" Task_1_t1435 * TaskCompletionSource_1_get_Task_m31146_gshared (TaskCompletionSource_1_t6003 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m31146(__this, method) (( Task_1_t1435 * (*) (TaskCompletionSource_1_t6003 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m31146_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m31147_gshared (TaskCompletionSource_1_t6003 * __this, Task_1_t1435 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m31147(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t6003 *, Task_1_t1435 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m31147_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m31148_gshared (TaskCompletionSource_1_t6003 * __this, uint8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m31148(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t6003 *, uint8_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m31148_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m31149_gshared (TaskCompletionSource_1_t6003 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m31149(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t6003 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m31149_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m31150_gshared (TaskCompletionSource_1_t6003 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m31150(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t6003 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m31150_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m31151_gshared (TaskCompletionSource_1_t6003 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m31151(__this, method) (( bool (*) (TaskCompletionSource_1_t6003 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m31151_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m31152_gshared (TaskCompletionSource_1_t6003 * __this, uint8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m31152(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t6003 *, uint8_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m31152_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m31153_gshared (TaskCompletionSource_1_t6003 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m31153(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t6003 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_SetException_m31153_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m31154_gshared (TaskCompletionSource_1_t6003 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m31154(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t6003 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m31154_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m31155_gshared (TaskCompletionSource_1_t6003 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m31155(__this, method) (( void (*) (TaskCompletionSource_1_t6003 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m31155_gshared)(__this, method)
