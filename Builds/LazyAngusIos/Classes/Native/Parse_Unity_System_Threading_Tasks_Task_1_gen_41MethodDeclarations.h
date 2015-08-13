#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>
struct Task_1_t8245;
// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1551;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>>
struct Action_1_t8246;
// System.AggregateException
struct AggregateException_t1338;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m59139(__this, method) (( void (*) (Task_1_t8245 *, const MethodInfo*))Task_1__ctor_m30544_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>::get_Result()
#define Task_1_get_Result_m59140(__this, method) (( Task_1_t1551 * (*) (Task_1_t8245 *, const MethodInfo*))Task_1_get_Result_m30545_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m59141(__this, ___continuation, method) (( Task_t1210 * (*) (Task_1_t8245 *, Action_1_t8246 *, const MethodInfo*))Task_1_ContinueWith_m30547_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>::RunContinuations()
#define Task_1_RunContinuations_m59142(__this, method) (( void (*) (Task_1_t8245 *, const MethodInfo*))Task_1_RunContinuations_m30549_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>::TrySetResult(T)
#define Task_1_TrySetResult_m59143(__this, ___result, method) (( bool (*) (Task_1_t8245 *, Task_1_t1551 *, const MethodInfo*))Task_1_TrySetResult_m30551_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m59144(__this, method) (( bool (*) (Task_1_t8245 *, const MethodInfo*))Task_1_TrySetCanceled_m30553_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m59145(__this, ___exception, method) (( bool (*) (Task_1_t8245 *, AggregateException_t1338 *, const MethodInfo*))Task_1_TrySetException_m30555_gshared)(__this, ___exception, method)
