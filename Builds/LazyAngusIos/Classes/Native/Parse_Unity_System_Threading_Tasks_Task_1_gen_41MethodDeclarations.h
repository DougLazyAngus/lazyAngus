#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>
struct Task_1_t8164;
// System.Threading.Tasks.Task`1<System.SByte>
struct Task_1_t1492;
// System.Threading.Tasks.Task
struct Task_t1149;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>>
struct Action_1_t8165;
// System.AggregateException
struct AggregateException_t1279;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m58392(__this, method) (( void (*) (Task_1_t8164 *, const MethodInfo*))Task_1__ctor_m29790_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>::get_Result()
#define Task_1_get_Result_m58393(__this, method) (( Task_1_t1492 * (*) (Task_1_t8164 *, const MethodInfo*))Task_1_get_Result_m29791_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m58394(__this, ___continuation, method) (( Task_t1149 * (*) (Task_1_t8164 *, Action_1_t8165 *, const MethodInfo*))Task_1_ContinueWith_m29793_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>::RunContinuations()
#define Task_1_RunContinuations_m58395(__this, method) (( void (*) (Task_1_t8164 *, const MethodInfo*))Task_1_RunContinuations_m29795_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>::TrySetResult(T)
#define Task_1_TrySetResult_m58396(__this, ___result, method) (( bool (*) (Task_1_t8164 *, Task_1_t1492 *, const MethodInfo*))Task_1_TrySetResult_m29797_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m58397(__this, method) (( bool (*) (Task_1_t8164 *, const MethodInfo*))Task_1_TrySetCanceled_m29799_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.SByte>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m58398(__this, ___exception, method) (( bool (*) (Task_1_t8164 *, AggregateException_t1279 *, const MethodInfo*))Task_1_TrySetException_m29801_gshared)(__this, ___exception, method)
