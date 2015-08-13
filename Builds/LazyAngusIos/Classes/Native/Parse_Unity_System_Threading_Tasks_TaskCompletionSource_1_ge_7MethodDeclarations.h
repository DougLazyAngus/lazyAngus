#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int16>
struct TaskCompletionSource_1_t8255;
// System.Threading.Tasks.Task`1<System.Int16>
struct Task_1_t1552;
// System.AggregateException
struct AggregateException_t1338;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59182_gshared (TaskCompletionSource_1_t8255 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59182(__this, method) (( void (*) (TaskCompletionSource_1_t8255 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59182_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::get_Task()
extern "C" Task_1_t1552 * TaskCompletionSource_1_get_Task_m59183_gshared (TaskCompletionSource_1_t8255 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59183(__this, method) (( Task_1_t1552 * (*) (TaskCompletionSource_1_t8255 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59183_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59184_gshared (TaskCompletionSource_1_t8255 * __this, Task_1_t1552 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59184(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8255 *, Task_1_t1552 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59184_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59185_gshared (TaskCompletionSource_1_t8255 * __this, int16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59185(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8255 *, int16_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59185_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59186_gshared (TaskCompletionSource_1_t8255 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59186(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8255 *, AggregateException_t1338 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59186_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59187_gshared (TaskCompletionSource_1_t8255 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59187(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8255 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59187_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59188_gshared (TaskCompletionSource_1_t8255 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59188(__this, method) (( bool (*) (TaskCompletionSource_1_t8255 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59188_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59189_gshared (TaskCompletionSource_1_t8255 * __this, int16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59189(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8255 *, int16_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m59189_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59190_gshared (TaskCompletionSource_1_t8255 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59190(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8255 *, AggregateException_t1338 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59190_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59191_gshared (TaskCompletionSource_1_t8255 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59191(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8255 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59191_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m59192_gshared (TaskCompletionSource_1_t8255 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m59192(__this, method) (( void (*) (TaskCompletionSource_1_t8255 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m59192_gshared)(__this, method)
