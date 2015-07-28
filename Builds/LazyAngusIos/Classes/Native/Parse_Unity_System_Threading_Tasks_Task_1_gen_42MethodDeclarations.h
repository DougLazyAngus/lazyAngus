#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int16>>
struct Task_1_t8175;
// System.Threading.Tasks.Task`1<System.Int16>
struct Task_1_t1492;
// System.Threading.Tasks.Task
struct Task_t1148;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int16>>>
struct Action_1_t8176;
// System.AggregateException
struct AggregateException_t1278;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int16>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m58450(__this, method) (( void (*) (Task_1_t8175 *, const MethodInfo*))Task_1__ctor_m29790_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int16>>::get_Result()
#define Task_1_get_Result_m58451(__this, method) (( Task_1_t1492 * (*) (Task_1_t8175 *, const MethodInfo*))Task_1_get_Result_m29791_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int16>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m58452(__this, ___continuation, method) (( Task_t1148 * (*) (Task_1_t8175 *, Action_1_t8176 *, const MethodInfo*))Task_1_ContinueWith_m29793_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int16>>::RunContinuations()
#define Task_1_RunContinuations_m58453(__this, method) (( void (*) (Task_1_t8175 *, const MethodInfo*))Task_1_RunContinuations_m29795_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int16>>::TrySetResult(T)
#define Task_1_TrySetResult_m58454(__this, ___result, method) (( bool (*) (Task_1_t8175 *, Task_1_t1492 *, const MethodInfo*))Task_1_TrySetResult_m29797_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int16>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m58455(__this, method) (( bool (*) (Task_1_t8175 *, const MethodInfo*))Task_1_TrySetCanceled_m29799_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Int16>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m58456(__this, ___exception, method) (( bool (*) (Task_1_t8175 *, AggregateException_t1278 *, const MethodInfo*))Task_1_TrySetException_m29801_gshared)(__this, ___exception, method)
