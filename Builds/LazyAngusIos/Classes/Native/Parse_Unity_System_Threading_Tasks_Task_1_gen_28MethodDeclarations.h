#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>
struct Task_1_t6554;
// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1446;
// System.Threading.Tasks.Task
struct Task_t1238;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>>
struct Action_1_t6555;
// System.AggregateException
struct AggregateException_t1366;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m35508(__this, method) (( void (*) (Task_1_t6554 *, const MethodInfo*))Task_1__ctor_m35302_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>::get_Result()
#define Task_1_get_Result_m35509(__this, method) (( Task_1_t1446 * (*) (Task_1_t6554 *, const MethodInfo*))Task_1_get_Result_m35303_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m35510(__this, ___continuation, method) (( Task_t1238 * (*) (Task_1_t6554 *, Action_1_t6555 *, const MethodInfo*))Task_1_ContinueWith_m35305_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>::RunContinuations()
#define Task_1_RunContinuations_m35511(__this, method) (( void (*) (Task_1_t6554 *, const MethodInfo*))Task_1_RunContinuations_m35307_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>::TrySetResult(T)
#define Task_1_TrySetResult_m35512(__this, ___result, method) (( bool (*) (Task_1_t6554 *, Task_1_t1446 *, const MethodInfo*))Task_1_TrySetResult_m35309_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m35513(__this, method) (( bool (*) (Task_1_t6554 *, const MethodInfo*))Task_1_TrySetCanceled_m35311_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m35514(__this, ___exception, method) (( bool (*) (Task_1_t6554 *, AggregateException_t1366 *, const MethodInfo*))Task_1_TrySetException_m35313_gshared)(__this, ___exception, method)
