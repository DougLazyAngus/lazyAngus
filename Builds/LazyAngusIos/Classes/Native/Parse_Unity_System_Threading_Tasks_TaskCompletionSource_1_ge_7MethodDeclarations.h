﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int16>
struct TaskCompletionSource_1_t8262;
// System.Threading.Tasks.Task`1<System.Int16>
struct Task_1_t1553;
// System.AggregateException
struct AggregateException_t1339;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m59303_gshared (TaskCompletionSource_1_t8262 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m59303(__this, method) (( void (*) (TaskCompletionSource_1_t8262 *, const MethodInfo*))TaskCompletionSource_1__ctor_m59303_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::get_Task()
extern "C" Task_1_t1553 * TaskCompletionSource_1_get_Task_m59304_gshared (TaskCompletionSource_1_t8262 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m59304(__this, method) (( Task_1_t1553 * (*) (TaskCompletionSource_1_t8262 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m59304_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m59305_gshared (TaskCompletionSource_1_t8262 * __this, Task_1_t1553 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m59305(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t8262 *, Task_1_t1553 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m59305_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m59306_gshared (TaskCompletionSource_1_t8262 * __this, int16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m59306(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t8262 *, int16_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m59306_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m59307_gshared (TaskCompletionSource_1_t8262 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59307(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8262 *, AggregateException_t1339 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59307_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m59308_gshared (TaskCompletionSource_1_t8262 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m59308(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t8262 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m59308_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m59309_gshared (TaskCompletionSource_1_t8262 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m59309(__this, method) (( bool (*) (TaskCompletionSource_1_t8262 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m59309_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m59310_gshared (TaskCompletionSource_1_t8262 * __this, int16_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m59310(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t8262 *, int16_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m59310_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m59311_gshared (TaskCompletionSource_1_t8262 * __this, AggregateException_t1339 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59311(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8262 *, AggregateException_t1339 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59311_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m59312_gshared (TaskCompletionSource_1_t8262 * __this, Exception_t57 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m59312(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t8262 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m59312_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int16>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m59313_gshared (TaskCompletionSource_1_t8262 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m59313(__this, method) (( void (*) (TaskCompletionSource_1_t8262 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m59313_gshared)(__this, method)
