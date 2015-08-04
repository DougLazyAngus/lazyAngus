#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>
struct Task_1_t8245;
// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1507;
// System.Threading.Tasks.Task
struct Task_t1157;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>>
struct Action_1_t8246;
// System.AggregateException
struct AggregateException_t1287;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m58810(__this, method) (( void (*) (Task_1_t8245 *, const MethodInfo*))Task_1__ctor_m29853_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>::get_Result()
#define Task_1_get_Result_m58811(__this, method) (( Task_1_t1507 * (*) (Task_1_t8245 *, const MethodInfo*))Task_1_get_Result_m29854_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m58812(__this, ___continuation, method) (( Task_t1157 * (*) (Task_1_t8245 *, Action_1_t8246 *, const MethodInfo*))Task_1_ContinueWith_m29856_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>::RunContinuations()
#define Task_1_RunContinuations_m58813(__this, method) (( void (*) (Task_1_t8245 *, const MethodInfo*))Task_1_RunContinuations_m29858_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>::TrySetResult(T)
#define Task_1_TrySetResult_m58814(__this, ___result, method) (( bool (*) (Task_1_t8245 *, Task_1_t1507 *, const MethodInfo*))Task_1_TrySetResult_m29860_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m58815(__this, method) (( bool (*) (Task_1_t8245 *, const MethodInfo*))Task_1_TrySetCanceled_m29862_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m58816(__this, ___exception, method) (( bool (*) (Task_1_t8245 *, AggregateException_t1287 *, const MethodInfo*))Task_1_TrySetException_m29864_gshared)(__this, ___exception, method)
