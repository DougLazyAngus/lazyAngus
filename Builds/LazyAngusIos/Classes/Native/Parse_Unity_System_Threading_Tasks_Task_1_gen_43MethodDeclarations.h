#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>
struct Task_1_t8188;
// System.Threading.Tasks.Task`1<System.UInt16>
struct Task_1_t1494;
// System.Threading.Tasks.Task
struct Task_t1149;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>>
struct Action_1_t8189;
// System.AggregateException
struct AggregateException_t1279;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m58508(__this, method) (( void (*) (Task_1_t8188 *, const MethodInfo*))Task_1__ctor_m29790_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>::get_Result()
#define Task_1_get_Result_m58509(__this, method) (( Task_1_t1494 * (*) (Task_1_t8188 *, const MethodInfo*))Task_1_get_Result_m29791_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m58510(__this, ___continuation, method) (( Task_t1149 * (*) (Task_1_t8188 *, Action_1_t8189 *, const MethodInfo*))Task_1_ContinueWith_m29793_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>::RunContinuations()
#define Task_1_RunContinuations_m58511(__this, method) (( void (*) (Task_1_t8188 *, const MethodInfo*))Task_1_RunContinuations_m29795_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>::TrySetResult(T)
#define Task_1_TrySetResult_m58512(__this, ___result, method) (( bool (*) (Task_1_t8188 *, Task_1_t1494 *, const MethodInfo*))Task_1_TrySetResult_m29797_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m58513(__this, method) (( bool (*) (Task_1_t8188 *, const MethodInfo*))Task_1_TrySetCanceled_m29799_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.UInt16>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m58514(__this, ___exception, method) (( bool (*) (Task_1_t8188 *, AggregateException_t1279 *, const MethodInfo*))Task_1_TrySetException_m29801_gshared)(__this, ___exception, method)
