#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
struct TaskCompletionSource_1_t1294;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1321;
// System.AggregateException
struct AggregateException_t1289;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m7052_gshared (TaskCompletionSource_1_t1294 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m7052(__this, method) (( void (*) (TaskCompletionSource_1_t1294 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7052_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::get_Task()
extern "C" Task_1_t1321 * TaskCompletionSource_1_get_Task_m7054_gshared (TaskCompletionSource_1_t1294 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m7054(__this, method) (( Task_1_t1321 * (*) (TaskCompletionSource_1_t1294 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7054_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m29955_gshared (TaskCompletionSource_1_t1294 * __this, Task_1_t1321 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m29955(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1294 *, Task_1_t1321 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m29955_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m7563_gshared (TaskCompletionSource_1_t1294 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m7563(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1294 *, int32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m7563_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m7584_gshared (TaskCompletionSource_1_t1294 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m7584(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1294 *, AggregateException_t1289 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m7584_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m29956_gshared (TaskCompletionSource_1_t1294 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m29956(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1294 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29956_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m7585_gshared (TaskCompletionSource_1_t1294 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m7585(__this, method) (( bool (*) (TaskCompletionSource_1_t1294 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m7585_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m7561_gshared (TaskCompletionSource_1_t1294 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m7561(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1294 *, int32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m7561_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m7560_gshared (TaskCompletionSource_1_t1294 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m7560(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1294 *, AggregateException_t1289 *, const MethodInfo*))TaskCompletionSource_1_SetException_m7560_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m29957_gshared (TaskCompletionSource_1_t1294 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m29957(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1294 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29957_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m7053_gshared (TaskCompletionSource_1_t1294 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m7053(__this, method) (( void (*) (TaskCompletionSource_1_t1294 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7053_gshared)(__this, method)
