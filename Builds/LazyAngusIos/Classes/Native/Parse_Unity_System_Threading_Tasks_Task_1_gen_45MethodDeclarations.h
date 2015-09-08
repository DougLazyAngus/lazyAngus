#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>
struct Task_1_t8870;
// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1576;
// System.Threading.Tasks.Task
struct Task_t1231;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>>
struct Action_1_t8871;
// System.AggregateException
struct AggregateException_t1359;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m64111(__this, method) (( void (*) (Task_1_t8870 *, const MethodInfo*))Task_1__ctor_m35245_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::get_Result()
#define Task_1_get_Result_m64112(__this, method) (( Task_1_t1576 * (*) (Task_1_t8870 *, const MethodInfo*))Task_1_get_Result_m35246_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m64113(__this, ___continuation, method) (( Task_t1231 * (*) (Task_1_t8870 *, Action_1_t8871 *, const MethodInfo*))Task_1_ContinueWith_m35248_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::RunContinuations()
#define Task_1_RunContinuations_m64114(__this, method) (( void (*) (Task_1_t8870 *, const MethodInfo*))Task_1_RunContinuations_m35250_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::TrySetResult(T)
#define Task_1_TrySetResult_m64115(__this, ___result, method) (( bool (*) (Task_1_t8870 *, Task_1_t1576 *, const MethodInfo*))Task_1_TrySetResult_m35252_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m64116(__this, method) (( bool (*) (Task_1_t8870 *, const MethodInfo*))Task_1_TrySetCanceled_m35254_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int64>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m64117(__this, ___exception, method) (( bool (*) (Task_1_t8870 *, AggregateException_t1359 *, const MethodInfo*))Task_1_TrySetException_m35256_gshared)(__this, ___exception, method)
