#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Single>
struct TaskCompletionSource_1_t8257;
// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t1510;
// System.AggregateException
struct AggregateException_t1289;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m58865_gshared (TaskCompletionSource_1_t8257 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m58865(__this, method) (( void (*) (TaskCompletionSource_1_t8257 *, const MethodInfo*))TaskCompletionSource_1__ctor_m58865_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Single>::get_Task()
extern "C" Task_1_t1510 * TaskCompletionSource_1_get_Task_m58866_gshared (TaskCompletionSource_1_t8257 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m58866(__this, method) (( Task_1_t1510 * (*) (TaskCompletionSource_1_t8257 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m58866_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m58867_gshared (TaskCompletionSource_1_t8257 * __this, Task_1_t1510 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m58867(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8257 *, Task_1_t1510 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m58867_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m58868_gshared (TaskCompletionSource_1_t8257 * __this, float ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m58868(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8257 *, float, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m58868_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m58869_gshared (TaskCompletionSource_1_t8257 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58869(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8257 *, AggregateException_t1289 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58869_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m58870_gshared (TaskCompletionSource_1_t8257 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m58870(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8257 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m58870_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Single>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m58871_gshared (TaskCompletionSource_1_t8257 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m58871(__this, method) (( bool (*) (TaskCompletionSource_1_t8257 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m58871_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m58872_gshared (TaskCompletionSource_1_t8257 * __this, float ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m58872(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8257 *, float, const MethodInfo*))TaskCompletionSource_1_SetResult_m58872_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m58873_gshared (TaskCompletionSource_1_t8257 * __this, AggregateException_t1289 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58873(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8257 *, AggregateException_t1289 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58873_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m58874_gshared (TaskCompletionSource_1_t8257 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m58874(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8257 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m58874_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Single>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m58875_gshared (TaskCompletionSource_1_t8257 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m58875(__this, method) (( void (*) (TaskCompletionSource_1_t8257 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m58875_gshared)(__this, method)
