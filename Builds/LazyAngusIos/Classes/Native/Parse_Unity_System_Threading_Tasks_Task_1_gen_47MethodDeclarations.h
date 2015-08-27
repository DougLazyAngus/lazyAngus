#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>
struct Task_1_t8324;
// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t1559;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>>
struct Action_1_t8325;
// System.AggregateException
struct AggregateException_t1339;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m59615(__this, method) (( void (*) (Task_1_t8324 *, const MethodInfo*))Task_1__ctor_m30665_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>::get_Result()
#define Task_1_get_Result_m59616(__this, method) (( Task_1_t1559 * (*) (Task_1_t8324 *, const MethodInfo*))Task_1_get_Result_m30666_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m59617(__this, ___continuation, method) (( Task_t1211 * (*) (Task_1_t8324 *, Action_1_t8325 *, const MethodInfo*))Task_1_ContinueWith_m30668_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>::RunContinuations()
#define Task_1_RunContinuations_m59618(__this, method) (( void (*) (Task_1_t8324 *, const MethodInfo*))Task_1_RunContinuations_m30670_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>::TrySetResult(T)
#define Task_1_TrySetResult_m59619(__this, ___result, method) (( bool (*) (Task_1_t8324 *, Task_1_t1559 *, const MethodInfo*))Task_1_TrySetResult_m30672_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m59620(__this, method) (( bool (*) (Task_1_t8324 *, const MethodInfo*))Task_1_TrySetCanceled_m30674_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Double>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m59621(__this, ___exception, method) (( bool (*) (Task_1_t8324 *, AggregateException_t1339 *, const MethodInfo*))Task_1_TrySetException_m30676_gshared)(__this, ___exception, method)
