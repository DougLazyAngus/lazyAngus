#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Byte>
struct TaskCompletionSource_1_t5894;
// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1367;
// System.AggregateException
struct AggregateException_t1287;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m30001_gshared (TaskCompletionSource_1_t5894 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m30001(__this, method) (( void (*) (TaskCompletionSource_1_t5894 *, const MethodInfo*))TaskCompletionSource_1__ctor_m30001_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::get_Task()
extern "C" Task_1_t1367 * TaskCompletionSource_1_get_Task_m30002_gshared (TaskCompletionSource_1_t5894 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m30002(__this, method) (( Task_1_t1367 * (*) (TaskCompletionSource_1_t5894 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m30002_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m30003_gshared (TaskCompletionSource_1_t5894 * __this, Task_1_t1367 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m30003(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t5894 *, Task_1_t1367 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m30003_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m30004_gshared (TaskCompletionSource_1_t5894 * __this, uint8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m30004(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t5894 *, uint8_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m30004_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m30005_gshared (TaskCompletionSource_1_t5894 * __this, AggregateException_t1287 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m30005(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t5894 *, AggregateException_t1287 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30005_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m30006_gshared (TaskCompletionSource_1_t5894 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m30006(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t5894 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m30006_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m30007_gshared (TaskCompletionSource_1_t5894 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m30007(__this, method) (( bool (*) (TaskCompletionSource_1_t5894 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m30007_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m30008_gshared (TaskCompletionSource_1_t5894 * __this, uint8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m30008(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t5894 *, uint8_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m30008_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m30009_gshared (TaskCompletionSource_1_t5894 * __this, AggregateException_t1287 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m30009(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t5894 *, AggregateException_t1287 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30009_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m30010_gshared (TaskCompletionSource_1_t5894 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m30010(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t5894 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m30010_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m30011_gshared (TaskCompletionSource_1_t5894 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m30011(__this, method) (( void (*) (TaskCompletionSource_1_t5894 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m30011_gshared)(__this, method)
