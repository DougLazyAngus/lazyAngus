﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>
struct TaskCompletionSource_1_t1303;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>
struct Task_1_t1356;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1283;
// System.AggregateException
struct AggregateException_t1279;
// System.Exception
struct Exception_t57;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m7519(__this, method) (( void (*) (TaskCompletionSource_1_t1303 *, const MethodInfo*))TaskCompletionSource_1__ctor_m6983_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::get_Task()
#define TaskCompletionSource_1_get_Task_m7520(__this, method) (( Task_1_t1356 * (*) (TaskCompletionSource_1_t1303 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m6985_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m59220(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1303 *, Task_1_t1356 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m29823_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m7516(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1303 *, TaskU5BU5D_t1283*, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m29824_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m59221(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1303 *, AggregateException_t1279 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29825_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m59222(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1303 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29826_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m59223(__this, method) (( bool (*) (TaskCompletionSource_1_t1303 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m29827_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m59224(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1303 *, TaskU5BU5D_t1283*, const MethodInfo*))TaskCompletionSource_1_SetResult_m7427_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m59225(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1303 *, AggregateException_t1279 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29828_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m59226(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1303 *, Exception_t57 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29829_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m59227(__this, method) (( void (*) (TaskCompletionSource_1_t1303 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m6984_gshared)(__this, method)
