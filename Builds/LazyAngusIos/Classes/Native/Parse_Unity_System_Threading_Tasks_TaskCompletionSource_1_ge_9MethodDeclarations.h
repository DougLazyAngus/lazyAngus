#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>
struct TaskCompletionSource_1_t8856;
// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t1575;
// System.AggregateException
struct AggregateException_t1359;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m64038_gshared (TaskCompletionSource_1_t8856 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m64038(__this, method) (( void (*) (TaskCompletionSource_1_t8856 *, const MethodInfo*))TaskCompletionSource_1__ctor_m64038_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::get_Task()
extern "C" Task_1_t1575 * TaskCompletionSource_1_get_Task_m64039_gshared (TaskCompletionSource_1_t8856 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m64039(__this, method) (( Task_1_t1575 * (*) (TaskCompletionSource_1_t8856 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m64039_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m64040_gshared (TaskCompletionSource_1_t8856 * __this, Task_1_t1575 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m64040(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8856 *, Task_1_t1575 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m64040_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m64041_gshared (TaskCompletionSource_1_t8856 * __this, uint32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m64041(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8856 *, uint32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m64041_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m64042_gshared (TaskCompletionSource_1_t8856 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64042(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8856 *, AggregateException_t1359 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64042_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m64043_gshared (TaskCompletionSource_1_t8856 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64043(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8856 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64043_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m64044_gshared (TaskCompletionSource_1_t8856 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m64044(__this, method) (( bool (*) (TaskCompletionSource_1_t8856 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m64044_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m64045_gshared (TaskCompletionSource_1_t8856 * __this, uint32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m64045(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8856 *, uint32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m64045_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m64046_gshared (TaskCompletionSource_1_t8856 * __this, AggregateException_t1359 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64046(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8856 *, AggregateException_t1359 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64046_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m64047_gshared (TaskCompletionSource_1_t8856 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64047(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8856 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64047_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt32>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m64048_gshared (TaskCompletionSource_1_t8856 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m64048(__this, method) (( void (*) (TaskCompletionSource_1_t8856 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m64048_gshared)(__this, method)
