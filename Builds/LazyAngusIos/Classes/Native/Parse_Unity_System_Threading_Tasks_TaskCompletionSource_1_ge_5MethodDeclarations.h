#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Byte>
struct TaskCompletionSource_1_t6536;
// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1435;
// System.AggregateException
struct AggregateException_t1355;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m35368_gshared (TaskCompletionSource_1_t6536 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m35368(__this, method) (( void (*) (TaskCompletionSource_1_t6536 *, const MethodInfo*))TaskCompletionSource_1__ctor_m35368_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::get_Task()
extern "C" Task_1_t1435 * TaskCompletionSource_1_get_Task_m35369_gshared (TaskCompletionSource_1_t6536 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m35369(__this, method) (( Task_1_t1435 * (*) (TaskCompletionSource_1_t6536 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m35369_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m35370_gshared (TaskCompletionSource_1_t6536 * __this, Task_1_t1435 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m35370(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t6536 *, Task_1_t1435 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m35370_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m35371_gshared (TaskCompletionSource_1_t6536 * __this, uint8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m35371(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t6536 *, uint8_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m35371_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m35372_gshared (TaskCompletionSource_1_t6536 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m35372(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t6536 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35372_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m35373_gshared (TaskCompletionSource_1_t6536 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m35373(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t6536 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m35373_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m35374_gshared (TaskCompletionSource_1_t6536 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m35374(__this, method) (( bool (*) (TaskCompletionSource_1_t6536 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m35374_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m35375_gshared (TaskCompletionSource_1_t6536 * __this, uint8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m35375(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t6536 *, uint8_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m35375_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m35376_gshared (TaskCompletionSource_1_t6536 * __this, AggregateException_t1355 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m35376(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t6536 *, AggregateException_t1355 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35376_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m35377_gshared (TaskCompletionSource_1_t6536 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m35377(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t6536 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m35377_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m35378_gshared (TaskCompletionSource_1_t6536 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m35378(__this, method) (( void (*) (TaskCompletionSource_1_t6536 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m35378_gshared)(__this, method)
