#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>
struct TaskCompletionSource_1_t8851;
// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t1581;
// System.AggregateException
struct AggregateException_t1366;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m64037_gshared (TaskCompletionSource_1_t8851 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m64037(__this, method) (( void (*) (TaskCompletionSource_1_t8851 *, const MethodInfo*))TaskCompletionSource_1__ctor_m64037_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::get_Task()
extern "C" Task_1_t1581 * TaskCompletionSource_1_get_Task_m64038_gshared (TaskCompletionSource_1_t8851 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m64038(__this, method) (( Task_1_t1581 * (*) (TaskCompletionSource_1_t8851 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m64038_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m64039_gshared (TaskCompletionSource_1_t8851 * __this, Task_1_t1581 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m64039(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8851 *, Task_1_t1581 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m64039_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m64040_gshared (TaskCompletionSource_1_t8851 * __this, uint16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m64040(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8851 *, uint16_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m64040_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m64041_gshared (TaskCompletionSource_1_t8851 * __this, AggregateException_t1366 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64041(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8851 *, AggregateException_t1366 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64041_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m64042_gshared (TaskCompletionSource_1_t8851 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m64042(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8851 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m64042_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m64043_gshared (TaskCompletionSource_1_t8851 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m64043(__this, method) (( bool (*) (TaskCompletionSource_1_t8851 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m64043_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m64044_gshared (TaskCompletionSource_1_t8851 * __this, uint16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m64044(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8851 *, uint16_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m64044_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m64045_gshared (TaskCompletionSource_1_t8851 * __this, AggregateException_t1366 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64045(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8851 *, AggregateException_t1366 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64045_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m64046_gshared (TaskCompletionSource_1_t8851 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m64046(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8851 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m64046_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.UInt16>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m64047_gshared (TaskCompletionSource_1_t8851 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m64047(__this, method) (( void (*) (TaskCompletionSource_1_t8851 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m64047_gshared)(__this, method)
