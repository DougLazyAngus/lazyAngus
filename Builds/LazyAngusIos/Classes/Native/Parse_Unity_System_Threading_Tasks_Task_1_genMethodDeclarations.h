#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t1387;
// System.Threading.Tasks.Task
struct Task_t1228;
// System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Action_1_t6526;
// System.AggregateException
struct AggregateException_t1356;

// System.Void System.Threading.Tasks.Task`1<System.Boolean>::.ctor()
// System.Threading.Tasks.Task`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_16MethodDeclarations.h"
#define Task_1__ctor_m35279(__this, method) (( void (*) (Task_1_t1387 *, const MethodInfo*))Task_1__ctor_m35280_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Boolean>::get_Result()
#define Task_1_get_Result_m7505(__this, method) (( bool (*) (Task_1_t1387 *, const MethodInfo*))Task_1_get_Result_m35281_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Boolean>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m35282(__this, ___continuation, method) (( Task_t1228 * (*) (Task_1_t1387 *, Action_1_t6526 *, const MethodInfo*))Task_1_ContinueWith_m35283_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::RunContinuations()
#define Task_1_RunContinuations_m35284(__this, method) (( void (*) (Task_1_t1387 *, const MethodInfo*))Task_1_RunContinuations_m35285_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetResult(T)
#define Task_1_TrySetResult_m35286(__this, ___result, method) (( bool (*) (Task_1_t1387 *, bool, const MethodInfo*))Task_1_TrySetResult_m35287_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetCanceled()
#define Task_1_TrySetCanceled_m35288(__this, method) (( bool (*) (Task_1_t1387 *, const MethodInfo*))Task_1_TrySetCanceled_m35289_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m35290(__this, ___exception, method) (( bool (*) (Task_1_t1387 *, AggregateException_t1356 *, const MethodInfo*))Task_1_TrySetException_m35291_gshared)(__this, ___exception, method)
