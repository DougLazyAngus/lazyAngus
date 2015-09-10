#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>
struct Task_1_t8865;
// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t1582;
// System.Threading.Tasks.Task
struct Task_t1238;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>>
struct Action_1_t8866;
// System.AggregateException
struct AggregateException_t1366;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m64110(__this, method) (( void (*) (Task_1_t8865 *, const MethodInfo*))Task_1__ctor_m35302_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>::get_Result()
#define Task_1_get_Result_m64111(__this, method) (( Task_1_t1582 * (*) (Task_1_t8865 *, const MethodInfo*))Task_1_get_Result_m35303_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m64112(__this, ___continuation, method) (( Task_t1238 * (*) (Task_1_t8865 *, Action_1_t8866 *, const MethodInfo*))Task_1_ContinueWith_m35305_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>::RunContinuations()
#define Task_1_RunContinuations_m64113(__this, method) (( void (*) (Task_1_t8865 *, const MethodInfo*))Task_1_RunContinuations_m35307_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>::TrySetResult(T)
#define Task_1_TrySetResult_m64114(__this, ___result, method) (( bool (*) (Task_1_t8865 *, Task_1_t1582 *, const MethodInfo*))Task_1_TrySetResult_m35309_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m64115(__this, method) (( bool (*) (Task_1_t8865 *, const MethodInfo*))Task_1_TrySetCanceled_m35311_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt32>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m64116(__this, ___exception, method) (( bool (*) (Task_1_t8865 *, AggregateException_t1366 *, const MethodInfo*))Task_1_TrySetException_m35313_gshared)(__this, ___exception, method)
